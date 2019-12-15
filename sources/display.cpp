//
// Created by danila on 15.10.2019.
//

#include <iostream>
#include <iomanip>
#include "../includes/display.h"

void headDisplay() {
    for(int i=0;i<91;i++)
        std::cout << "_";
    std::cout << std::endl;
    std::cout << std::setw(10) << "|    Generation " << " | " << std::setw(10) << " X "
                                                    << " | " << std::setw(10) << " Y "
                                                    << " | " << std::setw(10) << " FIT "
                                                    << " | " << std::setw(12) << " MAX RESULT "
                                                    << " | " << std::setw(17) << " MIDDLE RESULT   |" << std::endl;
    for(int i=0;i<91;i++)
        std::cout << "-";
    std::cout << std::endl;
}

void mainDisplay(size_t n, double x, double y, double fit, double max, double middle) {
    std::cout << "|     ";
    std::cout << std::setw(10) << n << " | " << std::setw(10) << x
              << " | " << std::setw(10) << y
              << " | " << std::setw(10) << fit
              << " | " << std::setw(12) << max
              << " | " << std::setw(16) << middle << " | " << std::endl;
    for(int i=0;i<91;i++)
        std::cout << "-";
    std::cout << std::endl;
}
