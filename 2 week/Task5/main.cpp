#include <iostream>

#define Barels_const 158.730158

using namespace std;
//Вариант 16 , задание 5(Номер 9 В, Конвертер величины обьёма "литры - кубы - барели")
int main()
{
        float num1;
        std::cout << "  Enter the number of liters  " << std::endl;
        std::cin >> num1 ;

        float Litrs =num1;
        float Metr_3 =num1/1000;
        float Barels =(num1/Barels_const);
        std::cout <<"Litrs = "<< Litrs<<std::endl
                  <<"Metr_3 = "<< Metr_3<<std::endl
                  <<"Barels = " <<Barels<<std::endl;
        return 0;
}
