#include <iostream>

using namespace std;
 //Вариант 16 , задание 2 ( периметр и площадь прямоугольника)
int main()
{
      float num1;
      float num2;
      std::cout << "  Enter number  " << std::endl;
      std::cin >> num1 >> num2;

      float Perimetr =(num1 + num2)*2;
      float Ploshad = num1*num2;

       std::cout <<"Perimetr = "<< Perimetr<<std::endl
                      <<"Ploshad = " <<Ploshad<<std::endl;
       return 0;
}
