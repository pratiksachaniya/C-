/* Inline Function */
#include<iostream.h>
#include<conio.h>

  inline void say_hello();

  void main()
{
	clrscr();

	say_hello();
	say_hello();

	getch();
}

  void say_hello()
{
	cout<<endl<<"Hello..";
}