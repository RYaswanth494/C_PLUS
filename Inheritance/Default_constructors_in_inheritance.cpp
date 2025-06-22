#include<iostream>
using namespace std;
class BASE{
    public:
    BASE(){
        cout<<"base class constructor \n";
    }
    ~BASE(){
        cout<<"base class destructor \n";
    } 
};
class DERIVED:public BASE{
    public:
     DERIVED(){
        cout<<"derived class constructor \n";
    }   
    ~DERIVED(){
        cout<<"derived class destructor \n";
    } 
};
int main(){
    DERIVED d;
}