#include<iostream>
using namespace std;
class STU{
    int id;
    char name[20];
    public:
    void get_stu();
};
class MARKS:public STU{
    protected:
    int m,p,c;
    public:
    void get_marks();
};
class SPORTS{
    protected:
    int spmarks;
    public:
    void get_sports();
};
class RESULTS:public SPORTS,public MARKS{
    public:
    void get_result();
};
void STU::get_stu(){
    cout<<"enter id,name :";
    cin>>id>>name;
}
void MARKS::get_marks(){
    cout<<"enter marks :";
    cin>>m>>p>>c;
}
void SPORTS::get_sports(){
    cout<<"enter sports marks :";
    cin>>spmarks;
}
void RESULTS::get_result(){
    cout<<"total: "<<(m+p+c+spmarks)<<endl;
    cout<<"average: "<<(m+p+c+spmarks)/3.0;
}
int main(){
    RESULTS r;
    r.get_stu();
    r.get_marks();
    r.get_sports();
    r.get_result();
}