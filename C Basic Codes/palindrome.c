#include <stdio.h>
#include <stdlib.h>

struct stack
{
    char *a;
    int size;
    int top;
};

int isempty(struct stack *st)
{
    return st->top == -1;
}

void push(struct stack *st, char c)
{
    st->top++;
    st->a[st->top] = c;
}

char pop(struct stack *st)
{
    char c = st->a[st->top];
    st->top--;
    return c;
}

int palindrome(char str[])
{
    struct stack *st = (struct stack *)malloc(sizeof(struct stack));
    st->a = (char *)malloc(100 * (sizeof(char)));
    st->size = 100;
    st->top = -1;
    for (int i = 0; str[i] != '\0'; i++)
        push(st, str[i]);
    int i = 0;
    while (!isempty(st))
    {
        char c = pop(st);
        if (c == str[i])
            i++;
        else
            return 0;
    }
    return 1;
}

int main()
{
    char str[100];
    printf("\nEnter any string:");
    scanf("%s", str);
    if (palindrome(str))
    printf("Given string is a palindrome\n");
    else
    printf("Given string is not a palindrome\n");
}