#include <iostream>
#include <string>
/*
Удалить из строки первые буквы слов. (Пример.
Входная строка: Crystal Method.
Результат: rystal ethod).
*/
using namespace std;

void strochka(){
    std::string str1 = "Crystal Method";
    std::string str2(str1,1,5);
    std::string str3(str1,9,5);
    std::cout<<"Defoult: "<<str1<<std::endl;
    std::cout<<"Itog : "<<str2<<"  "<<str3;
}

int main()
{
 strochka();
    return 0;
}
