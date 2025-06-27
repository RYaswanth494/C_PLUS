#include<iostream>
using namespace std;
class Test{
    public:
    Test(){
     cout<<"base class constructor :"<<endl;   
    }
    virtual ~Test(){
        cout<<"base class destructor :"<<endl;
    }
};
class der:public Test{
    public :
    der(){
        cout<<"derived class constructor :"<<endl;
    }
    ~der(){
        cout<<"derived class destructor :"<<endl;
    }
};
int main(){
    Test *b=new der;
    delete b;
}