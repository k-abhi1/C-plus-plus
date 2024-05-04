#include<stdio.h>

#define MAX_size 100
int stack[MAX_size];
int top = -1;

void push(int data)
{
    if(top == MAX_size - 1)
    {
        printf("Stack Overflow\n");
    }
    else{
        stack[++top] = data;
        printf("%d is pushed\n", data);
    }
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
    }
    else{
        int item = stack[top--];
        printf("%d is popped\n", item);
    }
}

void display()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements are: ");
        for(int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
int main()
{
    int choice, data;
    while(1)
    {
       print("\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ");

        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter data to push: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Thank You\n");
                return 0;
            default:
                printf("Invalid Choice\n");
        }
    }
    return 0;
}
   