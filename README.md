# Robot Design and Control

**Screenshot:**

![Screenshot](Matlab/Screenshot%202025-11-14%20194719.png)

**Video Demonstration:**
https://youtu.be/_DluXOQhuWc?si=gg2KMpRMNR8qi_b0

## Overview
This repository contains a trajectory planning example for a 6-DOF YASKAWA MH24 model robot. The robot is programmed to track all vertices of a cube defined in its workspace. Starting from the home position, the robot moves to each vertex of the cube in sequence and returns to the home position at the end.


The project includes:
- Definition of the cube in Cartesian space (Workspace)
- Inverse kinematics to compute joint angles for each vertex
- Trajectory planning to generate smooth paths between vertices
- MATLAB scripts and Simulink model for simulation and visualization


Trajectory planning and control algorithms are implemented in MATLAB scripts, and the robot model is built using Simscape. The project also includes SolidWorks part files and their STEP exports for 3D modeling.

## Contents
- `Matlab/` — MATLAB scripts, Simulink model, and assets
- `sldprt/` — SolidWorks part files
- `step/` — STEP exports of parts

## License
This project is licensed under the GNU GPLv3. See `LICENSE` for details.

## Notes
The screenshot file is referenced from `Matlab/Screenshot 2025-11-14 194719.png`.
