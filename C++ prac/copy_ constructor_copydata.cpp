#include<iostream>
#include<string>
 using namespace std;
 
class Student{
string name;
int age;

public:
Student(string name,int age){
this->name=name;
this->age=age;
}

Student(const Student &s) { 
name = s.name;
age = s.age;
}

void display() {
cout<<"Name:"<<name<<endl;
cout<<"Age:"<<age<<endl;
}
};

int main() {
Student s1("sameer",53);
s1.display();

Student s2=s1;
s2.display();

return 0;

}
