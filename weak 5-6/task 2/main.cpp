#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
     /* y = 2x - 15, если x > 2
        y = 5, если x = 2
        y = 3 * |x-1| - 8, если x < 2
     */
    float x,y;
    std::cout <<"enter the number of x= ";
    std::cin >>x;
    if (x>2){
        y = 2*x - 15;
    }
    else
        if(x==2){
        y=5;
    }
    if (x<2){
         y=(3*abs(x-1))-8;
    }


std::cout <<"Result = "<<y<<endl;



    return 0;
}
