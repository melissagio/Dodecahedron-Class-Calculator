//
//  Dodecahedron.h
//  CS 232 Exam 1 Dodecahedron Class Calculator
//
//  Created by Melissa Gio on 3/8/23.
//

#ifndef Dodecahedron_h
#define Dodecahedron_h

class Dodecahedron {
  
public:
    double calculateVolume(double sidePar);
    double calculateSurfaceArea(double sidePar);
    void setSide(double sidePar);
    double getSide(void);
    
    Dodecahedron();
    Dodecahedron(double sidePar);
    
private:
        double side;
    
};

#endif /* Dodecahedron_h */
