#include<iostream>
#include<string.h>
using namespace std;
class BASE{
    protected:
    int id;
    char name[10];
    public:
    BASE(){
        cout<<"In Base class default constructor \n";
    }
    ~BASE(){
        cout<<"In Base class default destructor \n";
    }
    // BASE(char *name,int id){
    //     strcpy(this->name,name);
    //     this->id=id;
    // }
};
class DERIVED:public BASE{
    int m,p,c;
    public:
    DERIVED(){
        cout<<"In Derived class constructor \n";
    }
    ~DERIVED(){
        cout<<"In Derived class destructor \n";
    }
    DERIVED(const char *name,int id,int m,int p,int c){
        //BASE(name, id);
        strcpy(this->name,name);
        this->id=id;
        this->c=c;
        this->m=m;
        this->p=p;
    } 
    void show_derived();   
};
void DERIVED::show_derived(){
    cout<<"id:"<<id<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"marks"<<endl;
    cout<<"physics:"<<p<<endl;
    cout<<"chemistry:"<<c<<endl;
    cout<<"maths:"<<m<<endl;
}
int main(){
    DERIVED d("Yaswanth",494,89,76,99);
    d.show_derived();
}