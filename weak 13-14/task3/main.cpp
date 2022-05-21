#include <iostream>
#include<array>
//Посчитать количество положительных/отрицательных элементов массива.
using namespace std;

void task3(){
    int nums[8]={-1,2,-3,4,-5,6,7,-8};
    int Pos=0;
    int Neg=0;
    for(int i = 0; i<8;i++){
        if(nums[i]>0){
            Pos= nums[1]+nums[3]+nums[5]+nums[6];
        }
       else if(nums[i]<0){
            Neg= nums[0]+nums[2]+nums[4]+nums[7];
        }
    }
    std::cout<<"Neg = "<<Neg <<" ---- Pos = "<<Pos<<std::endl;
}

int main()
{
    task3();
    return 0;
}



