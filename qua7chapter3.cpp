#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
const double PI=3.14159265;
const double e=2.0000000000;
int main()
{
	 int n,nf,y1;
	 cout<<"\n enter the number:";
	 cin>>n;
	 y1=2*n+1.0/3.0;
	 pow(n,y1);
	 pow(e,-y1);
	nf=y1*(sqrt(y1))*PI;
	 cout<<"\n["<<n<<"]!equals approximetaly :"<<nf;
	 getch();
	 return 0;
}
