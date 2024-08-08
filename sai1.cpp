#include<iostream>
using namespace std;
inline double mul(float a,float b)
{
 return (a*b);
}
inline double div(float p,float q)
{
 return (p/q);
}


int main()
{
 double c=mul(12.12 ,14.14);
 cout<<"mult="<< c;
 float r =100.00;
 float s =5.5;
 
 double z = div(r,s);
 cout<<"Div="<< z;
 return 0;
 
 



}
