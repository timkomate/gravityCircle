//
// Created by timko on 2019.02.12..
//

#ifndef GRAVITYSPHERE_ANOMALY_H
#define GRAVITYSPHERE_ANOMALY_H

#include<iostream>
#include "LinSpace1D.h"
#include"Sphere.h"
#include <vector>

class Anomaly1D{
    private:
        std::vector<double> anomaly;
        LinSpace1D* domain;
        Sphere* sp;
    public:
        Anomaly1D(LinSpace1D*, Sphere*);
        void calculateAnomaly();
        void addNoise(double, double);
        void writeAnomaly(std::string);
};


#endif //GRAVITYSPHERE_ANOMALY_H
