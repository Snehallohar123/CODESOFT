#include<iostream>
#include<iomanip>
using namespace std;
struct movie
{
string name;
int adult_ticket_price,child_ticket_price;
int gross_am;
float g_am_donate;
int am_donate;
int net_sell;
int total_no_ticket;
};
void movie(void);
int main()
{
struct movie m;
int ch;
//cout<<"1.name of movie";
while(1)
{
cout<<"enter the choice"<<endl;
cin>>ch;
	switch(ch)
		{
			case 1:
				{
					movie();
					break;
				}
		}
}
}
void movie(void)
	{
		struct movie n;
		int num1,num2;
		cout<<"enter the movie name";
		cin>>n.name;
		//cout<<n.name<<endl;
		cout<<"enter the no.of adult_ticket_price and total_ticket";
		cin>>n.adult_ticket_price>>num1;
		//cout<<n.ticket_sold<<endl;
		cout<<"enter the no.of child_ticket_price and total_ticket";
		cin>>n.child_ticket_price>>num2;
		n.gross_am=((n.adult_ticket_price*num1)+(n.child_ticket_price*num2));
		cout<<"enter the gross amount donated in persentage"<<endl;
		cin>>n.g_am_donate;
		n.total_no_ticket=(n.adult_ticket_price*num1)+(n.child_ticket_price*num2);
		cout<<setfill('.')<<left<<setw(30)<<"movie_name:"<<n.name<<endl;
		//cout<<left<<setw(30)<<"gross_amount"<<fixed<<setprecision(2)<<setw(10)<<n.gross_am<<endl;
		cout<<setfill('.')<<left<<setw(30)<<"Number of Ticket Sold:"<<n.total_no_ticket<<right<<endl;
		cout<<setfill('.')<<left<<setw(30)<<"Gross Amount:"<<fixed<<setprecision(2)<<"$"<<n.gross_am<<right<<endl;
		cout<<setfill('.')<<left<<setw(30)<<"gross_amount_donated:"<<fixed<<setprecision(2)<<n.g_am_donate<<right<<"%"<<endl;
		n.am_donate=n.gross_am*(n.g_am_donate/100);
		cout<<setfill('.')<<left<<setw(30)<<"amount_donated:"<<fixed<<setprecision(2)<<n.am_donate<<endl;
		 n.net_sell=n.gross_am-n.am_donate;
		 cout<<setfill('.')<<left<<setw(30)<<"NEt_sale:"<<fixed<<setprecision(2)<<n.net_sell<<endl;	 
	}