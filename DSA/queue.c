#include<stdio.h>

#define MAX_size 5
int front = -1, rear = -1;

int main(){

    int choice, items;
    while(1)
    {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ");

        while(1){
            printf("Enter data to enqueue: ");
            scanf("%d", &choice);

            switch(choice){
                case 1:
                if(rear==MAX_size-1){
                    printf("Queue Overflow\n");
                }
                else{
                    printf("enter the elements");
                    scanf("%d",&items);

                    if(front==-1){
                        front = rear = 0;
                    }
                    else{
                        rear++;
                    }
                    queue[rear]=items;
                    printf("itmes inserted\n");
                }
                break;                                // TODO  : 1. Enqueue 2. Dequeue 3. Display 4. Exit error

                case 2:
                if(front==-1){
                    printf("Queue Underflow\n");
                }
                else{
                    items=queue[front];
                    if(front==rear){
                        front=rear=-1;
                    }
                    else{
                        front++;
                    }
                    printf("items deleted\n");
                }
                break;

                case 3:
                if(front==-1){
                    printf("Queue is empty\n");
                }
                else{
                    printf("Queue elements are: ");
                    for(int i = front; i <= rear; i++)
                    {
                        printf("%d ", queue[i]);
                    }
                    printf("\n");
                }
                break;

                case 4:
                printf("Exit\n");
                return 0;

                default:
                printf("Invalid choice\n");

            }

        }

    }
}