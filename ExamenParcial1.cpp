#include <bits/stdc++.h>
using namespace std;
class Circulo
{
float radio;
public:
int x,y;
Circulo();
Circulo(int x2, int y2);
Circulo(int x2, int y2, float r);
float getRadio();
void setRadio(float r);
float getArea();
void intesrects(Circulo circulo);
};

int main()
{
    Circulo c1;
    c1.x=10;
    c1.y=10;
    c1.setRadio(5.5);
    Circulo c2(3,2);
    c2.setRadio(4.4);
    Circulo c3(4,5,10.1);
    cout << "area 1:"<< c1.getArea()<<endl;
    cout << "area 2:"<< c2.getArea()<<endl;
    cout << "area 3:"<< c3.getArea()<<endl;
    c1.intesrects(c2);
    c1.intesrects(c3);
    c2.intesrects(c3);
    return 0;
}
Circulo::Circulo()
{
    radio=0.0;
    x=0;
    y=0;
}
Circulo::Circulo(int x2,int y2)
{
radio=0.0;
x=x2;
y=y2;
}
Circulo::Circulo(int x2,int y2,float r)
{
    if (r<0)radio=0.0;
    else radio=r;
    x=x2;
    y=y2;
}
float Circulo::getRadio()
{
return radio;
}
void Circulo::setRadio(float r)
{
if (r<0)radio=0.0;
else radio=r;
}
float Circulo::getArea()
{
    return 3.14*(radio*radio);
}
void Circulo::intesrects(Circulo circulo)
{
    //distancia entre 2 puntos 
    float dis;
   dis=sqrt(pow((circulo.x-x),2)+pow((circulo.y-y),2));
   if (dis<circulo.getRadio()+radio)cout << "si intersectan"<<endl;
   else cout << "no intersectan"<<endl;
}