#include <iostream>
#include<array>

//Сгенерировать массив со случайными числами в диапазоне: [0,20]
using namespace std;

void task1(){
    array<int,5>nums;
    for(int i = 0; i<5;i++){
        nums[i]=rand()%21;
        std::cout<<nums[i]<<endl;
    }
}

int main()
{
    task1();
    return 0;
}
