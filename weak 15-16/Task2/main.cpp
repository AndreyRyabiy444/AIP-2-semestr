#include <iostream>
/*В квадратной матрице найти сумму положительных элементов, лежащих на и выше
главной диагонали и расположенных в чётных столбцах.*/

using namespace std;

void matrix(){
    int a=6;
    int sum=0;
    int mat[a][a];

    for (int i = 0; i < a; i++) // цикл по строкам
             for (int j = 0; j < a; j++) // цикл по столбцам
                 mat[i][j] = rand()%10;

    for (int i = 0; i < a; i++){
            for (int j = 0; j < a; j++)
                std::cout<<mat[i][j] <<" ";
        std::cout<<std::endl;

    }

std::cout<<"///////////////////////////////"<<std::endl;

    for (int i = 0; i < a-1; i++){
            for (int j = 0; j < a+1; j+=2)
                sum+=mat[i][j];

        }

    std::cout<<"Sum = "<<sum<<std::endl;
}

int main()
{
    matrix();
    return 0;
}
