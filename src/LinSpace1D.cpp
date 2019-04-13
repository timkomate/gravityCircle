#include"../include/LinSpace1D.h"
#include <vector>

LinSpace1D::LinSpace1D(){
    this->from = 0;
    this->to = 100;
    this->stepSize = 1;
    //this->container = new std::vector<double>;
    for (int i = from; i<= to; i++){
        container.push_back(i);
    }
}

LinSpace1D::LinSpace1D(double from, double to, double stepSize){
    this->from = from;
    this->to = to;
    this->stepSize = stepSize;
    for (int i = from; i<= to; i=i+stepSize){
        container.push_back(i);
    }
}

LinSpace1D::LinSpace1D(double from, double to){
    this->from = from;
    this->to = to;
    this->stepSize = stepSize;
    for (int i = from; i<= to; i++){
        container.push_back(i);
    }
}

std::ostream & operator << (std::ostream &out, const LinSpace1D &linSpace1D){
    out << "The vector contains the following elements:" << std::endl;
    for (int i = 0; i < linSpace1D.container.size(); i++){
        out << linSpace1D.container[i] << " ";
    }
    out << std::endl;
    return out;
}