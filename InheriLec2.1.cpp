/*
1. WAP to print rate of interests of different banks using
hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes
*/

#include<iostream>
using namespace std;

class RBI
{
	
	public: 
	int n;
	
		void ROI(){
			cout<<"Enter rate of interest is : ";
			cin>>n;
			cout<<"The rate of inerest is : "<<n<<"%"<<endl;
		}
};

class ICICI: public RBI
{	
	public: 

};
class SBI: public RBI
{
	
	public: 


};
class BOB: public RBI
{
	
	public: 

};


int main(){
	
	ICICI i1;

	
	i1.ROI();
	
	
}

