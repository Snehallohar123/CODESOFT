#include<iostream>
using namespace std;
int main()
{
	string ch;
	int num1,num2;
	cout<<"enter the number to perform arithmetic operation"<<endl;
	cin>>num1;
	cout<<"enter the operator"<<endl;
	cin>>ch;
	cout<<"enter the number2"<<endl;
	cin>>num2;
	if(ch=="+")
	{
		cout<<num1<<"+"<<num2<<"="<<(num1+num2)<<endl;
	}
	else if(ch=="-")
	{
		cout<<num1<<"-"<<num2<<"="<<(num1-num2)<<endl;
	}
	else if(ch=="*")
	{
		cout<<num1<<"*"<<num2<<"="<<(num1*num2)<<endl;
	}
	else if(ch=="/")
	{
		cout<<num1<<"/"<<num2<<"="<<(num1/num2)<<endl;
	}
}

