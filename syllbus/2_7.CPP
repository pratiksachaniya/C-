//2_7
//Pratik Sachaniya
#include <iostream.h>
#include <conio.h>

	class scheme
	{
		protected:
			int scheme_id;
			char scheme_name[20];
			float massage_charge,outgoing_rate;

			void getData()
			{
				cout<<"Enter Scheme Id:";
				cin>>scheme_id;
				cout<<"Enter Scheme Name:";
				cin>>scheme_name;
				cout<<"Enter Massage Chare Per Massage:";
				cin>>massage_charge;
				cout<<"Enter Outgoing Charge Per Minute's:";
				cin>>outgoing_rate;
			}


	};

	class customer:protected scheme
	{
		int cust_id;
		char name[20];
		double mobile_no;
		float callmin,msg;
		float cc,mc;
		float total;

		public:
			void setData()
			{
				cout<<"Enter Customer Id:";
				cin>>cust_id;
				cout<<"Enter Customer Name:";
				cin>>name;
				cout<<"Enter Mobile Number:";
				cin>>mobile_no;

				getData();

				cout<<endl<<"Enter Usage Details:"<<endl;
				cout<<"Enter Call Time in Minute:";
				cin>>callmin;
				cout<<"Enter Total Massages:";
				cin>>msg;
			}
			protected:
			void genrateBill()
			{
				cc=callmin*outgoing_rate;
				mc=msg*massage_charge;
				total = mc + cc;
			}
			public:
			void show()
			{
				genrateBill();
				cout<<endl<<"Customer Bill:"<<endl;
				cout<<"Cutomer Id:"<<cust_id<<endl;
				cout<<"Customer Name:"<<name<<endl;
				cout<<"Total Minute:"<<callmin<<endl;
				cout<<"Total Massage's:"<<msg<<endl;
				cout<<"Massaging Charge:"<<mc<<endl;
				cout<<"Outgoing Charge:"<<cc<<endl;
				cout<<"Total Amount:"<<total<<endl;
			}
	};

	void main()
{
	clrscr();
	customer c1;
	c1.setData();
	c1.show();
	getch();
}
