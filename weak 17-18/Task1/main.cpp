#include <iostream>
#include <string>
using namespace std;

/*
Составить алгоритм, находящий, сколько раз в тексте сочетание “мир” является
отдельным словом (пробелы перед и после).

*/
void findString(){
    int score = 0;
    string str1 = "world people must have. world kitchen very diference. world ";
    if(str1.find(" world ") != -1){  //world (с пробелами в начале и в конце)
            score+=1;
        std::cout<<"Score = "<<score;
    }


    }


int main()
{
 findString();
    return 0;
}
