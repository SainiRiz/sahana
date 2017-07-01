#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class node
{
public:
class node *next;
int data;
};
class queue:public node
{
node *head;
int front,rear;
public:
queue()
{
front=-1;
rear=-1;
}
void enqueue(int x)
{
if(rear<0)
{
head=new node;
head->next=NULL;
head->data=x;
rear++;
}
else
{
node *temp,*temp1;
temp=head;
if(rear>=4)
{
cout<<"Queue overflow";
return;
}
rear++;
while(temp->next!=NULL)
temp=temp->next;
temp1=new node;
temp->next=temp1;
temp1->next=NULL;
temp1->data=x;
}
}
void display()
{
node *temp;
temp=head;
if(rear<0)
{
cout<<"Queue underflow";
return;
}
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}
};
main()
{
queue s1;
int ch;
clrscr();
cout<<"\n\nQUEUE USING LINKED LIST";
cout<<"\n1.enqueue\n2.display\n3.exit";
while(1)
{
cout<<"\nenter your choice";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\nenter a element";
cin>>ch;
s1.enqueue(ch);
break;
case 2:
s1.display();
break;
case 3:exit(0);
}
}
return 0;
}
