//2_5
//Pratik Sachaniya
#include <iostream.h>
#include <conio.h>

	class String
	{
		char *ptr;
		public:
			void setString(char *ptr)
			{
				this->ptr=ptr;
			}
			void show()
			{
				for(int i=0; ptr[i]!='\0'; i++)
				cout<<ptr[i];
			}

		String(){}
		String(char *ptr)
		{
			this->ptr=ptr;
		}
		String(String &p)
		{
			ptr=p.ptr;
		}

	};

	void main()
{
	clrscr();
	String s1;
	char str[] = "Pratik Sachaniya\n";
	char *ptr=&str[0];

	s1.setString(ptr);
	s1.show();
	getch();

	String s2(s1);
	s2.show();
	getch();

	String s3(ptr);
	s3.show();

	getch();
}