#include<iostream>
#include<conio.h>
#include<string>
using namespace std ;
int main()
{
	string output,input;
	string num1,num2,num3,num4;
	cout<<"enter 4 number"<<input;
	cin>>input;
	input.find(num1,'*');
	input.erase(num1,num1-1);
	input.insert(num1,output);
	input.at('*');
	
	input.find(num2,'*');
	input.erase(num2,num2-1);
	input.insert(num2,output);
	input.at('*');
	
	input.find(num3,'*');
	input.erase(num3,num3-1);
	input.insert(num3,output);
	input.at('*');
	
	input.find(num4,'*');
	input.erase(num4,num4-1);
	input.insert(num4,output);
	input.at('*');
	
	cout<<num4"*"<<num3"*"<<num2"*"<<num1;
	getch();
	return 0;
}