#include<iostream>
#include<string> 
using namespace std;

class Student {
public:
string name; int roll_no;

Student(string name, int roll_no) {
this->name = name;
this->roll_no = roll_no;}

void display() {
cout<<"Name:"<<name<<endl;
cout<<"Roll_No:"<<roll_no<<endl;
}
};
int main(){ 
Student s("sameer",53);
s.display();

return 0;
}
