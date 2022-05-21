#include <iostream>
#include<array>

//Вычислить сумму элементов массива:меньших 5, больших 6, меньших 4,
using namespace std;
void task2(){
    int sum1,sum2,sum3;
    std::array<int,10>nums;
        for(int i = 0; i<8;i++){
            nums[i]=rand();
            std::cout<<nums[i]<<" --- ";
        }
            std::cout<<std::endl;
            sum1 = nums[1]+nums[2]+nums[3]+nums[4];
            std::cout<<"Sum<5 = "<<sum1<<std::endl;


            sum2 = nums[7]+nums[8];
            std::cout<<"Sum>6 = "<<sum2<<std::endl;

            sum3 = nums[1]+nums[2]+nums[3];
            std::cout<<"Sum<3 = "<<sum3<<std::endl;

}
int main()
{
    task2();
    return 0;
}
