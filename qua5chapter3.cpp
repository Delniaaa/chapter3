#include<iostream>
#include<conio.h>
using namespace std;
int findvolume(int length,int width,int height);
int findsurfacearea(int length,int width,int height);

int main()
{
	int length,width,height;
    cout<<"\n enter the width :";
    cin>>width;
    cout<<"\n enter the height :";
    cin>>height;
    cout<<"\n the volume is :"<<findvolume(length,width,height);
    cout<<"\n the surfacearea is :"<<findsurfacearea(length,width,height);
    getch();
    return 0;
}

int findvolume(int length,int width,int height)
{
    return length*height*width;
}
int findsurfacearea(int length,int width,int height)
{
    return (length*width*2)+(length*height*2)+(width*height*2);
}