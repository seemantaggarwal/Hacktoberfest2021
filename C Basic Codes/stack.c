#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int *a;
    int size;
    int top;
};

void menu(){
    printf("\nMENU Options\n");
    printf("1.PUSH\n");
    printf("2.POP\n");
    printf("3.DISPLAY\n");
    printf("4.EXIT\n");
}

int isfull(struct stack *st)
{
    return (st->top == st->size - 1);
}

int isempty(struct stack *st)
{
    return st->top == -1;
}

void display(struct stack *st)
{
    printf("Stack elements are:\n");
    for (int i = st->top; i >= 0; i--)
    printf("%d ", st->a[i]);
    printf("\n");
}

void push(struct stack *st, int x)
{
    if (isfull(st))
    {
        printf("Stack is Full and element cannot be pushed!\n");
        return;
    }
    st->top++;
    st->a[st->top] = x;
}

void pop(struct stack *st)
{
    if (isempty(st))
    {
        printf("Stack is empty and element cannot be popped!\n");
        return;
    }
    int x = st->a[st->top];
    st->top--;
    printf("The popped element is %d \n", x);
}

int main()
{
    struct stack *st = (struct stack *)malloc(sizeof(struct stack));
    st->a = (int *)malloc(sizeof(int) * 100);
    st->top = -1;
    st->size = 100;
    int choice;
    menu();
    do
    {
        int x;
        printf("Enter Your Choice:");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            printf("Enter element to be pushed:");
            scanf("%d", &x);
            push(st, x);
            printf("Element pushed successfully!\n");
            break;
            case 2:
            pop(st);
            break;
            case 3:
            display(st);
            break;
            default:
            break;
        }
    } while (choice != 4);
    return 0;
}