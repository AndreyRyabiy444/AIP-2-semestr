#include <iostream>
//Создайте структуру, которая хранит время: часы, минуты, секунды.
//Написать функцию, которая ведёт подсчёт числа секунд между двумя
//моментами времени.
struct Time{
    int Hour;
};

void DifferenceTime(int  h1,  int  h2){
    float y = h1 - h2;
    float min=y*60;
    float sec=min*60;
    std::cout<<"Hour = "<<y<<std::endl;
    std::cout<<"Min = "<<min<<std::endl;
    std::cout<<"Sec = "<<sec<<std::endl;
}

using namespace std;

int main()
{
    Time h1,h2;
    h1.Hour = 5;
    h2.Hour = 2;

    DifferenceTime(h1.Hour,h2.Hour);

    return 0;
}
