#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    float result; float sum=0;
       cout<<"razmer macciva 10x10"<<endl;
     int a[10][10];//задаем массив
     int n,m; cout<<"Vvedite n<=10 i m<=10 (kol-vo elementov v maccive)"<<endl;;cin>>n>>m;
      for (int j=0; j<m; j++)
     for (int i=0; i<n; i++)

     {cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}//заполняем массив
    for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
    sum+=pow(a[i][j],2);//находим сумму всех элементов в квадрате//
    result=sqrt(sum);//вычисляем квадртный корень из суммы
    cout<<"HOPMA matricy="<<result<<endl;//выводим результат

    return 0;
}
