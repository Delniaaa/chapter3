#include<iostream>
#include<conio.h>
using namespace std;
void totalcosts();
int main()
{
	cout<<"\n initial house cost:175,200,210";
	cout<<"\n annual fuel:2500,2800,2050";
	cout<<"\n tax rate:0.025,0.025,0.020";
	cout<<"\n totalcosts=initial house cost+(annual fuel*5)+(tax rate*initial house*5)";
	totalcosts();
	getch();
	return 0;
}
void totalcosts()
{
	double house1,house2,house3;
	house1=175+(2500*5)+(0.025*175*5);
	house2=200+(2800*5)+(0.025*200*5);
	house3=210+(2050*5)+(0,020*210*5);
	cout<<"\n the cost of house1:"<<house1<<"$";
	cout<<"\n the cost of house2:"<<house2<<"$";
	cout<<"\n the cost of house3:"<<house3<<"$";
}
