/*Single linked list.
It is one of the linear data structure.
itis simple,reliable and Sequential-access data Structure.
Once we go for Forward,could not be back for Previous Record.
It is Very Neccessary to Implement a Pointer that point to first position of the list.*/
#include<iostream.h>
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<conio.h>
struct List
{
   int data;
   struct List*next;
}*start;
struct List*createNode();
int display();
int choice();
void append();//inserting node at last position
void createList();
void insertNode();
void deleteNode();
void updateNode();
void main()
{
   int ch;
   start=NULL;
   while(1)
   {
     cout<<"\n1.Create List \n2.Display \n3.Append \n4.Insert Node \n5.Delete Node \n6.Update Node \nYour Choice[else for exit]:";
     cin>>"%d",&ch;
     switch(ch)
     {
       case 1: createList(); break;
       case 2: display(); break;
       case 3: append(); break;
       case 4: insertNode(); break;
       case 5: deleteNode(); break;
       case 6: updateNode(); break;
       default:
		cout<<"\n Exit to Program...";
		exit(0);
     }
   }
}
struct List*createNode()
{
  struct List*tmp;
  tmp=(struct List*)malloc(sizeof(struct List));
  cout<<"\n Enter Value for Node :";
  cin>>"%d",&tmp->data;
  tmp->next=NULL;
  return tmp;
}
void createList()
{
   struct List*temp;
   if(start==NULL)
   {
      start=createNode();
      temp=start;
      while(choice())
      {
	temp->next=createNode();
	temp=temp->next;
      }
   }
   else cout<<"\n List Already Created...";
}
int choice()
{
   char ch;
   cout<<"\n To Continue...Press Y/y";
   ch=getche();
   if(ch=='y' || ch=='Y') return 1;
   else return 0;
}
int display()
{
   int count=0;
   struct List*tmp=start;
   if(tmp)
   while(tmp)
   {
      count++;
      cout<<"\nNode %d value: %d",count,tmp->data;
      tmp=tmp->next;
   }
   else cout<<"\n List are Empty...";
   return count;
}
void append()
{
   struct List*temp=start;
   if(temp)
   {
     while(temp->next)temp=temp->next;
     temp->next=createNode();
   }
   else start=createNode();
}
void insertNode()
{
   int tnode,pos,i;
   struct List*temp,*tmp;
   //tnode=display(start);
   if(tnode)
   {
     temp=start;
     cout<<"\n Enter Node no Before Inserting New Node";
     cin>>"%d",&pos;
     if(pos<1||pos>tnode)
     {
       cout<<"\n Invalide Node Number...";
       return;
     }
     if(pos==1)
     {
       tmp=createNode();
       tmp->next=start;
       start=tmp;
     }
     else
     {
	for(i=2;i<pos;i++)
	  temp=temp->next;
	tmp=createNode();
	tmp->next=temp->next;
	temp->next=tmp;
     }
   }
}
void deleteNode()
{
   int tnode,pos,i;
   struct List*temp,*tmp;
   //tnode=display(start);
   if(tnode)
   {
      temp=start;
      cout<<"\n Enter Node no U want to delete";
      cin>>"%d",&pos;
      if(pos<1||pos>tnode)
      {
	 cout<<"\n Invalide node number...";
	 return;
      }
      if(pos==1)
      {
	start=start->next;
	free(temp);
      }
      else
      {
	 for(i=2;i<pos;i++)
	   temp=temp->next;
	 tmp=temp->next;
	 temp->next=tmp->next;
	 free(tmp);
      }
   }
}
void updateNode()
{
   int tnode,pos,i;
   struct List*temp;
   //tnode=display(start);
   if(tnode)
   {
      temp=start;
      cout<<"\n Enter Node No U Want to Update";
      cin>>"%d",&pos;
      if(pos<1||pos>tnode)
      {
	 cout<<"\n Invalide Node Number...";
	 return;
      }
      for(i=1;i<pos;i++)
	temp=temp->next;
      cout<<"\n Value of Node is %d",temp->data;
      cout<<"\n Enter New Value :";
      cin>>"%d",&temp->data;
   }
}
void revdisplay(struct List*t)
{
   if(t->next)revdisplay(t->next);
   cout<<"\n Node Value: %d",t->data;
}








