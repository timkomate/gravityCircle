//
// Created by timko on 2019.02.12..
//

#ifndef GRAVITYSPHERE_SPHERE_H
#define GRAVITYSPHERE_SPHERE_H

#include<iostream>
/*
radius: radius of sphere;
coordX: is horizontal offset
coordZ: is depth
deldaRho: is the density contrast
*/
class Sphere{
    private:
        double coordX;
        double coordZ;
        double deltaRho;
        double radius;
        friend std::ostream & operator << (std::ostream &out, const Sphere &sphere);
    public:
        Sphere(double coordX, double coordZ, double deltaRho,double radius);
        Sphere();
};


#endif //GRAVITYSPHERE_SPHERE_H
