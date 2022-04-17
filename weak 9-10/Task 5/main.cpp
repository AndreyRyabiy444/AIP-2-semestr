#include <iostream>
#include <cmath>
using namespace std;
/*E)
y = 2x - 15, если x > 2
y = 5, если x = 2
y = 3 * |x-1| - 8, если x < 2
*/
void func(float &x,float &y){
    std::cout<<"Argument X =  ";
    std::cin>>x;
    if (x>2){
        y= 2*x-15;
        cout << " Y = " << y << endl;
    }

    if (x<2){
        y= 3* fabs(x-1)-8;
        cout << " Y = " << y << endl;
    }
    if (x==2){
        y=5;
        cout << " Y = " << y << endl;
    }
}

int main()
{
    float x,y;
    func(x,y);

    return 0;
}
