//2_8
//Pratik Sachaniya
#include <iostream.h>
#include <conio.h>

	class pub
	{
		protected:
			char title[10];
			void setData()
			{
				cout<<"Enter Titile:";
				cin>>title;
			}
			void show()
			{
				cout<<endl<<"Book Details:"<<endl;
				cout<<"Book Titile:"<<title<<endl;
			}
	};

	class book: protected pub
	{
		int pgno;
		public:

		void setData()
		{
			pub::setData();
			cout<<"Enter Page No.:";
			cin>>pgno;
		}
		void show()
		{
			pub::show();
			cout<<"Page Number:"<<pgno<<endl;
		}
	};

	class tape:pub
	{
		float pt;
		public:

			void setData()
			{
				cout<<"Enter Plyaing time:";
				cin>>pt;
			}
			void show()
			{
				cout<<"Playing Time:"<<pt<<endl;
			}
	};

		void main()
{
	clrscr();

	book b;
	tape t;
	b.setData();
	t.setData();
	b.show();
	t.show();

	getch();
}