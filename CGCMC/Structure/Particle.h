//
// Created by milad on 2021-02-18.
//
#include <string>

#ifndef MAIN_CPP_PARTICLE_H
#define MAIN_CPP_PARTICLE_H

using namespace std;

class Particle {

public:
    string name;
    char type;          // particle type       a == atom        m == molecule
    string id;
    float x, y, z;
    bool float_state;       // position state       true == float     false == fixed
    float q, ep, sigma, Q, mu, alpha;
};


#endif //MAIN_CPP_PARTICLE_H
