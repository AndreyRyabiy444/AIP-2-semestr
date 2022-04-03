#include <iostream>

using namespace std;
//Пользователь задаёт число Ч и Х. Посчитать y:
//y = 1/x + 1/(2*x)+ 1/(3*x)+...+1/(z*x)
int main()
{
    int n;     //повтор
    float x;   //argument
    float ch ;
    std::cout<<"Enter the x(argument)  and n(cycle): ";
    std::cin>>x>>n;
    for(int i = 1;i<=n ;i++){
        ch+=1/(x*i);
    }
    std::cout<<"Itog =  "<<ch;


    return 0;
}
