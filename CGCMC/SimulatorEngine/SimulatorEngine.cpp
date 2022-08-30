//
// Created by milad on 2021-02-16.
//

#include "SimulatorEngine.h"

void SimulatorEngine::run() const {

    for (auto & particle : *particles) {

        if (particle.float_state)
            adsorbed->push_back(particle);
        else
            adsorbent->push_back(particle);
    }


    ofstream file;
    file.open("result.txt");

    vector<double> UT;
    float dx = -8.003;

    while (dx <= 8.005) {

        double U = 0;
        float x;

        for (auto & i : *adsorbed) {
            for (auto & j : *adsorbent) {

                float ddx = j.x - i.x + dx;
                LJ lj = LJ(i.ep, j.ep, i.sigma, j.sigma, i.q, j.q,
                           sqrt(pow(ddx, 2) +
                                pow(j.y - i.y, 2) +
                                pow(j.z - i.z, 2)));
                double result = lj.calculate();
                U += result;
                x = i.x + dx;
            }
        }

        file << x << '\t' << U / 4.184 << endl;     // convert to cal

        UT.push_back(U);
        dx += 0.005;
    }

    file.close();
}
