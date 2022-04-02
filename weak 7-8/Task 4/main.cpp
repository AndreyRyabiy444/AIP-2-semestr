#include <iostream>

using namespace std;
//Вывести на экран ряд натуральных чисел от Н до М с шагом Ш. Например, если
//Н=10, М=35, Ш=5, то вывод должен быть таким: 10 15 20 25 30 35. Значения Н, М,
//Ш указываются пользователем (считываются с клавиатуры или из файла).
int main()
{
    int h;
    int m;
    int s;
    int f;
    std:cout<<"Vvedite h(Nachalo otceta), m(kones otceta), s(shag): ";//10 35 5
    std::cin>>h>>m>>s;
    std::cout<< h <<"  ";
    for(int i = h; i < m; i+=s){
        h=h+s;
        std::cout<< h <<"  " ;
    }
    return 0;
}
