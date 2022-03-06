#include <iostream>

using namespace std;
//Пользователь вводит день месяца.
//Вывести на экран день недели. Считаем, что 1-е
//число месяца это вторник
int main()
{
    int x;
    std::cout<<"Enter the date of the month  ";
    std::cin>>x;
    switch (x)
    {
    case 1:printf("vtornik");break;         //первая неделя
    case 2:printf("sreda");break;
    case 3:printf("chetverg");break;
    case 4:printf("pyatniza");break;
    case 5:printf("subbota");break;
    case 6:printf("voskresenie");break;
    case 7:printf("ponedelnik");break;

    case 8:printf("vtornik");break;         //вторая неделя
    case 9:printf("sreda");break;
    case 10:printf("chetverg");break;
    case 11:printf("pyatniza");break;
    case 12:printf("subbota");break;
    case 13:printf("voskresenie");break;
    case 14:printf("ponedelnik");break;

    case 15:printf("vtornik");break;        //третья неделя
    case 16:printf("sreda");break;
    case 17:printf("chetverg");break;
    case 18:printf("pyatniza");break;
    case 19:printf("subbota");break;
    case 20:printf("voskresenie");break;
    case 21:printf("ponedelnik");break;

    case 22:printf("vtornik");break;        //четвёртая
    case 23:printf("sreda");break;
    case 24:printf("chetverg");break;
    case 25:printf("pyatniza");break;
    case 26:printf("subbota");break;
    case 27:printf("voskresenie");break;
    case 28:printf("ponedelnik");break;

    case 29:printf("subbota");break;        //остаток(29-31 дня месяца)
    case 30:printf("voskresenie");break;
    case 31:printf("ponedelnik");break;
    }
    return 0;
}
