function depthMat = decompressDepthImage(compressedMsg)
    coder.extrinsic('rosReadImage');
    depthMat = zeros(492, 768, 'uint16'); % preallocate
    
    if ~isempty(compressedMsg)
        depthMat = rosReadImage(compressedMsg); % works if ROS Toolbox is installed
    end
end
