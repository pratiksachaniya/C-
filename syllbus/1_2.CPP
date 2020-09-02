#include<iostream.h>
#include<conio.h>

  int add(int,int,int=0,int=0);

  void main()
{
	int n1=10;
	int n2=20;
	int n3=30;
	int n4=40;
	clrscr();

	cout<<"Sum Of "<<n1<<","<<n2<<" is: "<<add(n1,n2)<<endl;
	cout<<"Sum Of "<<n1<<","<<n2<<","<<n3<<" is: "<<add(n1,n2,n3)<<endl;
	cout<<"Sum Of "<<n1<<","<<n2<<","<<n3<<","<<n4<<" is: "<<add(n1,n2,n3,n4)<<endl;
	getch();

}
  int add(int a,int b,int c,int d)
{
	return (a+b+c+d);
}