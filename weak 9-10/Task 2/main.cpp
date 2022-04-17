#include <iostream>
#include <cmath>
using namespace std;

/*Описать функцию RectPS(x1, y1, x2, y2, P, S), вычисляющую периметр P и площадь
S прямоугольника со сторонами, параллельными осям координат, по координатам
(x1, y1), (x2, y2) его противоположных вершин (x1, y1, x2, y2) — входные, P и S —
выходные параметры вещественного типа. С помощью этой функцию найти
периметры и площади трех прямоугольников с данными противоположными
вершинами.
*/
void RectPS(float &x1, float &x2,float &y1,float &y2){
   float P = ((abs(x2-x1) + abs(y2-y1)) * 2)*3;
   float S = (abs(x2-x1) * abs(y2-y1))*3;
   std::cout<<"Itog 3P = "<<P<<std::endl;
   std::cout<<"Itog 3S = "<<S<<std::endl;

}
int main()
{
    float x1,y1,x2,y2;
    x1=5;
    y1=4;
    x2=3;
    y2=8;
    RectPS(x1,y1,x2,y2);
    return 0;
}
