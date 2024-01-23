/*
2. WAP to perform four different number’s sum by
inheriting constructors in hybrid inheritance.
*/

#include<iostream>
using namespace std;

class A
{
	
	public: 
		int n1;
		void n11(){
			cout<<"enter a num: ";
			cin>>n1;
		}
};
class B : public E
{
	
	public: 
		int n2;
		void n22(){
			cout<<"enter a num: ";
			cin>>n2;
		}
};
class C:public E
{
	
	public: 
		int n3;
		void n33(){
			cout<<"enter a num: ";
			cin>>n3;
		}
};
class D:public E
{
	
	public: 
		int n4;
		void n44(){
			cout<<"enter a num: ";
			cin>>n4;
		}
};
class E:public A,public B,public C, public D
{
	
	public: 
		int n;
		void nn(){
			cout<<"sum is : ";
			cin>>n1+n2+n3+n4;
		}
};
int main(){	
	
	E e1;
	e1.n11();
	e1.n22();
	e1.n33();
	e1.n44();
	e1.nn();	
}
