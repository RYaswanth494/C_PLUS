#include<iostream>
using namespace std;
class SHAPE{
    protected:
    float d1,d2;
    public:
    virtual float area()=0;
    void get_dimension(){
        cin>>d1>>d2;
    }
};
class TRIANGLE:public SHAPE{
    public :
    virtual float area(){
        return 0.5*d1*d2;
    }
};
class RECTANGLE:public SHAPE{
    public :
    virtual float area(){
        return d1*d2;
    }
};
int main(){
 TRIANGLE t;
 cout<<"enter length & height :";
 t.get_dimension();
 cout<<"area triangle :"<<t.area()<<endl;
 RECTANGLE r;
 cout<<"enter length & breadth :";
 r.get_dimension();
 cout<<"area rectangle :"<<r.area()<<endl;
}