#include<iostream>
using namespace std;
class student
{
  
 protected:
      int roll_no;
      char name[20];
 public:
      void getdata()
      {
       cout<<"enter name ="<<endl;
       cin>>name;
       cout<<"enter roll-no"<<endl;
       cin>>roll_no;
      }
      void putdata()
           {
            cout<<"The given Name is: "<<name<<endl;
            cout<<"The Roll_no is :"<<roll_no<<endl;
            
           }
           

};

class test : public student
{
 protected:
      int m1;
      int m2;
 public:
      void setvalue()
      {      
       cout<<"enter marks of sub1:"<<endl;
       cin>>m1;
       cout<<"enter marks of sub2"<<endl;
       cin>>m2;       
      }
      void getvalue()
      {      
       cout<<"the  marks of sub1:"<<m1<<endl;
       
       cout<<"the marks of sub2"<<m2;
              
      }
};
class result : public test 
{ 
 protected:
     int r;
 public:
     void getresult()
     {
      r=m1+m2;
      cout<<"the result is "<<r;
      cin>>r;
      
      
     }
       

              





};      





int main()
{
 result obj;
 obj.getdata();
 obj.putdata();
 
 
 obj.setvalue();
 obj.getvalue();
 obj.getresult();
 
 return 0;




}
