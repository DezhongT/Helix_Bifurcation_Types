clc; clear all; close all;
FONT = 'Arial';
FONTSIZE = 12;
pWidth = 2.5; % in
pHeight = 1.875;

rho = 1180;
g = 10;
h = 0.8e-3;
E = 1.8e6;
lgb = (h^2 * E/ (8*rho*g))^(1/3);
h1 = figure();

[K, T, O, P] = getBirfucationType_Mid("../src/datafiles");


scatter3(K,T, O, 10, P * 10);

axis([-1 8*pi -8*pi 8*pi -8*pi 8*pi])
daspect([1 1 1])
light('Position',[20 -20 10],'Style','infinite')
set(gcf,'color','w')
view(65,10)

% % % adjust plot parameters
% % axis([-1 4*pi -6*pi 6*pi -6*pi 6*pi])
% % daspect([1 1 1])
% % light('Position',[20 -20 10],'Style','infinite')
% % set(gcf,'color','w')
% % view(65,10)
% 
% % figure()
% % plot(atan(C1), eBulk, 'o');
% % set(gca, 'xscale', 'log');
% 
% 
% % label axes
% % xlabel('Curvature, \kappa')
% % ylabel('Torsion, \tau')
% % zlabel('Twist moment, \omega')
% % 
% % 
% % set(gca,'Fontname', FONT,'FontSize',FONTSIZE);
% % set(gcf, 'PaperUnits','inches', 'PaperPosition',[0 0 pWidth pHeight], ...
% %     'PaperSize', [pWidth pHeight]);
% % saveas(h1, 'analytical_solution.pdf');