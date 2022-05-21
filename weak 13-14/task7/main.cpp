#include <iostream>
#include<array>
/*Имеется информация об N членах спортивной секции: фамилия, возраст, рост.
Ввести информацию о каждом:
- Напечатать фамилию самого высокого.
- Ввести информацию по участникам соревнований и вывести информацию о
победителе в пятиборье.
- Напечатать фамилии и возраст чей возраст выше среднего.
*/
struct People{
    char fam;
    int year;
    float height;//рост
    int itog;//пятиборье /win = 1/lose<1

};

using namespace std;
void task7_1(People & a ){

        if(a.height>1.5){
           std::cout<<"Fam ="<<a.fam<<"\n"
                    <<"Height ="<<a.height<<"\n"
                    <<"Year ="<<a.year<<std::endl;

        }



}

void task7_2(People b,People c,People d,People f,People e){
             std::cout<<"Fam ="<<b.fam<<"\n"
             <<"Height ="<<b.height<<"\n"
             <<"Mesto ="<<b.itog<<"\n"
             <<"Year ="<<b.year<<std::endl;
             std::cout<<endl;

             std::cout<<"Fam ="<<c.fam<<"\n"
             <<"Height ="<<c.height<<"\n"
             <<"Mesto ="<<c.itog<<"\n"
             <<"Year ="<<c.year<<std::endl;
             std::cout<<endl;

             std::cout<<"Fam ="<<d.fam<<"\n"
             <<"Height ="<<d.height<<"\n"
             <<"Mesto ="<<d.itog<<"\n"
             <<"Year ="<<d.year<<std::endl;
             std::cout<<endl;

             std::cout<<"Fam ="<<f.fam<<"\n"
             <<"Height ="<<f.height<<"\n"
             <<"Mesto ="<<f.itog<<"\n"
             <<"Year ="<<f.year<<std::endl;
             std::cout<<endl;

             std::cout<<"Fam ="<<e.fam<<"\n"
             <<"Height ="<<e.height<<"\n"
             <<"Mesto ="<<e.itog<<"\n"
             <<"Year ="<<e.year<<std::endl;

}

void task7_3(People g){
    if(g.year>14){
       std::cout<<"Fam ="<<g.fam<<"\n"
                <<"Year ="<<g.year<<std::endl;
        }
}

int main(){

    People Igor,Lera,Vika,Danya,Sonny;
    Igor.fam='l';
    Igor.year = 12;
    Igor.height=1.5;
    Igor.itog = 1;

    Lera.fam='s';
    Lera.year = 15;
    Lera.height=1.3;
    Lera.itog = 5;

    Vika.fam='w';
    Vika.year = 17;
    Vika.height=1.7;
    Vika.itog = 2;

    Danya.fam='t';
    Danya.year = 14;
    Danya.height=1.8;
    Danya.itog = 3;

    Sonny.fam='s';
    Sonny.year = 16;
    Sonny.height=1.4;
    Sonny.itog = 4;

    //task7_1(Danya);
    //task7_2(Igor,Lera,Vika,Danya,Sonny);
    task7_3(Sonny);
    return 0;
}
