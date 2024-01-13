#include<iostream>
using namespace std;

class Graphic{
    private:
 string name;
 int age;
 int amnt;

public:

 void setname(string n){
    name=n;
 }
 string getname(){
    return name;
 }

 void setage(int a){
      age=a;
 }

 int getage(){
    return age;
 }

 void setamnt(int c){
      amnt=c;
 }

 int getamnt(){
    return amnt;
 }


};




int main()
{
// Graphic g1;

// g1.name="Himanshu";
// cout<<g1.name<<endl;
// g1.age=21;
// cout<<g1.age<<endl;
// g1.amnt=31000;
// cout<<g1.amnt<<endl;


Graphic obj;
obj.setname("Himanshu");
obj.setage(40);
obj.setamnt(500);
cout<<"Name is:"<< obj.getname() <<endl;
cout<< "age is:"<<obj.getage() <<endl;
cout<< "total amnt:"<<obj.getamnt() <<endl;


}