#include<iostream>
using namespace std;
class dhiraj
{
    public:
    //you can acess the all data every where
    string name;
    int age;
    int roll_num;

};
int main(){
    dhiraj s1;
    s1.name="shyam";
    s1.age=19;
    s1.roll_num=41;
    cout<<s1.age<<" ";
    cout<<s1.name<<" ";
    cout<<s1.roll_num<<" ";
    cout<<endl;
    cout<<"*******************************";
    cout<<endl;

    dhiraj s2;
    s2.name="surya";
    s2.age=30;
    s2.roll_num=322;
    cout<<s2.age<< " ";
    cout<<s2.name<< " ";
    cout<<s2.roll_num<< " ";

}

