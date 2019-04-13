#include <iostream>
#include "./include/Sphere.h"
#include "./include/LinSpace1D.h"
#include "./include/Anomaly1D.h"

int main(int args, char ** argv){
    double coordX = atof(argv[1]);
    double coordZ = atof(argv[2]);
    double deltaRho = atof(argv[3]);
    double radius = atof(argv[4]);
    Sphere sp(coordX, coordZ, deltaRho, radius);
    LinSpace1D x(-1000,1000);
    std::cout << sp << std::endl;
    Anomaly1D an(&x,&sp);
    an.calculateAnomaly();
    //an.writeAnomaly("anomaly.xy");
    return 0;
}