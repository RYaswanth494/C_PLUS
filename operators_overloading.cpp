#include"iostream"
using namespace std;
class overload_operator
{
   int a;
   public:
   void get_data(){
    cout<<"enter a valyue :"<<endl;
    cin>>a;
   }
   void put_data(){
    cout<<"value is :"<<a<<endl;
   }
};
int main(){
    overload_operator ov;
    ov.get_data();
    ov.put_data();
    return 0;
}
