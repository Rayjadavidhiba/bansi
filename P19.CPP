//Double ended Queue implementation using array...
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define size 10
int queue[size],front=0,rear=0;
void push();
void pop();
void peep();
int display();
void main()
{
	int ch;
	while(1)
	{
		cout<<"\n 1.Push\n 2.Pop\n 3.Peep\n 4.Display\n Enter your choice :";
		cin>>"%d",&ch;
		switch(ch)
		{
			case 1: push(); break;
			case 2: pop(); break;
			case 3: peep(); break;
			case 4: display(); break;
			default: cout<<"\n Exiting program...";
			exit(0);
		}
	}
}
void push()
{
	int ch;
	if(front==0 && rear>size-1)
		cout<<"\n Queue is Overflow...";
	else
	{
	     if(front>0 && rear<size-1)
	     {
	       cout<<"\n Both ends are open...\n 1.front Push\n 2.Rear Push\n Your Choice :";
		cin>>"%d",&ch;
		switch(ch)
		{
		case 1: cout<<"\n Enter Value :";
			front--;
			cin>>"%d",&queue[front];
		break;
		case 2: cout<<"\n Enter Value :";
			cin>>"%d",&queue[rear];
			rear++;
		break;
		default: cout<<"\n Invalid choice...exit...";
		break;
		}
	      }
	else if(rear<size-1)
	{
	  cout<<"\n Enter Value :";
	  cin>>"%d",&queue[rear];
	  rear++;
	}
	else
	{
	   front--;
	   cout<<"\n Enter Value :";
	   cin>>"%d",&queue[front];
	}
     }
}
void pop()
{
	int ch;
	if(front==rear)
		cout<<"\n Queue is Overflow...";
	else
	{
	       cout<<"\n Both ends are open...\n 1.front Push\n 2.Rear Push\n Your Choice :";
		cin>>"%d",&ch;
		switch(ch)
		{
		case 1: cout<<"\n Popped Value is %d",queue[front];
			front++;
		break;
		case 2: rear--;
			cout<<"\n Popped Value is %d",queue[rear];
			break;
		default: cout<<"\n Invalid choice...exit...";
		break;
		}
	}

}
int display()
{
	int i,count=0,ch;
	i=front;
	if(front==rear)
		cout<<"\n Queue is empty...";
	else
	do
	{
		count++;
		cout<<"\n Queue Value at %d Position is %d",count,queue[i];
		i++;
		i=(i+1)%size;
	}while(i!=rear);
	return count;

}
void peep()
{
	int totele=display(),position;
	if(totele)
	{
	   cout<<"\n \Enter Position at the value U want to modify";
	   cin>>"%d",&position;
	   if(position<1 || position>totele)
		cout<<"\n Enter wrong position of elements...";
	   else
	   {
		cout<<"\n you want to modify %d value",queue[(front+position-1)];
		cout<<"\n Enter New Value :";
		cin>>" %d",&queue[(front+position-1)];
	   }
       }
   }
