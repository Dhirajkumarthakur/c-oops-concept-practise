#include<iostream>
using namespace std;

class Engineer{
    void money(){
        cout<<"Hello\n";
    }

     public:

     string specilization;

     Engineer(){
        cout<<"Hello engineer\n";
     }

     void work(){
        cout<<"i have specilization in"<<specilization<<endl;
     }
};

    class youtuber 
    {
        public:
        int subs;

        youtuber(){
            cout<<"hello youtube\n";
        }

        void contentcreater(){
            cout<<"i have subsciribe base of"<<subs<<endl;
        }
    };

    class codeteacher:public Engineer,public youtuber{
          public:

          string name;

          codeteacher(){
            cout<<"hello coder\n";
          }

          codeteacher(string name,string specilization,int subs){
            this->name=name;
            this->specilization=specilization;
            this->subs=subs;
          }

          void showcase(){
            cout<<"my name is "<<name<<endl;
            work();
            contentcreater();
          }
    };

int main(){

    codeteacher A1;

}