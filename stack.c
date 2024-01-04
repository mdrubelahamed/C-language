// Stack
// how to push, pop and display element
#include <stdio.h>
#include <stdlib.h>

#define M 5

int stack[M];
int top = -1;

void push(int value) {
  if (top == M - 1) {
    printf("Stack Overflow! Cannot push element %d.\n", value);
  } else {
    stack[top++] = value;
    printf("Pushed %d to the stack.\n", value);
  }
}

void pop() {
  if (top == -1) {
    printf("Stack Underflow! Cannot pop from an empty stack.\n");
  } else {
    printf("Popped %d from the stack.\n", stack[top--]);
  }
}

void display() {
  if (top == -1) {
    printf("Stack is empty.\n");
  } else {
    printf("Stack elements (top to bottom): ");
    for (int i = top; i >= 0; --i) {
      printf("%d ", stack[i]);
    }
    printf("\n");
  }
}

int main() {
  int choice, value;

  do {
    printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter the value to push: ");
        scanf("%d", &value);
        push(value);
        break;
      case 2:
        pop();
        break;
      case 3:
        display();
        break;
      case 4:
        printf("Exiting...\n");
        break;
      default:
        printf("Invalid choice. Try again.\n");
    }

  } while (choice != 4);

  return 0;
}
