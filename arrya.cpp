#include<iostream>
using namespace std;
class student
{
 int rollno;
 char name[20];
 public:
 void getdata()
 {
  cout<< "\nenter roll no : ";
  cin>> rollno;
  cout<< " \nenter name ";
  cin>> name;
  
 
 }
 void putdata();


};



void student :: putdata()
{
    cout<<" Roll_no:  "<< rollno;
    cout<< "Name: "<< name;

}
const int size=3;
int main()
{
    student obj[size];
    for (int i=0; i < size;i++)
    {
        cout<< " \nenter the details of the student"<< i+1;
        obj[i].getdata();

    }
    for(int i=0;i<size;i++)
    {
        cout<<"\ndsiplay records";
        obj[i].putdata();

    }
    return 0;

}
