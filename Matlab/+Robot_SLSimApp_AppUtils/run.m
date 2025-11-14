appFolder = fullfile(fileparts(mfilename("fullpath")), '..');
mlappFile = fullfile(appFolder, 'Robot_SLSimApp');
run(mlappFile);
