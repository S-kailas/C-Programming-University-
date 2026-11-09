#include <stdio.h>
#define MAX 5

int DEqueue[MAX];
int rear=-1,front=-1;

int isFull()
{
  if ((rear+1)%MAX==front)
    return 1;
  return 0;
}
int isEmpty()
{
  if (rear==-1 && front==-1)
    return 1;
  return 0;
}

void insertrear(int val)
{
  if (isFull())
  {
    printf("DE-Queue overflow\n");
    return;
  }
  else if (isEmpty())
  {
    rear=front=0;
    DEqueue[rear]=val;
    return;
  }
  else
  {
    rear=(rear+1)%MAX;
    DEqueue[rear]=val;
  }
}

void insertfront(int val)
{
  if (isFull())
  {
    printf("DE-Queue overflow\n");
    return;
  }
  else if (isEmpty())
  {
    rear=front=0;
    DEqueue[front]=val;
    return;
  }
  else
  {
    front=(front-1+MAX)%MAX;
    DEqueue[front]=val;
  }

}

void delfront()
{
  if (isEmpty())
  {
    printf("stack underflow\n");
    return;
  }
  else if (rear==front)
  {
    rear=front=-1;
    return;
  }
  else
  {
    front=(front+1)%MAX;
  }
}

void delrear()
{
  if (isEmpty())
  {
    printf("stack underflow");
    return;
  }

  else if(rear==front)
  {
    rear=front=-1;
    return;
  }
  else
  {
    rear=(rear-1+MAX)%MAX;
  }
}

void display()
{
  if (isEmpty())
  {
    printf("DEqueue underflow\n");
    return;
  }

  int i=front;
  while (1)
  {
    printf("%d ",DEqueue[i]);
    if (i==rear)
      break;
      i=(i+1)%MAX;
  }
  printf("\n");
}

int main()
{
  insertfront(10);
  insertfront(100);
  display();
  insertrear(90);
  insertrear(900);
  display();

  delrear();
  display();
}
