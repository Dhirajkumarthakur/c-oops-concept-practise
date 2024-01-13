#include<iostream>
using namespace std;
class Hero{
    //proparties
    //public://class ke aanadar aur bahar dono jagah access kar sakte hai
    private:
int health;
//private://keval class ke aandar hi access kar sakte hai
//aagar aap kuch nahi lagate hai to c++ me by default privet hota hai sab kuch
public:
char level;
Hero(){
    cout<<"constructer called"<<endl;
}
//parameterised constructer
Hero(int health){
    cout<<"this ->"<<this<<endl;
   this-> health=health;
}


void print(){
    cout<<level<<endl;
}
int getHealth(){
    return health;
}
char getlevel(){
    return level;
}
void setHealth(int h){
    health=h;
}
void setlevel(char ch){
    level=ch;
}






};



int main(){

//object created atatically
cout<<"Hi"<<endl;
Hero ramesh(10);
cout<<"Address of ramesh "<<&ramesh<<endl;
cout<<"hello"<<endl;

//dynamically
Hero *h=new Hero;





//static allocation
/*
Hero a;
a.setHealth(40);
a.setlevel('b');

cout<<"level is"<<a.level<<endl;
cout<<"health is"<<a.getHealth()<<endl;

//dynamically
Hero *b=new Hero;
b->setlevel('a');
b->setHealth(50);



cout<<"level is"<<(*b).level<<endl;
cout<<"health is"<<(*b).getHealth()<<endl;

//aleternative apporoch or
cout<<"level is"<<b->level<<endl;
cout<<"health is"<<b->getHealth()<<endl; */
















//creation object
// Hero ramesh;
// cout<<"ramesh health is"<<ramesh.getHealth()<<endl;
// //use setterhealth
// ramesh.setHealth(70);
// //ramesh.health=40;
// ramesh.level='a';
// //cout<<"size: "<<sizeof(h1)<<endl;
// //cout<<"health is :"<<ramesh.health<<endl;
// cout<<"ramesh is:"<<ramesh.getHealth()<<endl;
// cout<<"level is :"<<ramesh.level<<endl;

return 0;
}