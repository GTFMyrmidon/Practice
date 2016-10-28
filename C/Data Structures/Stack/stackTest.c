#include "stack.c"
#include <stdlib.h>
#include <time.h>

int main()
{
    struct Stack s;
    stack_init(&s);
    srand(time(NULL));
    int i;

    for (i = 0; i < 10; ++i)
    {
        int temp = rand() % 100;
        printf("Pushing: %d\n", temp);
        stack_push(&s, temp);
    }

    for (i = s.size; i != 0; --i)
    {
        int j = stack_pop(&s);
        printf("Here: %d\n", j);
    }

    return 0;
}
