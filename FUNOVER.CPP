/*
====Function Overloading====
->Polymorphim
->Same Procedure
->Different argument's
  ->Number of argument
  ->Data Type ofargument
*/
#include<iostream.h>
#include<conio.h>

	int add(int,int);
	int add(int,int,int);
	float add(float,float);

	void main()
{
	clrscr();
	float n1=10.4,n2=20.5;
	cout<<"Addtion of 10+20 : "<<add(10,20)<<endl;
	cout<<"Addtion of 10+20+30 : "<<add(10,20,30)<<endl;
	cout<<"Addtion of 10.4 + 20.5: "<<add(n1,n2);
	getch();
}

	int add(int a,int b)
	{
		return a+b;
	}

	int add(int a,int b,int c)
	{
		return a+b+c;
	}
	float add(float a,float b)
	{
		return a+b;
	}