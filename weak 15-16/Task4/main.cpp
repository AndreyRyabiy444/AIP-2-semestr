#include <iostream>
#include <array>
/*
Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести
на экран матрицу, описывающую следующие сущности. Предложите свой вариант.
Состояние робота на шахматной доске. Робот характеризуется уровнем
заряда, скоростью движения.
*/
using namespace std;

void RobotShahm(){
    const int col = 2; //столбцы
    const int row = 3; //строки
    int mat[row][col];
    std::cout<<"Vvedite POWER(%) and SPEED(m/sec) "<<std::endl;
    //ввод данных с клавы
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
            std::cin>>mat[i][j];
    }

    std::cout<<"////////////RESULTS//////////////"<<std::endl;
    //вывод матрицы на экран
    for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++)
                std::cout<<mat[i][j] <<" ";
                std::cout<<std::endl;
    }
}

int main()
{
    RobotShahm();
    return 0;
}
