#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

  float area(int,float);
  float area(float,float);
  float area(float);

  void main()
{
	float h,w,l;
	float pi=3.14;
	int ch,r;
	clrscr();

	cout<<"1.Area Of Circle"<<endl;
	cout<<"2.Area Of Rectangle"<<endl;
	cout<<"3.Area Of Squre"<<endl;
	cout<<"0.Exit"<<endl;
	cout<<"Enter Your Choice";
	cin>>ch;

	switch(ch)
	{
		case 1:
			  cout<<"Enter Radius:";
			  cin>>r;
			  cout<<"Area Is: "<<area(r,pi);
			  break;
		case 2:
			  cout<<"Enter Width:";
			  cin>>w;
			  cout<<"Enter Height:";
			  cin>>h;
			  cout<<"Area Is: "<<area(w,h);
			  break;
		case 3:
			  cout<<"Enter Length Of Side:";
			  cin>>l;
			  cout<<"Area Is:"<<area(l);
			  break;
		case 0:
			  exit(1);
		default:
			  cout<<"Invalid Input";
	}
	getch();
	main();
}
	float area(int r,float pie)
{
	return ((r*r)*pie);
}
	float area(float h,float w)
{
	return (h*w);
}
	float area(float l)
{
	return (l*l);
}