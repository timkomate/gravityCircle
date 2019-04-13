//
// Created by timko on 2019.04.13.
//

#ifndef GRAVITYSPHERE_LINSPACE1D_H
#define GRAVITYSPHERE_LINSPACE1D_H

#include<iostream>
#include <vector>
class LinSpace1D{
    private:
        double from;
        double to;
        double stepSize;
        std::vector<double> container;
        friend std::ostream & operator << (std::ostream &out, const LinSpace1D &linSpace1D);
        
    public:
        double & operator[](int i) { return container[i]; }
        LinSpace1D(double from, double to, double stepSize);
        LinSpace1D(double from, double to);
        LinSpace1D();
        double getFrom();
        double getTo();
        double getStepSize();
        std::vector<double> getContainer();
};


#endif //GRAVITYSPHERE_LINSPACE1D_H
