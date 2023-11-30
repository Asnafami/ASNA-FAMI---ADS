#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};
struct Node *top=NULL;
void push(int value)
{
struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=value;
newNode->next=top;
top=newNode;
}
void pop()
{
if(top==NULL)
{
printf("stack is underflow\n");
return;
}
struct Node *temp=top;
top=top->next;
free(temp);
}
void display()
{
if(top==NULL)
{
printf("stack is empty\n");
return;
}
struct Node *temp=top;
printf("stack elements:");
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("\n");
}
int main()
{
int choice,value;
while(1)
{
printf("stack menu:\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.display\n");
printf("4.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the value to push:");
scanf("%d",&value);
push(value);
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
printf("exit\n");
exit(0);
default:
printf("invalid choice\n");
}
}
return 0;
}

