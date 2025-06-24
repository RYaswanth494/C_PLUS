#include<iostream>
using namespace std;
class A{
public:
void A_show(){
    cout<<"class A";
}
};
class B:public  A{
public:
void B_show(){
    cout<<"class B";
}
};
class C:public  A{
public:
void C_show(){
    cout<<"class C";
}
};
class D:public B,public C{
public:
virtual void D_show(){
    cout<<"class D";
}
};
int main(){
    D obj;
    obj.B::A_show();
    obj.C::A_show();

}