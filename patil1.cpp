#include<iostream>
using namespace std;


class item
{
 static int count;
 int no;
 public:
 void getdata(int a)

 {
  no=a;
  count++;
  
 }
 void getcount()
 {
  cout<<"count ="<<count ;
  
 }
};



int item::count;
int main()

{
 item a,b,c;
 a.getcount();
 b.getcount();
 c.getcount();
 
 a.getdata(10);
 a.getdata(20);
 a.getdata(30);
 cout<<"after reading data ";
 a.getcount();
 b.getcount();
 c.getcount();
 return 0;
 
 

   

}
