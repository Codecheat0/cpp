#include<iostream>
using namespace std;

int main ()
{
	int n ;
	int sum_even =0,sum_odd=0;
	cout<<"enter a positive integer n:";
	cin>>n;
	for (int i=1;i<=n;i++){
		if (i%2==0){
			sum_even=i;
		}else{
			sum_odd=i;
		}
		}
		cout<<"sum of even numbers:"<<sum_even<<endl;
		cout<<"sum of odd numbers:"<<sum_odd<<endl;
		
		return 0;
}
