#include"../include/Sphere.h"

Sphere::Sphere(double coordX, double coordZ, double deltaRho,double radius){
    this->coordX = coordX;
    this->coordZ = coordZ;
    this->deltaRho = deltaRho;
    this->radius = radius;
    }

Sphere::Sphere(){
    this->coordX = 0;
    this->coordZ = 0;
    this->deltaRho = 100;
    this->radius = 1;
    }

std::ostream & operator << (std::ostream &out, const Sphere &sphere){
    out << "Parameters of the sphere:" << std::endl;
    out << "X coordinate:\t" << sphere.coordX << std::endl;
    out << "Z coordinate:\t" << sphere.coordZ << std::endl;
    out << "Delta rho:\t" << sphere.deltaRho << std::endl;
    out << "Radius:\t" << sphere.radius;
    return out;
}

/*
void gsphere(float a, float x2, float z2, float del_density){

  float g;
  float pi;
  float grav;
  
calculate the gravity anomaly due to a sphere
g-sphere = 4/3 rho G pi a^3 (1/(x^2+^2) (z)/(sqrt(x^2+z^2))
distance units in meters, density contrast in kg /m3
returns mgal

a = radius of sphere;
x2 is horizontal offset
z2 is depth
del_density is the density contrast

//define consts.
g=6.67e-11; //gravitational constant
pi = 3.14159265358979;

grav=  4.0/3.0*pi*g*del_density*1.0e5*a*a*a*1/(x2*x2+z2*z2) *z2/(sqrt(x2*x2+z2*z2));

return grav; //return gravity in mgal
} */