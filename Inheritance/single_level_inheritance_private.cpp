#include<iostream>
using namespace std;
class SLIB_STU{
    private:
    int id;
    char name[20];
    public:
    void get_stu();
    void put_stu();
};
void SLIB_STU::get_stu(){
    cout<<"enter id, name :";
    cin>>id>>name;
}
void SLIB_STU::put_stu(){
    cout<<"id :"<<id<<endl;
    cout<<"name :"<<name<<endl;
}
class SLIB_PHY: private SLIB_STU{
    private:
    float weight,height;
    public:
    void get_phy();
    void put_phy();    
};
void SLIB_PHY::get_phy(){
     get_stu();
    cout<<"enter weight, height :";
    cin>>weight>>height;
}
void SLIB_PHY::put_phy(){
    put_stu();
    cout<<"weight :"<<weight<<endl;
    cout<<"height :"<<height<<endl;
}
int main(){
    SLIB_PHY stu1;
    stu1.get_phy();
    stu1.put_phy();
}