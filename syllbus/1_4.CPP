#include<iostream.h>
#include<conio.h>

	class student
	{
		int sci,math,eng,c,cpp;
		int total;
		public:

		int roll;
		char name[20];

		void setMarks(int a,int b,int c1,int d,int e)
		{
			sci=a;
			math=b;
			eng=c1;
			c=d;
			cpp=e;
		}
		void display()
		{
			clrscr();
			cout<<"Stu.  Name: "<<name<<endl;
			cout<<"Stu.  Roll: "<<roll<<endl;
			cout<<"Science   : "<<sci<<endl;
			cout<<"Mathematic: "<<math<<endl;
			cout<<"English   : "<<eng<<endl;
			cout<<"C Language: "<<c<<endl;
			cout<<"CPP       : "<<cpp<<endl;
			cout<<"Result: "<<total<<"/"<<500;

		}
		void Total()
		{
				total=sci+math+eng+c+cpp;
		}

	};


	void main()
{
	student s1;
	clrscr();

	cout<<"Enter Student Name:";
	cin>>s1.name;
	cout<<"Enter Student Roll:";
	cin>>s1.roll;

	int a,b,c,d,e;
	cout<<"Enter Science Mark:";
	cin>>a;
	cout<<"Enter Mathematic Mark:";
	cin>>b;
	cout<<"Enter English Mark:";
	cin>>c;
	cout<<"Enter C Language Mark:";
	cin>>d;
	cout<<"Enter CPP Mark:";
	cin>>e;

	s1.setMarks(a,b,c,d,e);

	s1.Total();

	s1.display();


	getch();
}