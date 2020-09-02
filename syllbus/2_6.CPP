#include <iostream.h>
#include <conio.h>

	class emp
	{
		protected:
			int emp_id;
			char emp_name[20];
			float salary;

			void computePay(int hours)
			{
				salary = 125*hours;
			}
			void input()
			{
				cout<<"Enter Employee Id: ";
				cin>>emp_id;
				cout<<"Enter Employee Name: ";
				cin>>emp_name;
			}

			void output()
			{
				cout<<"Employee Id:"<<emp_id<<endl;
				cout<<"Employee Name:"<<emp_name<<endl;
				cout<<"Weekly Salary : "<<salary<<endl;
			}

	};
	class female:emp
	{
		int h;
		public:
			void salary()
			{
				input();
				computePay(40);
			}
			void show()
			{
				output();
			}
	};
	class male:emp
	{
		int h,d;
		public:
			void salary()
			{
				input();
				cout<<"Enter Day:";
				cin>>d;
				cout<<"Enter Hours:";
				cin>>h;

				h +=(d*24);
				computePay(h);
			}
			void show()
			{
				output();
			}

	};

	void main()
{
	female f;
	male m;
	clrscr();
	cout<<"Female Employee:"<<endl;
	f.salary();
	cout<<endl;
	f.show();
	cout<<endl<<"Male Employee"<<endl;
	m.salary();
	cout<<endl;
	m.show();
	getch();

}