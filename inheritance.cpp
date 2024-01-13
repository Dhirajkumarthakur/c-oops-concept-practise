#include<iostream>
using namespace std;


class Human
{

    public:
  string name;
  int age;
  int weight;
};

class student:public Human
{
   int roll_num;
   int fees;
};





int main(){

    student A;
    A.name="dhiraj";
    cout<< A.name;

}