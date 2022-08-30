//
// Created by milad on 2021-02-16.
//
#include <iostream>
#include <vector>
#include <fstream>

#include "../Structure/Atom.h"
#include "../Structure/Group.h"
#include "../Structure/Particle.h"

#ifndef CGCMC_INPUTDATA_H
#define CGCMC_INPUTDATA_H


class InputData {

public:
    InputData();

    vector<Particle> particles;
};


#endif //CGCMC_INPUTDATA_H
