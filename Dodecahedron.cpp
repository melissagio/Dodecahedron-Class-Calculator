//
//  Dodecahedron.cpp
//  CS 232 Exam 1 Dodecahedron Class Calculator
//
//  Created by Melissa Gio on 3/8/23.
//

#include "Dodecahedron.hpp"
#include "Dodecahedron.h"
#include <iostream>
#include <cmath>

double Dodecahedron::calculateVolume(double sidePar){
    return ((15.0 + (7.0 * sqrt(5.0))) / (4.0)) * pow(sidePar, 3.0);
}

double Dodecahedron::calculateSurfaceArea(double sidePar){
    return 3.0 * sqrt(25.0 + 10.0 * sqrt(5.0)) * pow(sidePar, 2.0);
}



void Dodecahedron::setSide(double sidePar){
    if (sidePar > 0) {
        side = sidePar;
    } else {
        side = 0;
    }
}
double Dodecahedron::getSide(void){
    return side;
}

Dodecahedron::Dodecahedron(){
    side = 0.0;
}

Dodecahedron::Dodecahedron(double sidePar){
    if (sidePar > 0) {
        side = sidePar;
    } else {
        side = 0.0;
    }
}
