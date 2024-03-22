#include<iostream>
#include<string>
using namespace std;

class Person{
public:
string name;
int age;

Person(string name, int age){
this->name = name;
this->age = age;
}
};

Person* findEldest(Person* people, int size){
Person* eldest = & people[0];

for (int i = 1; i < size; i++) {
if (people[i].age > eldest->age){
eldest = &people[i];
}
}
return eldest;
}

int main() {
Person people[]={
Person("John", 25),
Person("Jane", 30),
Person("Jim", 35),
Person("Jessica", 40)
};

int size = sizeof(people) / sizeof(people[0]);
Person *eldest = findEldest(people, size);
cout<<"The eldest person is:"<<eldest->name<<"with age"<<eldest->age<<endl;

return 0;
}
