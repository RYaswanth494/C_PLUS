#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class STU{
    int id;
    char name[10];
    public:
    void get_stu();
    void save_to_file(ofstream &file);
};
void STU::get_stu(){
    cout<<"enter id,name :";
    cin>>id>>name;
    cout<<"\n";
}
void STU::save_to_file(ofstream &file){
    file << "ID: " << id << ", Name: " << name << endl;
}
void read_or_write(char op){
    if(op=='r'||op=='R'){
            ifstream file("STUDENT.txt");  // Open the file for reading
    if (!file) {
        cerr << "File could not be opened!" << endl;
    }
    string line;
    cout << "Contents of STU_DATA.txt:\n";
    while (getline(file, line)) {   // Read file line-by-line
        cout << line << endl;       // Display each line
    }
    file.close();
    }else if(op=='w' || op=='W'){
            STU s;
    ofstream FILE("STUDENT.TXT",ios::app); 
    if (!FILE) {
        cerr << "Error opening file!" << endl;
    }
    char option;
    do{
        s.get_stu();
        s.save_to_file(FILE);
        cout<<"any more students u have to enter(y/n) :";
        cin>>option;
    }while((option=='y')||(option=='Y'));
    FILE.close();
     cout << "Data saved successfully in text format!" << endl; 
    }
}
int main(){
 char p;
 cout<<"read or write";
 cin>>p;
 read_or_write(p);
}