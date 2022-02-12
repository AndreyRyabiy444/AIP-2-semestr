#include <iostream>

using namespace std;

int main()
{
    //Вариант 16 , задание 3 (номер 5 -Пользователь вводит три числа.
    //Увеличьте первое число в два раза, второе числоуменьшите на 3, третье число возведите в квадрат и затем найдите сумму новых трех чисел.  )

            float num1;
            float num2;
            float num3;
            std::cout << "  Enter number  " << std::endl;
            std::cin >> num1 >> num2 >> num3;

            float sum =(num1*2)+(num2-3)+(num3*num3);

            std::cout <<"sum = "<< sum<<std::endl;
            return 0;
}
