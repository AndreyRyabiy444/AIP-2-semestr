#include <iostream>

using namespace std;

int main()
{
    //Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
    //равно номеру строки. Количество строк Н вводит пользователь (можно из файла).
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        cout << "0" << endl;
        cout <<endl;
    }
    return 0;
}
