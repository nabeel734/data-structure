#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();

struct node
{
int data;
struct node *next;
};
struct node *top=NULL;
struct node *new;
struct node *temp=NULL;
void main()
{
int opt;
struct node *new;
do
{
printf("\n choose your option \n1.push \n2.pop \n3.display \n4.exit ");
scanf("%d",&opt);
switch(opt)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:exit(0);
break;
}
}
while(opt!=4);
}
void push()
{
new=(struct node *) malloc(sizeof(struct node));
if(new==NULL)
{
printf("\n Error : stack overflow \n");
}
else{
printf("enter the data to be push :");
scanf("%d",&new->data);
new->next=top;
top=new;
temp=top;
}
}
void pop()
{
struct node *ptr;
if (top == NULL)
{
printf("\n Error : stack underflow \n");
}
else
{
printf("\n item to be poped : %d \n", top->data);
ptr=top;
top = top->next;
free(ptr);
}
}
void display()
{
struct node *ptr;
ptr=top;
if(ptr == NULL)
{
printf("\n Error : stack is empty \n");
}
else
{
while(ptr != NULL)
{
printf("%d \n",ptr->data);
ptr = ptr->next;
}
}
}
