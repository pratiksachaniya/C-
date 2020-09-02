#include<iostream.h>
#include<conio.h>

	double power(double,int=2);

	void main()
{
	int n;
	double m;
	clrscr();

	cout<<"Enter M:";
	cin>>m;
	cout<<"Enter N:";
	cin>>n;

	if(n<2)
	cout<<"Power is "<<power(m)<<".";
	else
	cout<<"Power Is "<<power(m,n)<<".";

	getch();
}
  double power(double m,int n)
{
	double pow=1;
	int i;

	for(i=0; i<n; i++)
	pow*=m;

	return pow;
}