#include <stdio.h>

typedef struct {
    int key;
    struct Node* next;
} Node;

void print(Node* head)
{
    Node* curr = head;

    while (curr != NULL)
    {
        printf("%d, %d -> ", curr->data, curr->key);
        curr = curr->next;
    }
    printf("NULL");
}

void insert(Node* head, int newKey)
{
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->key = newKey;

    if (head == NULL)
    {
        newNode->next = NULL;
        head = newNode;
    }
    else
    {
        Node* curr = head;
        
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = newNode;
        newNode->next = NULL;
    }
}

void insertSorted(Node* head, int newKey)
{
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->key = newKey;

    if (head == NULL || newKey <= head->key)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node* curr = head;

        while (curr->next != NULL && newKey > curr->next->key)
        {
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
    }
}
        
