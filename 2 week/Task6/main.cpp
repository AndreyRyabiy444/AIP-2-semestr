#include <iostream>

using namespace std;

 //Вариант 16 , задание 6(Номер 11 В, Вводятся три целых числа. Наибольшее увеличить на 5, наименьшее уменьшить 3)
int main()
{
    float a,b,c,d,e;

    std::cout << "  Enter numbers  " << std::endl;
    std::cin >> a >> b >> c ;

    if (a==b || b==c || a==c)
    std::cout <<"Enter other numbers, the solution is not correct " <<std::endl;

    while(a==b || b==c ||a==c);
    if(a>b && a>c)
       d= a+5;
    if(b>a && b>c)
       d= b+5;
    if(c>a && c>b)
       d= c+5;

    while(a==b || b==c ||a==c);
    if(a<b && a<c)
       e= a-3;
    if(b<a && b<c)
       e= b-3;
    if(c<a && c<b)
       e= c-3;

     std::cout <<"result max = " << d << endl
               <<"result min = " << e << endl;

     return 0;
}
