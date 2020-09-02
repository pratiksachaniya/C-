//2_2
//Pratik Sachaniya
#include <iostream.h>
#include <conio.h>

	class B;
	class C;
	class A
	{
		int x;
		public:

		friend void avg(A,B,C);

			A(int a)
			{
				x=a;
			}
	};

	class B
	{
		int x;
		public:

		friend void avg(A,B,C);

			B(int a)
			{
				x=a;
			}
	};

	class C
	{
		int x;
		public:

		friend void avg(A,B,C);

			C(int a)
			{
				x=a;
			}
	};

	void avg(A a,B b,C c)
	{
		int avg;

		avg = (a.x + b.x + c.x)/3;

		cout<<"Avrage Is "<<avg;
	}

	void main()
{
		A a = 10;
		B b = 20;
		C c = 30;

		avg(a,b,c);

		getch();
}