#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
struct stack
{
int data;
struct stack *next;
};
struct stack *head,*new1,*temp,*top,*p;
int ch,i,x,d,flag=0;
clrscr();
top=(struct stack*)malloc(sizeof(struct stack));
top->next=NULL;
cout<<"\n1.creation\n2.push\n3.pop\n4.traversal\n5.exit\n";
do
{
cout<<"\nEnter the choice";
cin>>ch;
switch(ch)
{
case 1:
if(flag==0)
{
head=(struct stack*)malloc(sizeof(struct stack));
cout<<"\nEnter the element";
cin>>head->data;
head->next=top->next;
top->next=head;
temp=head;
flag=1;
}
else
{
p=(struct stack*)malloc(sizeof(struct stack));
cout<<"\nenter the element";
cin>>p->data;
p->next=top->next;
top->next=p;
temp=p;
}
break;
case 2:
temp=top;
new1=(struct stack*)malloc(sizeof(struct stack));
cout<<"\nEnter the data";
cin>>new1->data;
new1->next=temp->next;
temp->next=new1;
break;
case 3:
if(top->next==NULL)
cout<<"Stack underflow";
else
{
temp=top;
top=temp->next;
cout<<"\nElement"<<top->data<<"is popped";
free(temp);
}
break;
case 4:
if(top->next==NULL)
cout<<"\nStack underflow";
else
{
temp=top;
cout<<"\nStack elements are \n";
while(temp->next!=NULL)
{
temp=temp->next;
cout<<temp->data<<"\t";
}
}
break;
}
}while(ch<5);
getch();
}
