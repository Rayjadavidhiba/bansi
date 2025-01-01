//Ascending priority queue...
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#define size 10
int queue[size][2],front,rear;
void insert();
void remov();
void display();
void sort();
void main()
{
  int ch;
  front=rear=0;
  while(1)
  {
    cout<<"\n1.Insert \n2.Remov \n3.Display \n Enter your choice[0 for exit]:";
    cin>>" %d",&ch;
    switch(ch)
    {
      case 1: insert(); break;
      case 2: remov(); break;
      case 3: display(); break;
      default: cout<<"\n Exiting Program...";
      exit(0);
    }
  }
}
void insert()
{
  while(1)
  if(rear>size-1)
  {
     cout<<"Queue is Overflow...";
     return;
  }
  else
  {
     cout<<"\n Enter Value :";
     cin>>" %d",&queue[rear][0];
     cout<<"Enter Key/Priority:";
     cin>>"%d",&queue[rear][1];
     rear++;
     cout<<" Continue inserting...[Y/n]";
     if(toupper(getch())!='Y')break;
  }
}
void remov()
{
  while(1)
  if(front==rear)
  {
    cout<<"\n Queue is Empty...";
    cout<<"\n Queue is Reset...";
    front=rear=0;
    return;
  }
  else
  {
    cout<<"\n Value is : %d and Key is %d is removing...",queue[front][0],queue[front][1];
    front++;
    cout<<" Continue removing...[Y/n]";
     if(toupper(getch())!='Y')break;
  }
}
void display()
{
  int i;
  if(front==rear)
     cout<<"\n Queue is Empty...";
  else
     for(i=front;i<rear;i++)
     cout<<"\n Value is : %d and Key is %d",queue[i][0],queue[i][1];
}
void sort()
{
    int out,in,minkey,minval;
    for(out=front+1;out<rear;out++)
    {
       minkey=queue[out][1];
       minval=queue[out][0];
       in=out;
	 while(queue[in-1][1]>minkey && in>=1)
	 {
	    queue[in][1]=queue[in-1][1];
	    queue[in][0]=queue[in-1][0];
	    in--;
	 }
	 queue[in][1]=minkey;
	 queue[in][0]=minval;
    }
}
