#include<iostream>
using namespace std;
int main ()
{
	double num1,num2;
	char operation;
	
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter second number:";
	cin>>num2;
	cout<<"Enter operation(+,-,/,*)";
	cin>>operation;
	
	if(operation=='+'){
		cout<<num1+num2;
	}else if(operation=='-'){
		cout<<num1-num2;
	}else if(operation=='*'){
		cout<<num1*num2;
	}else if(operation=='/'){
		cout<<num1/num2;
	}else{
		cout<<"invalid operator";
	}
	return 0;
}
