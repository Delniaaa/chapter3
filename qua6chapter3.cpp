#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
const double G=32.17;
double findtime(double);
double findheight(double,double,double,double);
int main()
{
double distance,volecity,theta,time;
	
	cout<<"\n enter the distance :";
	cin>> distance;
	cout<<"\n enter the volecity:";
	cin>>volecity;
	cout<<"\n enter thr theta: ";
	cin>>theta;
	cout<<"\n the time:"<<findtime(theta);
	cout<<"\n the height:"<<findheight(distance,volecity,theta,time);
	getch();
	return 0;
}
double findtime(double)
{
double distance,volecity,theta;
	return  distance/volecity*cos(theta);
}
double findheight(double distance,double volecity,double theta,double time)
{	
time=distance/volecity*cos(theta);
return (volecity*sin(theta)*time)+(G*(time*time));
}