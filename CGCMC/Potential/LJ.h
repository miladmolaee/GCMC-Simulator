//
// Created by milad on 2021-02-16.
//

#ifndef CGCMC_LJ_H
#define CGCMC_LJ_H

#include <cmath>


class LJ {
public:
    LJ(float epI, float epJ, float sI, float sJ, float qI, float qJ, double r);

public:
    double calculate();

    double ep_i;   // (j)
    double ep_j;   // (j)

    double s_i;    // (A)
    double s_j;    // (A)

    double q_i;    // (C)
    double q_j;    // (C)

    double r;

private:
    double ep_ij;
    double s_ij;

    const double kb = 1.380649 * pow(10, -23);
};


#endif //CGCMC_LJ_H
