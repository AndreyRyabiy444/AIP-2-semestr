#include <iostream>
#include<array>
using namespace std;

/*В квадратной матрице для каждой строки найти минимальный элемент и
переставить его с элементом, стоящим в этой строке на главной диагонали.*/
void Matrix(){
    const int n = 3;
    int matr[n][n];
    int c[n];

    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
            matr[i][j]=rand()%16;

    for (int i = 0; i < n; i++){
           for (int j = 0; j < n; j++)
               std::cout<<matr[i][j] <<" ";
       std::cout<<std::endl;
   }
       std::cout<<"////////////////////"<<std::endl;

    //первая строка
    if(matr[0][0]<matr[0][1] && matr[0][0]<matr[0][2]){
            c[0]=matr[0][0];
            c[1]=matr[0][1];
            c[2]=matr[0][2];
             std::cout<<c[0]<<" ";
             std::cout<<c[1]<<" ";
             std::cout<<c[2]<<" ";
             std::cout<<endl;
    }
    if(matr[0][1]<matr[0][0]&&matr[0][1]<matr[0][2]){
            c[0]=matr[0][1];
            c[1]=matr[0][0];
            c[2]=matr[0][2];
            std::cout<<c[0]<<" ";
            std::cout<<c[1]<<" ";
            std::cout<<c[2]<<" ";
            std::cout<<endl;
    }
    if(matr[0][2]<matr[0][0]&&matr[0][2]<matr[0][1]){
            c[0]=matr[0][2];
            c[1]=matr[0][0];
            c[2]=matr[0][1];
            std::cout<<c[0]<<" ";
            std::cout<<c[1]<<" ";
            std::cout<<c[2]<<" ";
            std::cout<<endl;
    }
    //вторая строка
    if(matr[1][0]<matr[1][1]&&matr[1][0]<matr[1][2]){
            c[0]=matr[1][1];
            c[1]=matr[1][0];
            c[2]=matr[1][2];
            std::cout<<c[0]<<" ";
            std::cout<<c[1]<<" ";
            std::cout<<c[2]<<" ";
            std::cout<<endl;
    }
    if(matr[1][1]<matr[1][0]&&matr[1][1]<matr[1][2]){
            c[0]=matr[1][0];
            c[1]=matr[1][1];
            c[2]=matr[1][2];
            std::cout<<c[0]<<" ";
            std::cout<<c[1]<<" ";
            std::cout<<c[2]<<" ";
            std::cout<<endl;
    }
    if(matr[1][2]<matr[1][0]&&matr[1][2]<matr[1][1]){
            c[0]=matr[1][0];
            c[1]=matr[1][2];
            c[2]=matr[1][1];
            std::cout<<c[0]<<" ";
            std::cout<<c[1]<<" ";
            std::cout<<c[2]<<" ";
            std::cout<<endl;
    }

    //треться строка
    if(matr[2][0]<matr[2][1]&&matr[2][0]<matr[2][2]){
            c[0]=matr[2][2];
            c[1]=matr[2][1];
            c[2]=matr[2][0];
            std::cout<<c[0]<<" ";
            std::cout<<c[1]<<" ";
            std::cout<<c[2]<<" ";
            std::cout<<endl;
    }
    if(matr[2][1]<matr[2][0]&&matr[2][1]<matr[2][2]){
            c[0]=matr[2][0];
            c[1]=matr[2][2];
            c[2]=matr[2][1];
            std::cout<<c[0]<<" ";
            std::cout<<c[1]<<" ";
            std::cout<<c[2]<<" ";
            std::cout<<endl;
    }
    if(matr[2][2]<matr[2][0]&&matr[2][2]<matr[2][1]){
            c[0]=matr[2][0];
            c[1]=matr[2][1];
            c[2]=matr[2][2];
            std::cout<<c[0]<<" ";
            std::cout<<c[1]<<" ";
            std::cout<<c[2]<<" ";
            std::cout<<endl;
    }

}
int main()
{
    Matrix();
    return 0;
}
