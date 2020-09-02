//2_3
//Pratik Sachaniya
#include <iostream.h>
#include <conio.h>

	class currency
	{
		int rupees;
		int paisa;
		public:

			friend currency AddCurrency(currency,currency);

			void show()
			{
				cout<<"Rs "<<rupees<<"."<<paisa;
			}

			currency(){}

			currency(int r,int p)
			{
				rupees = r + p/12;
				paisa = p%12;
			}
	};
	currency AddCurrency(currency c1,currency c2)
	{
			currency c(0,0);
			c.rupees = c1.rupees + c2.rupees ;
			c.rupees += (c1.paisa + c1.paisa)/12;
			c.paisa = (c1.paisa + c2.paisa)%12;

			return c;
	}

  void main()
{
	int c1r,c1p,c2r,c2p;
	clrscr();

	cout<<"Enter Rupees:";
	cin>>c1r;
	cout<<"Enter Paisa:";
	cin>>c1p;
	cout<<"Enter Rupees:";
	cin>>c2r;
	cout<<"Enter Paisa:";
	cin>>c2p;

	currency c1(c1r,c1p),c2(c2r,c2p),c3;

	c3 = AddCurrency(c1,c2);

	c3.show();

	getch();
}
