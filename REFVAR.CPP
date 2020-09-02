#include<iostream.h>
#include<conio.h>
  void main()
{
	int no;
	clrscr();
	cout<<"Enter Number:";
	cin>>no;

	int &ref=no;

	cout<<"Orignal Variable:"<<no<<endl;
	cout<<"Refrence Variable: "<<ref<<endl;
	ref=ref+5;
	cout<<"Refrence Varible after Add 5 : "<<ref;
	getch();

}