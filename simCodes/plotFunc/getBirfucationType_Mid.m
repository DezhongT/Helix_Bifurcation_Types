function [K, T, O, P] = getBirfucationType(name)

dinfo = dir(sprintf("%s/*.txt", name));
K = [];
T = [];
O = [];
P = [];
% h1 = figure(1);
for i = 1:length(dinfo)
    name = dinfo(i).name;
    C = regexp(name,'[+-]?\d+\.?\d*','match');
    
    c1 = str2double(C{2});
    c2 = str2double(C{4});
    
    poisson = str2double(C{7});

    kapB = str2double(C{8});

    folder = dinfo(i).folder;
    
    fileName = sprintf("%s/%s", folder, name);
    
    data = importdata(fileName);

    kapo = data(:, 1);
    erroro = data(:, 10);
    data = data(data(:,1) > kapB/2, :);


    kap = data(:,1);
    tau = data(:,2);
    omega = data(:,3);
    error = data(:, 10);
    marker = data(:, 12);

    kap1 = kap(marker == 0);
    error1 = error(marker == 0);
    kap2 = kap(marker == 2);
    error2 = error(marker == 2);

    plot(kap1, error1, 'o-');
    hold on;
    plot(kap2, error2, '^-');
    hold off;

    % compute the distance

    pause(0.01);
    drawnow();

%     pause(0.01);
% 
%     drawnow();
    
%     [a, b, axisL] = computeGeometry(kap, tau);
%     error = error./a; 
%     dis = sqrt(kap.^2 + tau.^2 + omega.^2);
%     
%     x_factor = max(dis) - min(dis);
%     initialX = min(dis);
%     y_factor = max(error);
%     
%     X = (dis - initialX)/x_factor;
%     Y = error/y_factor;
%     
%     dataK = [X, Y];
%     ids = dbscan(dataK, 0.2, 10);   
%     idx = find(ids == 1);
%     idx = idx(end);
%     
%     Peaks = [kap(idx), error(idx) * a(idx)];
%     
%     idx = find(error > 1, 1, 'first');
%     KRef = kap(idx);
%     K = [K; KRef];
%     T = [T; KRef * c1];
%     O = [O; KRef * c2];
%     P = [P; poisson];
%     buckInfo{i} = Peaks;
%     
%     plot(kap, error, 'o-');    
end


end