function range = ultrasonic_model(x, y, z, heightmap)
    z_seafloor = get_seafloor_height(x, y, heightmap);
    range = z - z_seafloor; % for altitude from seafloor / ceil - depth
    range = range + 0.01 * randn(1); % add noise for more truthful measurements
    if range < 0    % checks for invalid measurements like below 0 (seafloor)
        range = NaN;    % so the EKF can skip it
    end
end