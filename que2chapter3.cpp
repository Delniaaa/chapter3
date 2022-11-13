#include <iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
	double avg;
	cout<<"\n enter average:";
	cin>>avg;
	cout<<"\n your average integer:"<<floor(avg);
	cout<<"\n your average float:"<<avg-floor(avg);
	getch();
		return 0;
}
