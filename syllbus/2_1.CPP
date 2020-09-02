//1_1
//Pratik Sachaniya
#include <iostream.h>
#include <conio.h>

	class A
	{
		public:
		int x;

		A(int a)
		{
			x=a;
		}
	};
	class B
	{
		public:
		int x;

		B(int a)
		{
			x=a;
		}
	};

	void  main()
{
	  A a1 = 20;
	  B b1 = 30;
	  clrscr();

	  if(a1.x>b1.x)
	  cout<<"A Object Is Greter";
	  else
	  cout<<"B Object Is Greter";

	  getch();
}