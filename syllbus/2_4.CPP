//2_4
//Pratik Sachaniya
#include <iostream.h>
#include <conio.h>

	class calendar
	{
		int dd;
		int mm;
		int yy;
		public:

		void addDays(int d)
		{
			dd += d;
		}
		void show()
		{
			cout<<endl<<"Date:"<<dd<<"/"<<mm<<"/"<<yy;
		}

		calendar()
		{
			dd=mm=yy=0;
		}
		calendar(int d,int m,int y)
		{
			dd=d;
			mm=m;
			yy=y;
		}
	};

	void main()
{
	int d,m,y;
	clrscr();

	DAY:
	cout<<"Enter Day:";
	cin>>d;
	if(d>0 && d<32);
	else
	{
		cout<<"Invalid Format"<<endl;
		goto DAY;
	}

	MONTH:
	cout<<"Enter Month:";
	cin>>m;
	if(m>0 && m<13);
	else
	{
		cout<<"Invalid Format"<<endl;
		goto MONTH;
	}

	YEAR:
	cout<<"Enter Year:";
	cin>>y;
	if(y<0)
	{
		cout<<"Invalid Format"<<endl;
		goto YEAR;
	}

	calendar c1(d,m,y);

	cout<<"Enter Days to add:";
	cin>>d;
	c1.addDays(d);

	c1.show();

	getch();
}