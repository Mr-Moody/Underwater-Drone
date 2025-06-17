clear; clc;
% read file
seafloor = stlread('../Models/seabed.stl');
vertices = seafloor.Points; % nx3 array of [x,y,z] coords
faces = seafloor.ConnectivityList;  % nx3 arrays of vertex indices forming triangles

% interpolate at x,y to get z height val for the seafloor
% z_seafloor = interp2(heightmap.X, heightmap.Y, heightmap.Z, x, y);
% [X,Y] = meshgrid(x,y);
% surfl(X, Y, z_seafloor);

figure();
% plotting
trisurf(faces, vertices(:,1), vertices(:,2), vertices(:,3), 'FaceColor', 'blue', 'EdgeColor', 'none');
xlabel('x (m)'); ylabel('y (m)'); zlabel('z (m)');
title('blender seafloor');
axis equal;

% convert into heightmap
x_min = min(vertices(:,1)); x_max = max(vertices(:,1));
y_min = min(vertices(:,2)); y_max = max(vertices(:,2));
grid_res = 1; % 1 meter resolution
x_grid = x_min:grid_res:x_max;
y_grid = y_min:grid_res:y_max;
[X, Y] = meshgrid(x_grid, y_grid);
Z = nan(size(X)); % initialise heightmap

% very approximate interpolation (otherwise would need to use triangleRayIntersection function from MATLAB File Exchange
F = scatteredInterpolant(vertices(:,1), vertices(:,2), vertices(:,3), 'linear', 'nearest');
Z = F(X, Y); % interpolate z at each grid point
Z(isnan(Z)) = 0;  % replace NaNs default to 0

% save heightmap
heightmap.X = X;
heightmap.Y = Y;
heightmap.Z = Z;
save('seafloor_heightmap.mat', 'heightmap');