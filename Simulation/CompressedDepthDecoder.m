classdef CompressedDepthDecoder < matlab.System
    % Decompress compressedDepthImage from ROS into depth matrix
    
    properties (Access = private)
        ImageHeight = 492;
        ImageWidth = 768;
    end
    
    methods (Access = protected)
        function setupImpl(~)
        end
        
        function depthMat = stepImpl(obj, compressedMsg)
            % Declare extrinsic functions
            coder.extrinsic('tempname', 'fopen', 'fwrite', 'fclose', 'imread', 'delete');
            
            % Preallocate output
            depthMat = zeros(obj.ImageHeight, obj.ImageWidth, 'uint16');
            
            % Save compressed PNG bytes to a temporary file
            fileName = [tempname, '.png'];
            fid = fopen(fileName, 'w');
            if fid > 0
                fwrite(fid, uint8(compressedMsg.Data), 'uint8');
                fclose(fid);
                
                % Read the PNG image back
                raw = imread(fileName);
                delete(fileName);
                
                % Convert to uint16 if needed
                if ~isempty(raw)
                    depthMat = uint16(raw);
                end
            end
        end
        
        function resetImpl(~)
        end
        
        function outSize = getOutputSizeImpl(obj)
            outSize = [obj.ImageHeight, obj.ImageWidth];
        end
        
        function outType = getOutputDataTypeImpl(~)
            outType = 'uint16';
        end
        
        function outComplexity = isOutputComplexImpl(~)
            outComplexity = false;
        end
    end
end
