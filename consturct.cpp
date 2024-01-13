#include<iostream>
using namespace std;
  //constructor in the class 
class student 
{
   string name;
   int age;
   int roll_num;

   public:

    student();
   void display(){
    

   }

   



};
  student::student()
   {
    cout<<"enter the name:";
    cin>>name;
    cout<<"enter the age:";
    cin>>age;
    cout<<"enter the roll_num:";
    cin>>roll_num;
   }

     void student::display()
     {
        cout<<"name is:"<<name<<endl;
        cout<<"age is :"<<age<<endl;
        cout<<"roll_num is:"<<roll_num<<endl;
   }
   
   
    





int main(){

    student s;
    s.display();

}