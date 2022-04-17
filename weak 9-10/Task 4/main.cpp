#include <iostream>

using namespace std;
/*
Описать процедуру TimeToHMS(T, H, M, S), определяющую по времени T (в
секундах) содержащееся в нем количество часов H, минут M и секунд S (T —
входной, H, M и S — выходные параметры целого типа). Используя эту процедуру,
найти количество часов, минут и секунд для пяти данных отрезков времени T1, T2,
. . ., T5.
*/
void TimeToHMS(int T,int & H, int & M, int & S){
    H = T / 3600;
    T -= H*3600;
    M = T / 60;
    T -= M*60;
    S = T;

}
int main()
{
    int T,H,M,S;

    for(int i = 0 ; i < 5; ++i){
            std::cout<<"Seconds = ";
            cin >> T;
            TimeToHMS(T, H, M, S);
            cout<<"Hours =  " << H << " " << "Minuts =  "<<  M << " " << "Seconds =  " << S  << endl;
    }

    return 0;
}
