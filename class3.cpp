#include<iostream>
using namespace std;
class section_A{
    public:
string name;
int age;
int roll_num;
string common_behaviar;
int regulation;
};

int main(){

    section_A s1;
    s1.name ="dhiraj";
    s1.age=21;
    s1.roll_num=41;
    s1.common_behaviar="awar";
    s1.regulation=2022;
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.roll_num<<endl;
    cout<<s1.regulation<<endl;
    cout<<"****************************************";
    cout<<endl;
 section_A s2;
    s2.name ="shyam";
    s2.age=27;
    s2.roll_num=411;
    s2.common_behaviar="con";
    s2.regulation=2022;
    cout<<s2.name<<endl;
    cout<<s2.age<<endl;
    cout<<s2.roll_num<<endl;
    cout<<s2.regulation<<endl;
   
}
