#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    int key;
    struct Node *next;
};

void printList(struct Node *node)
{
    if (node == NULL)
    {
        printf("Linked list is empty.\n");
    }

    else
    {
        struct Node *ptr = node;
        printf("[ ");

        while (ptr != NULL)
        {
            printf("(%d, %d) ", ptr->key, ptr->data);
            ptr = ptr->next;
        }
        printf("]");
    }
}

struct Node* insertNode(struct Node *node, int key, int data)
{
    struct Node *add = (struct Node*) malloc(sizeof(struct Node));

    add->key = key;
    add->data = data;
    add->next = NULL;

    if (node == NULL)
    {
        return add;
    }

    struct Node *ptr = node;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = add;

    return node;
}

struct Node* insertNodeSorted(struct Node *node, int key, int data)
{
    struct Node *add = (struct Node*) malloc(sizeof(struct Node));
    add->key = key;
    add->data = data;

    if (node == NULL || node->key >= key)
    {
        add->next = node;
        return add;
    }

    struct Node *ptr = node;

    while (ptr->next != NULL && ptr->next->key < key)
    {
        ptr = ptr->next;
    }

    add->next = ptr->next;
    ptr->next = add;

    return node;
}

int deleteNode(struct Node* node, int key)
{
    if (node == NULL)
    {
        return -1;
    }

    struct Node *ptr = node;
    struct Node *prev = NULL;
    while (ptr != NULL && ptr->key != key)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    if (ptr == NULL)
    {
        return -1;
    }

    prev->next = ptr->next;
    free(ptr);

    return 0;
}

int search(struct Node* node, int key)
{
    if (node == NULL)
    {
        return -1;
    }

    struct Node* ptr = node;

    while (ptr != NULL && ptr->key != key)
    {
        ptr = ptr->next;
    }

    if (ptr == NULL)
    {
        return -1;
    }
    
    return 0;
}

void cleanup(struct Node *node)
{
    if (node != NULL)
    {
        struct Node *ptr = node;
        struct Node *temp;

        while (ptr != NULL)
        {
            temp = ptr->next;
            free(ptr);
            ptr = temp;
        }
    }
}
