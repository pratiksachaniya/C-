/* Class In C++ */
using namespace std;
#include<iostream>

  class rect
  {
	public:

	int l;
	int w;
	int  area()
	{
		return l*w;
	}

  };

  int main()
{
	class rect r1;

	cout<<"Enter Length: ";
	cin>>r1.l;
	cout<<"Enter Width: ";
	cin>>r1.w;
	cout<<"Area Is :"<<r1.area();
}
