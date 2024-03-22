
#include<iostream>
#include<string>
using namespace std;

class Student {
string name;
int age;

public:
Student(string name, int age) {
this->name = name;
this->age = age;
}

void display() {
cout<<"Name:"<<name<<endl;
cout<<"Age:"<<age<<endl;
}

};

int main() {
Student *s = new Student("sameer", 53);
s->display();
delete s;

return 0;
}
