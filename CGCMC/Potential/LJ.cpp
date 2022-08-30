//
// Created by milad on 2021-02-16.
//

#include "LJ.h"

LJ::LJ(float epI, float epJ, float sI, float sJ, float qI, float qJ, double _r) {

    ep_i = epI * kb;
    ep_j = epJ * kb;

    s_i = sI;
    s_j = sJ;

    q_i = qI * 1.60218 * pow(10, -19);
    q_j = qJ * 1.60218 * pow(10, -19);

    r = _r;

    ep_ij = sqrt(ep_i * ep_j);
    s_ij = (s_i + s_j)/2;
}

double LJ::calculate() {

    double part1;
    double part2;

    part1 = 4 * ep_ij * (pow((s_ij / r), 12) - pow((s_ij / r), 6));
    part2 = 9 * pow(10, 9) * q_i * q_j * pow(10, 10) / r;

    return part1 + part2;
}
