#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

	class demo1;
	class demo
	{
		int x;
		public:

		void setX(int a)
		{
			x=a;
		}
		int getX()
		{
			return x;
		}
		friend void swap(demo &,demo1 &);
	};
	class demo1
	{
		int y;
		public:

		void setY(int a)
		{
			y=a;
		}
		int getY()
		{
			return y;
		}
		friend void swap(demo &,demo1 &);
	};

	void swap(demo &da,demo1 &db)
{
	int tmp;

	tmp=da.x;
	da.x=db.y;
	db.y=tmp;

}
	demo d1;
	demo1 d2;
	void main()
{

	int c,d;
	clrscr();
	cout<<"1.Set X"<<endl;
	cout<<"2.Set Y"<<endl;
	cout<<"3.Get X"<<endl;
	cout<<"4.Get Y"<<endl;
	cout<<"5.Swap"<<endl;
	cout<<"0.Exit"<<endl;
	cout<<"Enter Your Choice:"<<endl;
	int ch;
	cin>>ch;

	switch(ch)
	{
		case 1:
				 cout<<"Enter X:";
				 cin>>c;
				 d1.setX(c);
				 break;
		case 2:
				 cout<<"Enter Y:";
				 cin>>d;
				 d2.setY(d);
				 break;
		case 3:
				 cout<<"X:"<<d1.getX();
				 getch();
				 break;
		case 4:
				 cout<<"Y:"<<d2.getY();
				 getch();
				 break;
		case 5:
				 swap(d1,d2);
				 break;
		case 0:
				 exit(1);
		default:
				  cout<<"Invalid Input";
	}
	main();
}
