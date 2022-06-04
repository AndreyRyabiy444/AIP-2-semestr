#include <iostream>
#include<array>
//Преобразовать матрицу, умножив элементы каждой строки на значение второго
//элемента этой строки.

using namespace std;


void matrix(){
    const int rows = 3;
    const int cols = 3;
    int mat[rows][cols];

    for (int i = 0; i < rows; i++) // цикл по строкам
         for (int j = 0; j < cols; j++) // цикл по столбцам
             mat[i][j] = rand()%10;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
            std::cout<<mat[i][j] <<" ";
    std::cout<<std::endl;
}
    std::cout<<"////////////////////"<<std::endl;

    int b=mat[0][1];
    int c=mat[1][1];
    int d=mat[2][1];

    for (int i = 0; i < 1; i++){
        for (int j = 0; j < cols; j++)
            mat[i][j]*=b;
    }
    for (int i = 1; i < 2; i++){
        for (int j = 0; j < cols; j++)
            mat[i][j]*=c;
    }
    for (int i = 2; i < 3; i++){
        for (int j = 0; j < cols; j++)
            mat[i][j]*=d;
    }
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
    std::cout<<mat[i][j] <<" ";
    std::cout<<std::endl;
    }


}
int main()
{
    matrix();
    return 0;
}
