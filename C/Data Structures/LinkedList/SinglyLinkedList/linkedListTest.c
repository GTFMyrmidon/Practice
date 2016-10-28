#include "linkedList.h"

int main()
{
    struct Node *head = NULL;
    head = insertNode(head, 1, 2);
    head = insertNode(head, 2, 33);
    head = insertNode(head, 3, -12);

    if (search(head, 3) == 0)
    {
        printf("Found it!\n");
    }

    deleteNode(head, 3);

    if (search(head, 3) == 0)
    {
        printf("Fucked up!\n");
    }
    else
    {
        printf("It's gone!\n");
    }

    printList(head);
    cleanup(head);

    return 0;
}
