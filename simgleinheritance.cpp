#include<iostream>
using namespace std;


class Human 
{
  protected:
  string name;
  int age;

   public:

   void work() 
   {
    cout<<"i am working "<<endl;
   }





};


class student:public Human 
{
     int roll_num,fees;

     public:

     student(string name,int age,int roll_num,int fees){

        this->name;
        this->age;
        this->roll_num;
        this->fees;

     }
};



int main(){

    student A1("dhiraj",21,32,99);
    A1.work();

}