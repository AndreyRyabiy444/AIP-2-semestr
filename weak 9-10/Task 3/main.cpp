#include <iostream>

using namespace std;
/*
Описать процедуру ShiftLeft3(A, B, C), выполняющую левый циклический сдвиг:
значение A переходит в C, значение C — в B, значение B — в A (A, B, C —
вещественные параметры, являющиеся одновременно входными и выходными). С
помощью этой процедуры выполнить левый циклический сдвиг для двух данных
наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).
*/
void ShiftLeft3(float & a,float & b){
    float c=a;
    a=b;
    b=c;

}
int main()
{
    float a1,b1,c1,a2,b2,c2;
    a1=5;
    b1=3;
    c1=9;

    a2=1;
    b2=3;
    c2=10;

    ShiftLeft3(a1,b1);
    ShiftLeft3(a2,b2);
    std::cout<<a1<<"  "<<b1<<"  "<<c1<<std::endl;
    std::cout<<a2<<"  "<<b2<<"  "<<c2<<std::endl;
    return 0;
}
