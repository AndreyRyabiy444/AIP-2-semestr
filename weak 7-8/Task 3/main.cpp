#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    //Протабулировать функцию (шаг и диапазон задаёт пользователь):
    //y = sqrt(5+3/x)+11*x+(1/tg(2*x+15))
    int d;
    int n;
    int x;
    float y;
    std::cout<<"Vvedite n(diapazon), d(shag) , x (argument):   ";
    std::cin>>n>>d>>x;
    for(int i = 0; i < n; i+=d ){
        y = sqrt(5+3/x)+11*x+(1/tan(2*x+15));
        x= x+1;
        std::cout<<"\t"<<x<<"\t"<<y<<std::endl;
    }
    return 0;
}
