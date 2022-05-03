#include <iostream>
//Создайте структуру для хранения комплексных чисел. Атрибуты: вещественная и
//мнимая части. Объявите два числа и получите их значения от пользователя.
//Напишите функцию, которая будет складывать комплексные числа.
struct Num{
    float a,b,c,d;
};
void ComplexNumber(float a, float b,float c, float d){
    float i;
    float y = a + b;//обычное число
    float z = c + d;// комплексное
    std::cout<<"SumComplexNumber = "<<y<<" + " << z<< "i";
}

using namespace std;

int main()
{
    Num Complex1,Complex2;
    Complex1.a = 5;
    Complex1.b = 7;
    Complex2.a = 1;
    Complex2.b = 3;

    Complex1.c = 7;
    Complex1.d = 3;
    Complex2.c = 8;
    Complex2.d = 4;
    ComplexNumber(Complex1.a,Complex1.b,Complex1.c,Complex1.d);


    return 0;
}
