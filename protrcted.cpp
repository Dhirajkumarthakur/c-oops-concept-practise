#include<iostream>
using namespace std;

class Human
{
  private:
  int a;
  protected:
  int b;
  public:
  int c;
  

  void fun()
  {
    a=10;
    b=20;
    c=40;
  }


};

int main(){

    Human dhiraj;
    dhiraj.c=10;
    dhiraj.fun();

}