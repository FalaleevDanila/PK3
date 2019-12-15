#include <iostream>
#include <random>
#include "includes/display.h"
#include "includes/functions.h"
#include "includes/individual.h"

void mutation(Point &first, Point &second, Point &third, Point &fourth){
    std::vector <Point*> data;
    data.push_back(&first);
    data.push_back(&second);
    data.push_back(&third);
    data.push_back(&fourth);
    std::mt19937 gen(std::random_device{}());

    for(auto i=data.begin(); i != data.end(); ++i ){
        if(std::uniform_real_distribution<double>{0, 1}(gen)<0.95){
            if(std::uniform_real_distribution<double>{0, 1}(gen)>0.5){//x
                if((*i)->x >= -1.99){
                    (*i)->x-=0.01;
                }
                else{
                    (*i)->x+=0.01;
                }
            }
            if(std::uniform_real_distribution<double>{0, 1}(gen)>0.5){//x {//y
                if((*i)->y>=-1.99){
                    (*i)->y-=0.01;
                }
                else{
                    (*i)->y+=0.01;
                }
            }
        }
    }


}


int main() {

    headDisplay();
    Point first;
    Point second;
    Point third;
    Point fourth;
    std::mt19937 gen(std::random_device{}());
    Point one;
    Point two;
    for(size_t i = 0 ; i < 10 ; ++i){
        if(i==0) {
            one.x = std::uniform_real_distribution<double>{-2, 2}(gen);
            one.y = std::uniform_real_distribution<double>{-2, 2}(gen);
            two.x = std::uniform_real_distribution<double>{-2, 2}(gen);
            two.y = std::uniform_real_distribution<double>{-2, 2}(gen);
        }
        else {
            one = first;
            two = second;
        }
        first = one;

        second.x = two.x;
        second.y = one.y;

        third.x = one.x;
        third.y = two.y;

        fourth = two;

        mutation(first,second,third,fourth);

        counter(first,second,third,fourth);

        double middle = (function(first)+function(second)+function(third)+function(fourth))/4;

        mainDisplay(i+1,first.x,  first.y,  function(first),  function(first), middle);
        mainDisplay(i+1,second.x, first.y,  function(second), function(first), middle);
        mainDisplay(i+1,third.x,  third.y,  function(third),  function(first), middle);
        mainDisplay(i+1,fourth.x, fourth.y, function(fourth), function(first), middle);

        std::cout<<std::endl;

    }
    return 0;
}