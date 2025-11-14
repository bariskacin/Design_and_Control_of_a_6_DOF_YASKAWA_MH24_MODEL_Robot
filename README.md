# Robot Design and Control

This repository contains the tarjectory planing example for a 6-DOF YASKAWA MH24 model robot that tracks all vertices of a cube defined in its workspace. Starting from the home position, the robot moves to each vertex of the cube in sequence and returns to the home position at the end.

The project includes:
- Definnition of the cube in Cartesian space. (Workscape)
- Inverse kinematics to compute joint angles for each vertex.
- Trajectory planning to generate smooth paths between vertices.
- Matlab scripts and Simulink model for simulation and visualization.

Trajectory planning and control algorithms are implemented in MATLAB scripts, and the robot model is built using Simscape. The project also includes SolidWorks part files and their STEP exports for 3D modeling.

**Screenshot:**

![Screenshot](Matlab/Screenshot 2025-11-14 194719.png)

## Contents
- `Matlab/` — MATLAB scripts, Simulink model, and assets
- `sldprt/` — SolidWorks part files
- `step/` — STEP exports of parts

## License
This project is licensed under the GNU GPLv3. See `LICENSE` for details.

## Notes
The screenshot file is referenced from `Matlab/Screenshot 2025-11-14 194719.png`.
