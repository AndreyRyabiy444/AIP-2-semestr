#include <iostream>
//Робот-автомобиль описывается как структура с полями: скорость, длительность
//движения и номер. Напишите функцию для расчёта пройденного расстояния
struct Robot{
    float v;
    float t;
    float n;
}MK1,MK2,MK3;

void Distation(Robot e){

    float s = e.v * e.t;
    std::cout<<"S = "<<s<<" metrs  ,"
             <<e.v<<"m/s  ,"
             <<e.t<<"sec  ,"
             <<"Robot num = "<<e.n;


}
using namespace std;

int main()
{
    Robot MK1,MK2,MK3;
     MK1.n = 1;
     MK1.v = 6;
     MK1.t = 6;

     MK2.n = 2;
     MK2.v = 20;
     MK2.t = 6;

     MK3.n = 3;
     MK3.v = 6;
     MK3.t = 12;

     Distation(MK3);
    return 0;
}
