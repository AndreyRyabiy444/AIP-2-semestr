#include <iostream>
#include<cmath>
using namespace std;

//Вариант 16 , задание 4(Номер 8 В)
int main()
{
       std::cout << " |X| + X^5 if X=-2  " << std::endl;//условие

       float num1 = -2;
       float Result =fabs(num1)+(num1)*(num1)*(num1)*(num1)*(num1) ; //сумма модуля числа "-2" и числа "(-2)^5"

       std::cout <<"Result = "<< Result<<std::endl; //Вывод результата
       return 0;
}
