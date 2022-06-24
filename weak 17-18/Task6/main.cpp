#include <iostream>
#include <string>

using namespace std;
/*
Дана строка. Вставить после каждого символа пробел. Пробел не считается
символом, после которого надо ставить пробел.
*/

void stroka(){
    std::string str1 = " PolePchel ";
    std::string str2(str1, 1, 4);
    std::string str3(str1, 5, 7);
    std::string empty = "  ";
    std::cout<<"Default string:  "<<str1<<std::endl;
    std::cout<<"Result string:  "<<str2<<empty<<str3;
}

int main()
{
    stroka();
    return 0;
}
