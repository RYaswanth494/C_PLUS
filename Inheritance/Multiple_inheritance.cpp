#include<iostream>
using namespace std;
class STU{
    int id;
    char name[30];
    public:
    void get_stu();
    void put_stu();
};
void STU::get_stu(){
    cout<<"enter id, name :";
    cin>>id>>name;
}
void STU::put_stu(){
    cout<<"id ="<<id<<endl;
    cout<<"name ="<<name<<endl;
}
class marks{
    protected:
    int m1,m2,m3;
    public:
    void get_marks();
    void put_marks();
};
void marks::get_marks(){
    cout<<"enter three subjects marks :";
    cin>>m1>>m2>>m3;
}
void marks::put_marks(){
    cout<<"m1 :"<<m1<<endl;
    cout<<"m2 :"<<m2<<endl;
    cout<<"m3 :"<<m3<<endl;  
}
class result:public marks,public STU{
    int total;
    float average;
    public:
    void show_result();
};
void result::show_result(){
    total=m1+m2+m3;
    average=(total/3.0);
    cout<<"total :"<<total<<endl;
    cout<<"average :"<<average<<endl;
}
int main(){
    result r;
    r.get_stu();
    r.get_marks();
    r.put_stu();
    r.put_marks();
    r.show_result();
    return 0;
}