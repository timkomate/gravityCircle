#include"../include/Sphere.h"

Sphere::Sphere(double coordX, double coordZ, double deltaRho,double radius){
    this->coordX = coordX;
    this->coordZ = coordZ;
    this->deltaRho = deltaRho;
    this->radius = radius;
    }

Sphere::Sphere(){
    //default constructor
    this->coordX = 50;
    this->coordZ = -100;
    this->deltaRho = 1000;
    this->radius = 10;
    }

std::ostream & operator << (std::ostream &out, const Sphere &sphere){
    out << "Parameters of the sphere:" << std::endl;
    out << "X coordinate:\t" << sphere.coordX << std::endl;
    out << "Z coordinate:\t" << sphere.coordZ << std::endl;
    out << "Delta rho:\t" << sphere.deltaRho << std::endl;
    out << "Radius:\t" << sphere.radius;
    return out;
}

double Sphere::getCoordX(){
    return coordX;
}
double Sphere::getCoordZ(){
    return coordZ;
}
double Sphere::getDeltaRho(){
    return deltaRho;
}
double Sphere::getRadius(){
    return radius;
}