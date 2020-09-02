#include<iostream.h>
#include<conio.h>

	class demo
	{
	  int x,y;
	  public:

			void setX(int x)
			{
				this->x=x;
			}
			void setY(int y)
			{
				this->y=y;
			}
			void showSum(int x,int y)
			{
				cout<<"Sum of(local member) "<<x<<"+"<<y<<" : "<<x+y<<endl;
				cout<<"Sum of(class member) "<<this->x<<"+"<<this->y<<" : "<<this->x+this->y<<endl;
			}
	};

  void main()
{
	demo d1;
	clrscr();

	d1.setX(10);
	d1.setY(20);
	d1.showSum(50,50);
	getch();

}