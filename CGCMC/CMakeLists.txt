cmake_minimum_required(VERSION 3.17)
project(CGCMC)

set(CMAKE_CXX_STANDARD 17)

add_executable(CGCMC main.cpp Input/InputData.cpp Input/InputData.h Potential/Potential.cpp Potential/Potential.h Potential/LJ.cpp Potential/LJ.h SimulatorEngine/SimulatorEngine.cpp SimulatorEngine/SimulatorEngine.h Structure/Particle.cpp Structure/Particle.h Structure/Atom.cpp Structure/Atom.h Structure/Group.cpp Structure/Group.h test.h)