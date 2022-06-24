#include <iostream>
#include <string>

/*
Дана строка. Если ее длина больше 10, то оставить в строке только первые 6
символов, иначе дополнить строку символами 'o' до длины 12.
*/

using namespace std;

void strin(){
    std::string str1 = "Bulka";
    std::string str2 = "1234567890";    //строка из 10 символов

        if (str1.length() < 10){ //количество символов в строке <10
           str1.resize(12, 'o');
           std::cout<<str1<<endl;
       }

       else if(str1.length() > 10){
            str1.resize(5);
            std::cout<<str1<<endl;
        }

}

int main()
{
    strin();
    return 0;
}
