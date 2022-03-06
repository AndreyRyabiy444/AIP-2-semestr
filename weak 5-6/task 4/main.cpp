#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //задача №3 Б (дана окружность x*x +y*y =1
    //прямая ограничивает окружность от y=x/2
    // до y=3x/2
    const float r = 1; //радиус окружности
    float x,y;
    std::cout<<"Enter the 'x' and 'y':  " ;
    std::cin >>x>>y;
    float l = sqrt(x*x+y*y);
    bool area1 = (x>0) && (y<x/2);
    bool area2 = (x>0) && (y<0);
    bool area3 = (x<0 && x>-1) && (y<x/2 && y>-1) ;
    if ((1<r) && (area1 || area2 ||area3))//((y>=-1) && (y <= x/2) )
        std::cout<<"Yes, it hit";

    else
        std::cout << "No, you miss";

    return 0;
}
