#include <iostream>
#include <string>

using namespace std;

/*
Составить алгоритм, подсчитывающий количество слов в тексте.
*/
void schetchick(){
    int score = 1;
    std::string str1 = "Hello I am Andrew and I am 18.";
    for(int j; j<str1.size();j++){
        if(str1[j] == ' ')
            score=j-18;
    }
    std::cout<<"Itog = "<<score;

}

int main()
{
   schetchick();
    return 0;
}
