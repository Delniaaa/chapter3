#include <iostream>
#include<conio.h>
using namespace std;

 void circle();
 void triangle();
 void rectangle();
int main()
{
	 circle();
	  triangle();
	  rectangle();
	cout<<"\n\n"<<endl;
	  circle();
	  triangle();
	 rectangle();
		getch();
		return 0;
}
	void circle()
	{
	cout<<"**"<<endl;
	cout<<"*   *"<<endl;
	cout<<"*    *"<<endl;
	cout<<"**"<<endl;
	
}


	void triangle()
	{
	cout<<" *"<<endl;
	cout<<"*\n*"<<endl;
	cout<<"*\n\n\n*"<<endl;
	cout<<"*\n\n\n\n*"<<endl;
	cout<<"**********"<<endl;

}


	void rectangle()
	{
	cout<<"____________"<<endl;
	cout<<"|           |"<<endl;
	cout<<"|           |"<<endl;
	cout<<"|           |"<<endl;
	cout<<"|           |"<<endl;
	cout<<"____________"<<endl;
	
}