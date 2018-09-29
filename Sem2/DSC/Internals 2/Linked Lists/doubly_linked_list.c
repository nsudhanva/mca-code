#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

int is_empty(struct Node *list);
struct Node *createNode(struct Node *list);
struct Node *insert_at_beg(struct Node *list);
struct Node *insert_at_end(struct Node *list);
struct Node *insert_at_pos(struct Node *list);
struct Node *delete_at_beg(struct Node *list);
struct Node *delete_at_end(struct Node *list);
struct Node *delete_at_pos(struct Node *list);
void display(struct Node *list);

int main()
{
    struct Node *list;
    list = NULL;

    int choice;

    while (1)
    {
        printf("Enter the operation to be performed\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Delete at beginning\n");
        printf("5. Delete at end\n");
        printf("6. Delete at position\n");
        printf("7. Display\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            list = insert_at_beg(list);
            display(list);
            break;
        case 2:
            list = insert_at_end(list);
            display(list);
            break;
        case 3:
            list = insert_at_pos(list);
            display(list);
            break;
        case 4:
            list = delete_at_beg(list);
            display(list);
            break;
        case 5:
            list = delete_at_end(list);
            display(list);
            break;
        case 6:
            list = delete_at_pos(list);
            display(list);
            break;
        case 7:
            display(list);
            break;
        default:
            printf("Invalid option, try again..\n");
        }
    }
}

int is_empty(struct Node *list)
{
    if (list == NULL)
    {
        return 1;
    }
    return 0;
}

struct Node *createNode(struct Node *list)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

struct Node *insert_at_beg(struct Node *list)
{
    struct Node *new_node;
    new_node = createNode(list);

    int element;
    printf("Enter the element to be inserted at the beginning: ");
    scanf("%d", &element);

    new_node->data = element;

    if (is_empty(list)) 
    {
        list = new_node;
    }
    else{
        new_node->next = list;
        list->prev = new_node;
        list = new_node;
    }

    return list;
}

struct Node *insert_at_end(struct Node *list)
{
    struct Node *new_node, *start;
    new_node = createNode(list);

    int element;
    printf("Enter the element to be inserted at the end: ");
    scanf("%d", &element);

    new_node->data = element;

    if (is_empty(list))
    {
        list = new_node;
    }
    else if(list->next == NULL)
    {
        list->next = new_node;
        new_node->prev = list;
    }
    else
    {
        start = list;

        while (start->next != NULL)
        {
            start = start->next;
        }

        start->next = new_node;
        new_node->prev = list;
    }

    return list;
}

struct Node *insert_at_pos(struct Node *list)
{
    struct Node *temp, *new_node;
    new_node = createNode(list);

    int position, count = 0;

    int element;
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    printf("Enter the position: \n");
    scanf("%d", &position);

    new_node->data = element;

    if (is_empty(list))
    {
        list = new_node;
    }
    else
    {
        temp = list;

        while (temp->next != NULL)
        {
            temp = temp->next;
            count++;

            if (count == position - 1)
            {
                break;
            }
        }

        new_node->next = temp->next;
        new_node->prev = temp;
        temp->next = new_node;
    }
    return list;
}

struct Node *delete_at_beg(struct Node *list)
{
    if (!(is_empty(list)))
    {
        struct Node *temp;
        temp = list;
        list = list->next;
        free(temp);
    }
    return list;
}

struct Node *delete_at_end(struct Node *list)
{
    struct Node *temp;
    temp = list;

    if (!(is_empty(list)))
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->prev->next = NULL;
        free(temp);
    }
    else if(temp->next == NULL){
        list = NULL;
        free(temp);
    }
    return list;
}

struct Node *delete_at_pos(struct Node *list)
{
    struct Node *temp;
    temp = list;

    int count = 0, position;

    printf("Enter the position: \n");
    scanf("%d", &position);

    while (temp->next != NULL)
    {
        temp = temp->next;

        if (count == position - 1)
        {
            break;
        }
        count++;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    free(temp);
    return list;
}

void display(struct Node *list)
{
    if (is_empty(list))
    {
        printf("List is empty\n");
    }
    else
    {
        printf("List: ");

        struct Node *start;
        start = list;

        while (start != NULL)
        {
            printf("%d ", start->data);
            start = start->next;
        }

        printf("\n");
    }
}