#include"iostream"
using namespace std;
class overload_operator
{
   int a;
   public:
   void put_data();
   void get_data();
   overload_operator operator+(overload_operator);
   overload_operator operator-(overload_operator);
   overload_operator operator*(overload_operator);
   overload_operator operator/(overload_operator);
};
void overload_operator::get_data(){
cout<<"enter a valyue :";
cin>>a;
}
void overload_operator::put_data(){
cout<<"value is :"<<a<<endl;
}
overload_operator overload_operator::operator+(overload_operator obj2){
    overload_operator obj3;
    obj3.a=a+obj2.a;
    return obj3;
}
overload_operator overload_operator::operator-(overload_operator obj2){
    overload_operator obj3;
    obj3.a=a-obj2.a;
    return obj3;
}
overload_operator overload_operator::operator*(overload_operator obj2){
    overload_operator obj3;
    obj3.a=a*obj2.a;
    return obj3;
}
overload_operator overload_operator::operator/(overload_operator obj2){
    overload_operator obj3;
    obj3.a=a/obj2.a;
    return obj3;
}
int main(){
    overload_operator obj1,obj2,obj3;
    obj1.get_data();
    obj1.put_data();
    obj2.get_data();
    obj2.put_data();
    obj3=obj1+obj2;
    cout<<"---------ADD------------"<<endl;
    obj3.put_data();
    cout<<"------------------------"<<endl;
     obj3=obj1-obj2;
    cout<<"---------SUB----------"<<endl;
    obj3.put_data();
    cout<<"------------------------"<<endl;
    obj3=obj1*obj2;
    cout<<"---------MUL----------"<<endl;
    obj3.put_data();
    cout<<"------------------------"<<endl;
     obj3=obj1/obj2;
    cout<<"---------DIV--------"<<endl;
    obj3.put_data();
    cout<<"------------------------"<<endl;

    return 0;
}
