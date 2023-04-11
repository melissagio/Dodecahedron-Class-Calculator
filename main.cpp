//
//  main.cpp
//  CS 232 Exam 1 Dodecahedron Class Calculator
//
//  Created by Melissa Gio on 3/8/23.
//

#include <iostream>
#include "Dodecahedron.h"
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    //declaration
    double sideInput;
    Dodecahedron doc;
    
    double volumeCalc;
    double surfaceAreaCalc;
    
    //get user input
    cout << "Enter a side value for the dodecahedron: ";
    cin >> sideInput;
    doc.setSide(sideInput);
    volumeCalc =  doc.calculateVolume(sideInput);
    surfaceAreaCalc = doc.calculateSurfaceArea(sideInput);

    //calculations & output
    cout << "The volume is: " << setprecision(4) << volumeCalc << endl;
    cout << "The surface area is: " << setprecision(5) << surfaceAreaCalc << endl;
    
    return 0;
}
