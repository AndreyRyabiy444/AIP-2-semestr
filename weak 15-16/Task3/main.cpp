#include <iostream>

using namespace std;
/*Дана матрица. Элементы первой строки — количество осадков в соответствующий
день, второй строки — сила ветра в этот день. Найти, был ли в эти дни ураган?
(ураган — когда самый сильный ветер был в самый дождливый день).*/


void TaskRain(){
    int rowl,cols;
    rowl = 2;
    cols=3;
    int a[rowl][cols];//три ряда вариантов(первый слабый дождь, второй средний...)
    a[0][0] = 15; //mm(осадки)
    a[1][0] = 3; //м/с

    a[0][1] = 30; //mm(осадки)
    a[1][1] = 10; //м/с

    a[0][2] = 150; //mm(осадки)
    a[1][2] = 60; //м/с

    std::cout<<"1)"<<a[0][0]<<"   "<<"2)"<<a[0][1]<<"   "<<"3)"<<a[0][2]<<"   mm(osadki)"<<std::endl;
    std::cout<<"  "<<a[1][0]<<"    "<<a[1][1]<<"       "<<a[1][2]<<"    "<<"m/s"<<std::endl;

    std::cout<<"////////////////////////////////////////"<<std::endl;

    if(a[0][0]>a[0][1]&& a[0][0]>a[0][2] && a[1][0]>a[1][1] && a[1][0]>a[1][2] ){
        std::cout<<"Max osadki in 1-st day"<<std::endl;
        std::cout<<"Max speed in 1-st day"<<std::endl;
        std::cout<<"We can see tornadooo"<<std::endl;
    }
    if(a[0][1]>a[0][0]&& a[0][1]>a[0][2] && a[1][1]>a[1][0] && a[1][1]>a[1][2] ){
        std::cout<<"Max osadki in 2-st day"<<std::endl;
        std::cout<<"Max speed in 2-st day"<<std::endl;
        std::cout<<"We can see tornadooo"<<std::endl;
    }

    if(a[0][2]>a[0][0]&& a[0][2]>a[0][1] && a[1][2]>a[1][1] && a[1][2]>a[1][0] ){
        std::cout<<"Max osadki in 3-st day"<<std::endl;
        std::cout<<"Max speed in 3-st day"<<std::endl;
        std::cout<<"We can see tornadooo"<<std::endl;
    }

}
int main()
{
    TaskRain();
    return 0;
}
