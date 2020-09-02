#include<iostream.h>
#include<conio.h>

   void swap(int&,int&);

   void main()
{
	int a,b;
	clrscr();

	cout<<"Enter Value 1:";
	cin>>a;
	cout<<"Enter Value 2:";
	cin>>b;

	cout<<endl<<"Before Change:"<<a<<","<<b<<endl<<endl;

	swap(a,b);

	cout<<"After Swaped:"<<a<<","<<b;
	getch();
}
	void swap(int &c,int &d)
{
	int tmp;

	tmp=c;
	c=d;
	d=tmp;
}

