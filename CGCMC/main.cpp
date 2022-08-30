#include <iostream>
#include "Input/InputData.h"
#include "SimulatorEngine/SimulatorEngine.h"
#include "test.h"


int main() {

    InputData *inputData;
    inputData = new InputData();

    SimulatorEngine *simulator;
    simulator = new SimulatorEngine();

    simulator->set_particles(inputData->particles);

    simulator->run();

//    mi();

    return 0;
}
