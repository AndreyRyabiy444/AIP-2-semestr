#include <iostream>

using namespace std;
//Вычислить степень введенного числа (с помощью циклов).
int main()
{

    int chislo,b;
    int stepen = -1;
    std::cout<<"vvedite delimoe(chislo), delitel (b):  ";
    std::cin>>chislo>>b;
    if (chislo>0){
        while(chislo>0){
            chislo = chislo/b ;
            stepen ++;
             }
        std::cout<<"stepen = "<<stepen;
    }

    else
        std::cout<<"Enter other argument or delitel";

    return 0;
}
