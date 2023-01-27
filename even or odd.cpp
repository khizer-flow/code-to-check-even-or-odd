#include <iostream>
using namespace std;
int main()
{
	int num1;
	cout<<"Find out if the number is odd or even: "<<endl;
	cout<<"Enter the number :"<<endl;
	cin>>num1;
	cout<<num1%2<<endl;
	if(num1%2==0)	//"%" is called modular 
	{
		cout<<"The number you entered is even "<<endl;
	}
	else
	{
		cout<<"it is odd";
	}
	
}

