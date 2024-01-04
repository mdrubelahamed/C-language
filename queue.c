// Queue
// FIFO way of doing queue
#include <stdio.h>
#include <stdlib.h>

#define M 5

int front = -1;
int rear = -1;
int queue[M];

void enqueue() 
{
  if (rear == M - 1) 
  {
    printf("Queue is Full. Cannot enqueue.\n");
  } 
  else 
  {
    printf("Insert a value: ");
    scanf("%d", &queue[++rear]);
    if (front == -1) 
    {
      front = 0;
    }
    printf("Enqueued successfully.\n");
  }
}

void dequeue() 
{
  if (front == -1 || front > rear) 
  {
    printf("Queue is Empty. Cannot dequeue.\n");
  } 
  else 
  {
    printf("The dequeued value is: %d\n", queue[front++]);
    if (front > rear) 
    {
      front = rear = -1;
    }
  }
}

void display() 
{
  if (front == -1 || front > rear) 
  {
    printf("Queue is Empty.\n");
  } 
  else 
  {
    printf("Queue elements from front to rear:\n");
    for (int i = front; i <= rear; i++) 
    {
      printf("%d ", queue[i]);
    }
    printf("\n");
  }
}

int main() 
{
  int choice;
  while (1) 
  {
    printf("\nEnter 1 to enqueue, 2 to dequeue, 3 to display, and any other key to exit: ");
    scanf("%d", &choice);
    switch (choice) 
    {
      case 1:
        enqueue();
        break;
      case 2:
        dequeue();
        break;
      case 3:
        display();
        break;
      default:
        exit(0);
    }
  }
  return 0;
}
