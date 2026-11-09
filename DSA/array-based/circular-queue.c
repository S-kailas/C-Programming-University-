#include <stdio.h>
#define MAX 5

int cqueue[MAX];
int rear=-1,front=-1;

int isFull()
{
  if ((rear+1)%MAX==front) //for looping inside the queue
    return 1;
  return 0;
}

int isEmpty()
{
  if (front==-1 && rear==-1)
    return 1;
  return 0;
}

void enqueue(int val)
{
  if (isFull())
  {
    printf("Queue is overflow\n");
    return;
  }
  else if (isEmpty())
  {
    rear=front=0;
    cqueue[rear]=val;
    return;    
  }
  else
  {
    rear=((rear+1)%MAX);
    cqueue[rear]=val;
  }
}

void dequeue()
{
  if (isEmpty())
  {
    printf("queue underflow\n");
    return;
  }

  else if (front==rear)
  {
    front=rear=-1;
  }
  else
  {
    front=(front+1)%MAX;
    printf("removed element\n");
  }
}


void display()
{
  if (isEmpty())
  {
    printf("queue underflow\n");
    return; // Fix: Stop here so it doesn't run the loop when empty
  }
  
  int i = front; // Fix: Initialize i with front
  while (i != rear)
  {
    printf("%d ", cqueue[i]);
    i = (i + 1) % MAX;
  }
  printf("%d\n", cqueue[rear]); // Prints the last element at rear
}

int main()
{
  display();
  enqueue(2);
  enqueue(10);
  display();
}

