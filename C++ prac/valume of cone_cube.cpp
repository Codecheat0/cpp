#include<iostream>
#include<cmath>
using namespace std;
const double pi=3.1416;
int main()
{

	int choice;
	double side,height,radius,length,width,volume;
	cout<<"Enter 1 for cubr,2 for cone amd 3 for cuboid";
	cin>>choice;
	if(choice==1){
		cout<<"enter side length";
		cin>>side;
		volume=pow(side,3);
		cout<<"The volume of cube is:"<<volume;
	}else 
	if(choice==2){
		cout<<"enter radius";
		cin>>radius;
		cout<<"enter height";
		cin>>height;
		volume=(1.0/3)*pi*pow(radius,2)*height;
		cout<<"The volume of cone is:"<<volume;
	}else 
	if(choice==3){
		cout<<"enter length";
		cin>>length;
		cout<<"enter width";
		cin>>width;
		cout<<"enter height";
		cin>>height;
		
		volume=length*width*height;
		cout<<"The volume of cuboid is:"<<volume;
		
} else{
	cout<<"invalid choice";
}
return 0;
}
