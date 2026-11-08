#include <stdio.h>
#define MAX 5

int stack[MAX];
int top=-1;

int isFull()
{
  if (top==MAX-1)
  {
   return 1;
  }
  else
  {
    return 0;
  }
}

int isEmpty()
{
  if (top==-1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void push(int val)
{
  if (isFull())
  {
    printf("Stack overflow\n");
  }
  else
  {
    top++;
    stack[top]=val;
  }
}
void pop()
{
  if (isEmpty())
  {
    printf("stack underflow\n");
  }
  else 
  {
    top--;
  }
}


void peek()
{
  if (isEmpty())
  {
    printf("stack is empty push chey\n");
  }
  else
  {
    printf("%d \n",stack[top]);
  }
}

int main()
{
  push(45);
  peek();

  pop();
  peek();

}
