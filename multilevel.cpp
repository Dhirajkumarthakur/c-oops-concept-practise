#include<iostream>
using namespace std;


class person{

    protected:
    string name;

    public:
    void introduce()
    {
       cout<<"hello my name is:"<<name<<endl;
    }



};

    class empoly:public person{
        protected:
        int salary;

        public:

        void monthly_salary(){
            cout<<"my monthly salary is:"<<salary<<endl;
        }
    };

    class manager:public empoly 
    {
        public:
        string depart;

        manager(string name,int salary,string depart) 
        {
           this->name=name;
           this->salary=salary;
           this->depart=depart;
        }

        void work() 
        {
           cout<<"i am leading the depart:"<<depart<<endl;
        }
    };




int main(){

    manager A1("dhiraj",200,"finance");
    A1.work();

}