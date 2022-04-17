#include <iostream>
#include <cmath>
using namespace std;

void Mean(float x,float y,float &AMean,float &GMean){

    AMean = (x+y)/2;
    GMean = sqrt(x*y);
}
int main()
{
    float s,e,A,G;
    s=3;
    e=1;
    Mean(s,e,A,G);
    cout<<"Itog Amean: "<<A<<std::endl;
    cout<<"Itogv Gmean: "<<G<<std::endl;
    return 0;
}
