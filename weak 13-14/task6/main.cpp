#include <iostream>
#include<array>

//Создать новый массив из двух других массивов путём операций над элементами
//массивов:вычитания

void task6(){
    int a[10] = { -7, 17, 69, 25, 88, 14, 84, 36, -4, 75 };
    int b[10] = { 16, -30, 11, 39, 15, -36, 12, 6, -30, 5 };
    int y[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        for (int i = 0; i < 10; i++){
             y[i] = a[i] - b[i];
            }

        for (int i = 0; i < 10; i++)
           std::cout << y[i] << " ";

 }
using namespace std;

int main()
{
    task6();
    return 0;
}
