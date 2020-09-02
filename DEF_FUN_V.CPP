/*
	Default Argument of Function
*/
#include<iostream.h>
#include<conio.h>

  int add(int,int,int=0,int=0);
  void main()
{
	clrscr();
	cout<<"Addtion of 10+20= "<<add(10,20)<<endl;
	cout<<"Addtion of 10+20+30= "<<add(10,20,30)<<endl;
	cout<<"Addtion of 10+20+30+40= "<<add(10,20,30,40)<<endl;
	getch();

}
  int add(int a,int b,int c,int d)
{
	return a+b+c+d;
}
