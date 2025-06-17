function z_seafloor = get_seafloor_height(x, y, height_map)
    z_seafloor = interp2(height_map.X, height_map.Y, height_map.Z, x, y, 'linear', 0);
    % 'linear', 0 ensures out of bounds points return 0 like how
    % default was declared
end