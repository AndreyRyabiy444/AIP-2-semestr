#include <iostream>
#include <string>

using namespace std;

/*
проверить соответствие открывающихся и закрывающихся фигурных
скобок { и }. Результат проверки вывести на экран и
записать в виде фразы в текстовый файл.
*/

void strCol(){
    std::string str1;
    std::cout<<"Vvedite stroku^_^  "<<std::endl;
    getline(cin,str1);
    int n = 0,p=0;
    for(int c = 0;c<str1.size();c++){
        if(str1[c] =='{')
            n++,p++;
        if(str1[c] =='}')
            n++,p--;
        if(p<0)
            break;
    }
    if(p==0)
        std::cout<<"results: "<<n<<"\n";
    else std::cout<<"Syntax not OKAYYY";
}

int main()
{
    strCol();
    return 0;
}
