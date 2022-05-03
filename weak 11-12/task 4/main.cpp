#include <iostream>
//Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести
//данные о самом тяжёлом роботе.

struct Robots{
     float h;//высота(м)
     float l;//длина(м)
     float w; //ширина(м)
     float m;//масса(кг)
     float v;//максимальная скорость (м/с)
 }MK1,MK2,MK3;

using namespace std;

 void Gabarit(Robots e, float y){
     if(e.m <= y ){
         std::cout<<e.h <<" m ,";
         std::cout<<e.l <<" m , ";
         std::cout<<e.w <<" m ,";
         std::cout<<e.m <<" kg ,";
         std::cout<<e.v <<" m/sec ";
     }


 }
int main()
{
    Robots MK1,MK2,MK3;
    MK1.h = 12;
    MK1.l = 23;
    MK1.w = 34;
    MK1.m = 25;
    MK1.v = 6;

    MK2.h = 6;
    MK2.l = 6;
    MK2.w = 6;
    MK2.m = 12;
    MK2.v = 12;

    MK3.h = 3;
    MK3.l = 8;
    MK3.w = 9;
    MK3.m = 4;
    MK3.v = 20;

    Gabarit(MK3, 6);
    return 0;
}
