//
// Created by milad on 2021-02-16.
//

#include "InputData.h"

InputData::InputData() {

    string line;
    ifstream my_file(R"(C:\Users\milad\OneDrive\MScProject\MasterProject\input\input.txt)");

    if (my_file.is_open())
    {
        while (getline(my_file, line))
        {
            if (line[0] == '#')     // comment
                continue;

            int j = 0;
            string str;

            auto *particle = new Particle();

            for (size_t i = 0; i < line.length(); i++)
            {
                if (line[i] != '\t' && line[i] != ' ' && line[i] != '\n')
                    str += line[i];

                if (line[i] == '\t' || i == line.length() - 1) {

                    switch (j)
                    {
                        case 0:
                            particle->name = str;
                            break;

                        case 1:
                            particle->type = str[0];
                            break;

                        case 2:
                            particle->id = str;
                            break;

                        case 3:
                            particle->x = stof(str);
                            break;

                        case 4:
                            particle->y = stof(str);
                            break;

                        case 5:
                            particle->z = stof(str);
                            break;

                        case 6:
                            if (str == "float")
                                particle->float_state = true;
                            else if (str == "fixed")
                                particle->float_state = false;
                            else
                                cout << "Error in input data - float state";
                            break;

                        case 7:
                            particle->q = stof(str);
                            break;

                        case 8:
                            particle->ep = stof(str);
                            break;

                        case 9:
                            particle->sigma = stof(str);
                            break;

                        case 10:
                            particle->Q = stof(str);
                            break;

                        case 11:
                            particle->mu = stof(str);
                            break;

                        case 12:
                            particle->alpha = stof(str);
                            break;

                        default:
                            break;
                    }

                    str = "";

                    j++;
                }

            }

            particles.push_back(*particle);
        }

        my_file.close();
    }
    else
        cout << "Unable to open file";
}