//
// Created by danila on 15.10.2019.
//

#include "../includes/functions.h"
#include <algorithm>
#include <vector>

double function(Point point){
    //return sin(point.x)*sin(point.y)/(1 + point.x * point.x + point.y * point.y);
    return cos(point.x)*cos(point.y)*exp(point.y /2);
}


void counter(Point &one, Point &second, Point &third, Point &fourth){

    std::vector <std::pair<Point,double >> data;
    std::pair<Point,double> data1;
    data1.first = one;
    data1.second = function(one);
    data.push_back(data1);

    std::pair<Point,double> data2;
    data2.first = second;
    data2.second = function(second);
    data.push_back(data2);

    std::pair<Point,double> data3;
    data3.first = third;
    data3.second = function(third);
    data.push_back(data3);


    std::pair<Point,double> data4;
    data4.first = fourth;
    data4.second = function(fourth);
    data.push_back(data4);

    std::sort(data.begin(), data.end(), [](const auto &left, const auto &right) {
       return left.second>=right.second;
    });
    one=data[0].first;
    second=data[1].first;
    third=data[2].first;
    fourth=data[3].first;
}