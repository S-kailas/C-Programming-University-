#include <stdio.h>
#define MAX 5

int queue[MAX];
int front=-1,rear=-1;

int isFull()
{
  if (rear == MAX -1)
    return 1;
  return 0;
}

int isEmpty()
{
  if (front==-1)
    return 1;
  return 0;
}

void enqueue(int val)
{
  if (isFull())
  {
    printf("Queue overflow\n");
    return;
  }
  if (front==-1) //first case
  {
    front=0;
  }
    rear++;
    queue[rear]=val;
}

void dequeue()
{
  if (isEmpty())
  {
    printf("queue is underdlow\n ");
    return;
  }
  front++;

  if (rear<front) //if the last element of the que is removed
    front=rear=-1;
}
  
void display()
{
  for (int i=front;i<=rear;i++)
  {
    printf("%d ",queue[i]);
  }
}

int main()
{

  enqueue(3);
  enqueue(4);
  enqueue(23);
  enqueue(12);
  enqueue(12121);

  display();
  printf("\n");

  dequeue();
  display();
  printf("\n");

  dequeue();
  display();
  printf("\n");
  dequeue();
dequeue();
dequeue();
dequeue();
dequeue();
dequeue();
dequeue();
dequeue();

  enqueue(122);
  enqueue(21121);
  display();
}
