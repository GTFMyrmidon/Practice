#include <stdio.h>
#define MAXSIZE 100

struct Stack
{
    int stk[MAXSIZE];
    int size;
};

void stack_init(struct Stack *s)
{
    s->size = 0;
}

int stack_top(struct Stack *s)
{
    if (s->size == 0)
    {
        fprintf(stderr, "Error: Stack Empty\n");
        return -1;
    }

    return s->stk[s->size - 1];
}

void stack_push(struct Stack *s, int d)
{
    if (s->size < MAXSIZE)
    {
        s->stk[s->size++] = d;
    }
    else
    {
        fprintf(stderr, "Error: Stack Full\n");
    }
}

int stack_pop(struct Stack *s)
{
    if (s->size == 0)
    {
        fprintf(stderr, "Error: Stack Empty\n");
        return -1;
    }
    else
    {
        return s->stk[(s->size--) - 1];
    }
}
