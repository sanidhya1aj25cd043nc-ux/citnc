#include<stdio.h>
#include<string.h>
#define MAX 5
int stack[MAX];
int top=-1;

void push();
void pop();
void display();

void push(int value)
{
	if (top==MAX-1)
	{
	    printf("stack overflow\n");
	    return;
    }
    top++;
    stack[top]=value;
}
int pop()
{
	int value;
	if(top==-1)
	{
		printf("stack underflow\n");
		return value;
	}
}

void display()
{
	int i;
	if (top==-1)
	{
		printf("stack is empty\n");
		return;
	}
}
printf("stack contents\n");
for(i=top;i>0;i--)
{
	print("%d",stack[i]);
}
