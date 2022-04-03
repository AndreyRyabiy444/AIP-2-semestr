#include <iostream>

using namespace std;
//Пользователь задаёт число Ч и Х. Посчитать y:
//y= 1*x-2*x+3*x-4*x+...+z*x
int main()
{
    float x;
    float sum=x;
    int n;
    std::cout<<"Enter the argument (x) and cycle(n): ";
    std::cin>>x>>n;
    for(int i=1 ;i<=n ;i++){
        sum +=i*x ;
        x*=-1;
    }
    std::cout<<"Result = "<<sum;
    return 0;
}
