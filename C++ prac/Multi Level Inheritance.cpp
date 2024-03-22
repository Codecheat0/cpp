#include<iostream>
using namespace std;
class vechicle{
	protected:
	string make;
	string model;
	
	public:
	void setmake(string m){
		make=m;
	}
	void setmodel(string m){
		make=m;
	}
};
class car:public vechicle{
	protected:
	int year;
	public:
	void setyear(int y){
		year=y;
	}
};
class sports:public car{
	protected:
	string type;
	public:
	void settype(string t){
		type=t;
	}
	void display(){
		cout<<"make :"<<make<<endl;
		cout<<"model :"<<model<<endl;
		cout<<"year :"<<year<<endl;
		cout<<"type :"<<type<<endl;
	}
};
int main(){
	sports car;
	car.setmake("cy");
	car.setmake("tesla");
	car.setyear(2023);
	car.settype("electric");
	car.display();
	
	return 0;
	}
