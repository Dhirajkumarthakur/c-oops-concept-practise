#include<iostream>
using namespace std;

class Hero{

    string name;
    int age;
    int amnt;

    public:

    void setname(string a){
       name=a;
    }
    string getname(){
        return name;
    }

    void setage(int b){
        age=b;
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





int main(){
     
     Hero obj;
     obj.setname("surya");
     obj.setage(30);
     obj.setamnt(200);
     cout<<"name is:"<<obj.getname()<<endl;
     cout<<"age is:"<<obj.getage()<<endl;
     cout<<"amnt is:"<< obj.getamnt()<<endl;



}