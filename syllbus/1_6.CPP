#include<iostream.h>
#include<conio.h>

	class demo
	{
		public:

		void sayHello()
		{
			cout<<"This Function Defined In Class"<<endl;
		}

		void sayhello();

	};

	void demo::sayhello()
		{
			cout<<"This Function Defined CoutSide of Class";
		}

	void main()
{
	demo d1;
	clrscr();

	d1.sayHello();

	d1.sayhello();

	getch();

}