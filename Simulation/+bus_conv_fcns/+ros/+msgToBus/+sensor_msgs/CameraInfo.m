function slBusOut = CameraInfo(msgIn, slBusOut, varargin)
%#codegen
%   Copyright 2021-2022 The MathWorks, Inc.
    currentlength = length(slBusOut.Header);
    for iter=1:currentlength
        slBusOut.Header(iter) = bus_conv_fcns.ros.msgToBus.std_msgs.Header(msgIn.Header(iter),slBusOut(1).Header(iter),varargin{:});
    end
    slBusOut.Header = bus_conv_fcns.ros.msgToBus.std_msgs.Header(msgIn.Header,slBusOut(1).Header,varargin{:});
    slBusOut.Height = uint32(msgIn.Height);
    slBusOut.Width = uint32(msgIn.Width);
    slBusOut.DistortionModel_SL_Info.ReceivedLength = uint32(strlength(msgIn.DistortionModel));
    currlen  = min(slBusOut.DistortionModel_SL_Info.ReceivedLength, length(slBusOut.DistortionModel));
    slBusOut.DistortionModel_SL_Info.CurrentLength = uint32(currlen);
    slBusOut.DistortionModel(1:currlen) = uint8(char(msgIn.DistortionModel(1:currlen))).';
    maxlength = length(slBusOut.D);
    recvdlength = length(msgIn.D);
    currentlength = min(maxlength, recvdlength);
    if (max(recvdlength) > maxlength) && ...
            isequal(varargin{1}{1},ros.slros.internal.bus.VarLenArrayTruncationAction.EmitWarning)
        diag = MSLDiagnostic([], ...
                             message('ros:slros:busconvert:TruncatedArray', ...
                                     'D', msgIn.MessageType, maxlength, max(recvdlength), maxlength, varargin{2}));
        reportAsWarning(diag);
    end
    slBusOut.D_SL_Info.ReceivedLength = uint32(recvdlength);
    slBusOut.D_SL_Info.CurrentLength = uint32(currentlength);
    slBusOut.D = double(msgIn.D(1:slBusOut.D_SL_Info.CurrentLength));
    if recvdlength < maxlength
    slBusOut.D(recvdlength+1:maxlength) = 0;
    end
                    currentlength = length(slBusOut.K);
                    slBusOut.K = double(msgIn.K(1:currentlength));
                    currentlength = length(slBusOut.R);
                    slBusOut.R = double(msgIn.R(1:currentlength));
                    currentlength = length(slBusOut.P);
                    slBusOut.P = double(msgIn.P(1:currentlength));
    slBusOut.BinningX = uint32(msgIn.BinningX);
    slBusOut.BinningY = uint32(msgIn.BinningY);
    currentlength = length(slBusOut.Roi);
    for iter=1:currentlength
        slBusOut.Roi(iter) = bus_conv_fcns.ros.msgToBus.sensor_msgs.RegionOfInterest(msgIn.Roi(iter),slBusOut(1).Roi(iter),varargin{:});
    end
    slBusOut.Roi = bus_conv_fcns.ros.msgToBus.sensor_msgs.RegionOfInterest(msgIn.Roi,slBusOut(1).Roi,varargin{:});
end
