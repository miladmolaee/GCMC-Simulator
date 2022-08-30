//
// Created by milad on 2021-03-05.
//

#ifndef MAIN_CPP_TEST_H
#define MAIN_CPP_TEST_H

#endif //MAIN_CPP_TEST_H

#include <iostream>
#include <thread>
#include <cmath>

using namespace std;

void f1(char c, double *d, int i1, int i2, double p) {

    for (int i = 0; i < 100000000; ++i) {
        *d += pow((double) (i1 + i2)*i/100000, p);
    }
}

void f2(char c, double *d, int i1, int i2, double p) {

    for (int i = 0; i < 100000000; ++i) {
        *d += pow((double) (i1 + i2)*i/100000, p);
    }
}

void f3(char c, double *d, int i1, int i2, double p) {

    for (int i = 0; i < 100000000; ++i) {
        *d += pow((double) (i1 + i2)*i/100000, p);
    }
}

void f4(char c, double *d, int i1, int i2, double p) {

    for (int i = 0; i < 100000000; ++i) {
        *d += pow((double) (i1 + i2)*i/100000, p);
    }
}

void f5(char c, double *d, int i1, int i2, double p) {

    for (int i = 0; i < 100000000; ++i) {
        *d += pow((double) (i1 + i2)*i/100000, p);
    }
}

void f6(char c, double *d, int i1, int i2, double p) {

    for (int i = 0; i < 100000000; ++i) {
        *d += pow((double) (i1 + i2)*i/100000, p);
    }
}


void mi() {

    double s1 = 0;
    double s2 = 0;
    double s3 = 0;
    double s4 = 0;
    double s5 = 0;
    double s6 = 0;

    thread t1 (f1, 'a', &s1, -5, 4, 2);
    thread t2 (f2, 'b', &s2, -5, 4, 2);
    thread t3 (f3, 'c', &s3, -5, 4, 2);
    thread t4 (f4, 'd', &s4, -5, 4, 2);
    thread t5 (f5, 'd', &s5, -5, 4, 2);
    thread t6 (f5, 'd', &s5, -5, 4, 2);
    thread t7 (f6, 'd', &s6, -5, 4, 2);
    thread t8 (f6, 'd', &s6, -5, 4, 2);

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();
    t7.join();
    t8.join();

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;

//    thread t3 (function3);
//    thread t4 (function4);
//    thread t5 (function5);
//    thread t6 (function6);
//    thread t7 (function7);
//    thread t8 (function8);
//    thread t9 (function9);
//    thread t10 (function10);

}
