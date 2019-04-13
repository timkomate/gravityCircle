#include"../include/Anomaly1D.h"
#include "../include/LinSpace1D.h"
#include <vector>
#include <math.h>
#include <iostream>
#include <fstream>

Anomaly1D::Anomaly1D(LinSpace1D x, Sphere sp){
    //this->anomaly = new std::vector<double>;
    this->x = x;
    this->sp = sp;
}

void Anomaly1D::calculateAnomaly(){
    double G=6.67e-11; //gravitational constant
    for(auto const& xValue: x.getContainer()) {
        double grav = 4.0/3.0*M_PI*G*sp.getDeltaRho()*
            1.0e5*sp.getRadius()*sp.getRadius()*sp.getRadius()*
            1/(pow(xValue-sp.getCoordX(),2)+pow(sp.getCoordZ(),2)) *
            sp.getCoordZ()/(pow((pow(xValue-sp.getCoordX(),2)+pow(sp.getCoordZ(),2)),(2/3)));
        anomaly.push_back(grav);
        //std::cout << xValue << " " << grav << std::endl;
    }//return grav; //return gravity in mgal
}

void Anomaly1D::writeAnomaly(std::string fileName){
    std::ofstream outputFile;
    outputFile.open(fileName);
    for (int i = 0; i < x.getContainer().size();i++){
        outputFile << x[i] << " " << anomaly[i] << std::endl;
    }
    outputFile.close();
}