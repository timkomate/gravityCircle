#include <iostream>
#include "./include/Sphere.h"
#include "./include/LinSpace1D.h"

int main(int args, char ** argv){
    Sphere sp;
    LinSpace1D x;
    std::cout << sp << std::endl;
    std::cout << x << std::endl;
    return 0;
}