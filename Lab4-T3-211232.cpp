#include <iostream>

using namespace std;

int main() 
{
	cout<<"\n\n\t\t\t\tCALCULATOR\n\n"; //title of program
	double num1,num2;  // used double because Any number can be entered
	char operation;    // because of single operation we use char
	cout<<"\n\t\t\tEnter First Number: "; cin>>num1;
	cout<<"\n\n\t\t\tEnter Second Number: "; cin>>num2;
	cout<<"\n\n\t\t\tEnter Operation Type(+,-,*,/): "; cin>>operation;
	cout<<endl<<endl;
	cout<<"************************************************************"; 
	if (operation=='+')  // used if else if else if to write program
	{
		cout<<"\n\n\t\tAnswer= "<<num1<<" + "<<num2<<" = "<<num1+num2;
	}
	else if (operation=='-')
	{
		cout<<"\n\n\t\tAnswer= "<<num1<<" - "<<num2<<" = "<<num1-num2;
	} 
	else if (operation=='*')
	{
		cout<<"\n\n\t\tAnswer= "<<num1<<" * "<<num2<<" = "<<num1*num2;
	} 
	else if (operation=='/')
	{
		cout<<"\n\n\t\tAnswer= "<<num1<<" / "<<num2<<" = "<<num1/num2;
	} 
	else cout<<"\n\n\t\tentered wrong input";
	return 0;
}
