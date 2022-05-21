#include <iostream>
#include<array>
//Вывести элементы массива, меньших среднего арифметического
using namespace std;
void task5(){
    float sum,Sr_Arifm;
    int nums[10]={1,2,3,4,5,6,11,23,50,33};
    for(int i=0; i<10;i++){
        sum+= nums[i];
    }
    Sr_Arifm = sum/10;
    std::cout<<"Sr_arifm = "<<Sr_Arifm<<std::endl;
    for(int n; n<10;n++){
        if(nums[n]<Sr_Arifm){
            std::cout<<nums[n]<<std::endl;
        }
    }

}
int main()
{
    task5();
    return 0;
}
