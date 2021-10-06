#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int rear;
    int front;
    int *a;
};

int isfull(struct queue *q)
{
    if ((q->rear + 1) % q->size == q->front)
    return 1;
    return 0;
}

int isempty(struct queue *q)
{
    if (q->rear == q->front)
    return 1;
    return 0;
}

void push(struct queue *q, int data)
{
    if (isfull(q))
       printf("the circular queue is full\n");
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->a[q->rear] = data;
        printf("element enqueued successfully!\n");
    }
}

void rmove(struct queue *q)
{
    if (isempty(q))
    printf("the queue is empty!\n");
    else
    {
    q->front = (q->front + 1) % q->size;
    printf("Remove operation successfull!\n");
    }
}

void display(struct queue *q)
{
    printf("Elements of queue are:\n");
    for (int i = (q->front + 1) % q->size; i <= q->rear; i++)
    printf("%d ", q->a[i]);
    printf("\n");
}

int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 6;
    q->rear = 0;
    q->front = 0;
    q->a = (int *)malloc(6 * sizeof(int));
    int choice;
    printf("MENU\n");
    printf("1.push\n");
    printf("2.remove\n");
    printf("3.Display\n");
    printf("4.Exit\n");
    int x;
    do
    {
        printf("Enter Your Choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter element to be pushed:");
                scanf("%d", &x);
                push(q, x);
                break;
            case 2:
                rmove(q);
                break;
            case 3:
                display(q);
                break;
            default:
                break;
        }
    } while (choice != 4);
    return 0;
}