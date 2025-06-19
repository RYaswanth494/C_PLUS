#include<iostream>
using namespace std;
class ACCOUNT{
    int account_number;
    char name[20];
    public:
    void get_acc();
    void put_acc();
};
class SAVINGS:public ACCOUNT{
    int balance;
    public:
    void get_savings_balance();
    void put_savings_balance();
};
class CURRENT:public ACCOUNT{
    int balance;
    public:
    void get_current_balance();
    void put_current_balance();
};
void ACCOUNT::get_acc(){
    cout<<"ente account number ,name :";
    cin>>account_number>>name;
}
void ACCOUNT::put_acc(){
    cout<<"account no. "<<account_number<<endl;
    cout<<"name "<<name<<endl;
}
void SAVINGS::get_savings_balance(){
    cout<<"enter balance :";
    cin>>balance;
}
void SAVINGS::put_savings_balance(){
    if(balance<500){
        cout<<"your balance is low"<<endl;
    }else{
        cout<<"your account having sufficient balance"<<endl;
    }
}
void CURRENT::get_current_balance(){
    cout<<"enter balance :";
    cin>>balance;
}
void CURRENT::put_current_balance(){
    if(balance<1000){
        cout<<"your balance is low"<<endl;
    }else{
        cout<<"your account having sufficient balance"<<endl;
    }
}
int main(){
    int option;
    cout<<"selsect below option: \n 1.savings \n 2.current\n";
    cin>>option;
    switch(option){
        case 1:SAVINGS s;
               s.get_acc();
               s.get_savings_balance();
               s.put_acc();
               s.put_savings_balance();
               break;
        case 2:CURRENT s1;
               s1.get_acc();
               s1.get_current_balance();
               s1.put_acc();
               s1.put_current_balance();
               break; 
        default :cout<<"invalid option"<<endl;             
    }
}