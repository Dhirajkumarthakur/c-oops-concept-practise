#include<iostream>
using namespace std;

// define the constructor in side the class

class student{
      string name;
      int age;
      int amnt;


      public:

      student(){
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the age:";
        cin>>age;
        cout<<"enter the amnt:";
        cin>>amnt;
      }


     void display(){
        cout<<name<<" "<<age<<" "<<amnt<<" ";
     }

};





int main(){

    student s;
    s.display();
   

}