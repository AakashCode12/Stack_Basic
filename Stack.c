#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 5 // shows the size of the stack
int st[MAX], top=-1;
int push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);
int main()
{
  int val, choice;
  do
  {
    printf("\n******MAIN MENU******");
    printf("\n1:PUSH");
    printf("\n2:POP");
    printf("\n3:PEEK");
    printf("\n4:DISPLAY");
    printf("\n5:EXIT");
    printf("\nEnter your option : ");
    scanf("%d",choice);
    switch(choice)
    {
      case 1:
      {
        printf("\nEnter the number to be pushed on the stack: ");
        scanf("%d",val);
        push(st,val);
        break;
      }
      case 2:
      {
        val=pop(st);
        if (val!=-1)
        printf("\n The value deleted from stack is %d",val);
        break;
      }case 3:
      {
        val=peek(st);
        printf("The value stored at the top of the stack is %d",val);
        break;
      }case 4:
      {
        display(st);
        break;
      }
    }

  } while(choice!=5);
  return 0;
}
void push (int st[], int val)
{
  if (top==MAX-1)
  {
    printf("\nStack Overflow");
  }
  else
  {
    top++;
    st[top]=val;
  }
}
void pop(int st[])
{
  int val;
  if (top==-1)
  {
    printf("\nStack Underflow");
  }
  else
  {
    val=st[top];
    top--;
    return val;
  }
}
void display(int st[])
{
  int i;
  if(top==-1)
  {
    printf("\nThe Stack is Empty")
  }
  else
  {
    {for (i=0;i<top;i++)
     {
      printf("\n%d",st[i]);
     }
  }
  printf("\n")
}
int peek(int st[])
{
  if (top==-1)
  {
    printf("\nStack is empty");
  }
  else
  {
    return (st[top]);
  }
}
