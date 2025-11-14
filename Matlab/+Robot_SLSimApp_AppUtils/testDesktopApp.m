appFolder = fullfile(fileparts(mfilename("fullpath")), '..');
deployFolder = fullfile(appFolder, 'deployedDesktopApp');
assert(isfolder(deployFolder), 'Run ''Robot_SLSimApp_AppUtils.deployDesktopApp'' first.');
system(fullfile(deployFolder, "Robot_SLSimApp.exe"));
