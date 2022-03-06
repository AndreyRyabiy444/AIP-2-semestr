#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //задача №2 Б (синусоида и облость проходящая по
    //прямой вдоль Х при Y=0,5{максимальная точка})
    const float r = 1; //радиус окружности
    float x,y;
    std::cout<<"Enter the 'x' and 'y'";
    std::cin >>x>>y;
    float l = sqrt(x*x+y*y);
    if ((y<=0.5 && y>=0) && (y = sin(x)))
        std::cout<<"Yes, it hit";

    else
        std::cout << "No, you miss";

    return 0;
}
