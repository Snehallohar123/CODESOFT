#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int number=(rand()%100)+1;
	int guess=0;
	do
	{
		cout<<"enter guess(1-100):"<<endl;
		cin>>guess;
		if(guess>number)
		{
			cout<<"enter the lower number"<<endl;
		}
		else if(guess<number)
		{
			cout<<"enter the higher number"<<endl;
		}
		else
		{
			cout<<"!!won!!"<<endl;
		}
	}while(guess!=number);
}
