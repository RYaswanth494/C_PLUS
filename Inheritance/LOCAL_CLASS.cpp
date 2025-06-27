#include<iostream>
using namespace std;
int x=1000;
void fun();
int main(){
    fun();
}
void fun(){
    class local{
        int x;
        public:
        void show(){
            x=100;
            cout<<"local x:"<<x<<endl;
            cout<<"global x:"<<::x<<endl;
        }
    };
    local l;
    l.show();
}