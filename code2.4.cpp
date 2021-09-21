#include <iostream>
#include<cmath>
using namespace std;
    int quad(int a, int b, int c=3);
    float quad(float a, float b, float c=2.5);
    int main() {
        int i,j,k;
        float p,q,r;
        cout<<"Enter the value of three integers:"<<endl;
        cin>>i>>j>>k;
        cout<<"Enter the value of three floating numbers:"<<endl;
        cin>>p>>q>>r;
        int roots;
        cout<<i<<"x^2"<<"+"<<j<<"x"<<"+"<<k<<endl;
        roots=quad(i,j,k);
        cout<<p<<"x^2"<<"+"<<q<<"x"<<"+"<<r<<endl;
        roots=quad(p,q,r);
        cout<<i<<"x^2"<<"+"<<j<<"x"<<"+"<<"3"<<endl;
        roots=quad(i,j);/*with defualt parameter c=3*/
        cout<<p<<"x^2"<<"+"<<q<<"x"<<"+"<<"2.5"<<endl;
        roots=quad(p,q);/*with defuat parameter c=2.5*/
    return 0;
}
int quad(int a, int b, int c){
    float x_1,x_2,x,real,imag;
    int d=(b*b)-(4*a*c);
    if(d==0)
    {
        x=(-b)/(2*a);
    cout<<"Roots are real and same and is given by " << x << endl;
    }
    else
    {
    if(d>0)
    {
        x_1=(-b+sqrt(d))/(2*a);
        x_2=(-b-sqrt(d))/(2*a);
        cout<<"Roots are real and unequal and are given by " << x_1 << " and " << x_2<<endl;
    }
    else {
       real=(-b)/(2*a);
imag=(sqrt(-d))/(2*a);
        cout<<"Roots are complex,unequal and are given by " << real <<"+"<< imag<<"i"<< " and " << real<<"-"<< imag<<"i"<<endl;
    }
}
return 0;
}
float quad(float a, float b, float c){
    float x_1,x_2,x, real, imag;
    float d=(b*b)-(4*a*c);
    if(d==0)
    {
        x=(-b)/(2*a);
    cout<<"Roots are real and equal and is given by " << x << endl;
    }
    else
    {
    if(d>0)
    {
        x_1=(-b+sqrt(d))/(2*a);
        x_2=(-b-sqrt(d))/(2*a);
        cout<<"Roots are real and unequal and are given by " << x_1 << " and " << x_2<<endl;
    }
    else {
        real=(-b)/(2*a);
        imag=(sqrt(-d))/(2*a);
        cout<<"Roots are complex,unequal and are given by " << real <<"+"<< imag<<"i"<< " and " << real<<"-"<< imag<<"i"<<endl;
    }
}
return 0;
}
