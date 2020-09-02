/* Struct In C++ */
#include<iostream.h>
#include<conio.h>

  struct student
  {
	int roll;
	char name[20];
	int m1,m2,m3;
	float result()
	{
		return (m1+m2+m3)/3;
	}
  };

  void main()
{
	clrscr();
	struct student s1;
	cout<<"Enter Student Roll Number:";
	cin>>s1.roll;
	cout<<"Enter Student Name:";
	cin>>s1.name;
	cout<<"Enter Marks of C++ Lang.:";
	cin>>s1.m1;
	cout<<"Enter Marks of DS: ";
	cin>>s1.m2;
	cout<<"Enter Marks of HTML: ";
	cin>>s1.m3;
	clrscr();

	cout<<"Student Roll No.: "<<s1.roll<<endl;
	cout<<"Student Name: "<<s1.name<<endl;
	cout<<"Student result: "<<s1.result()<<"%";
	getch();
}