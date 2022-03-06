#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
     /* y = 5x - 10, если x > 3
        y = 1, если x = 3
        y = 2 * |x| - 5, если x < 3
     */
    float x,y;
    std::cout <<"enter the number of x= ";
    std::cin >>x;
    if (x>3){
        y=(5*x)-10;
    }
    else
        if(x==3){
        y=1;
    }
    if (x<3){
         y=(2*abs(x))-5;
    }


std::cout <<"Result = "<<y<<endl;



    return 0;
}
