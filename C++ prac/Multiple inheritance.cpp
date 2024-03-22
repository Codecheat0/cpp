#include<iostream>
using namespace std;
class A {
	protected:
		int a ;
		public :
			void get_a (int n)
		{
			a = n;
		}
	};
	class B {
	protected:
		int b ;
		public:
			void get_b (int n)
		{
			b = n;
		}
	};
	class c:public A,public B {
		public:
			void display ()
			{
				cout<<"The value of a is:"<<a<<endl;
				cout<<"The value of b is:"<<b<<endl;
				cout<<"Addition of a and b is:"<<a+b;
			}
			};
			int main ()
			{
				c();
				c.get_a(20);
				c.get_b(30);
				c.display();
				
				return 0;
			}
	
	
