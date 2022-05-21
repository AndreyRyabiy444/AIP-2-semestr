#include <iostream>
#include<array>
//Найти среднее арифметическое положительных/отрицательных

using namespace std;
void task4(){
    int sumNeg=0;
    int sumPos=0;
    float y1,y2;
    int nums[10]={-12,1,3,5,44,-12,-2,+8,-12,11};
    for(int i=0;i<10;i++){
        if(nums[i]<0){
            sumNeg = nums[0]+nums[5]+nums[6]+nums[8];
            y1 = sumNeg/4;
        }
        else if (nums[i]>0){
            sumPos = nums[1]+nums[2]+nums[3]+nums[4]+nums[7]+nums[9];
            y2 = sumPos/6;
        }
    }


    std::cout<<"Sredn arifm neg = "<<y1<<std::endl;
     std::cout<<"Sredn arifm pos = "<<y2<<std::endl;
}
int main()
{
    task4();
    return 0;
}
