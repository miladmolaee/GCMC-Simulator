//
// Created by milad on 2021-02-16.
//
#include <utility>
#include <vector>
#include <iostream>
#include <fstream>
#include "../Structure/Particle.h"
#include "../Potential/LJ.h"

#ifndef CGCMC_SIMULATORENGINE_H
#define CGCMC_SIMULATORENGINE_H


class SimulatorEngine {
public:
    vector<Particle> *particles = new vector<Particle>;
    vector<Particle> *adsorbent = new vector<Particle>;
    vector<Particle> *adsorbed = new vector<Particle>;

    void set_particles(vector<Particle> p) const{
        *particles = std::move(p);
    }

    void run() const;

};


#endif //CGCMC_SIMULATORENGINE_H
