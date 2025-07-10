function slBusOut = RegionOfInterest(msgIn, slBusOut, varargin)
%#codegen
%   Copyright 2021-2022 The MathWorks, Inc.
    slBusOut.XOffset = uint32(msgIn.XOffset);
    slBusOut.YOffset = uint32(msgIn.YOffset);
    slBusOut.Height = uint32(msgIn.Height);
    slBusOut.Width = uint32(msgIn.Width);
    slBusOut.DoRectify = logical(msgIn.DoRectify);
end
