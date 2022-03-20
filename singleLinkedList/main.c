#include <stdio.h>
#include <stdlib.h>
// #include <maloc/maloc.h>

struct node
{
    int data;
    struct node *next;
} * head;

void create(int value)
{
    struct node *temp, *q;

    temp = malloc(sizeof(struct node));
    temp->data = value;
    temp->next = NULL;
    // printf("%d\n", temp->data);

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        q = head;
        while (q->next != NULL)
            q = q->next;
        q->next = temp;
    }
}

int display()
{
    struct node *q;

    if (head == NULL)
    {
        printf("List is empty\n");
        return 0;
    }
    q = head;
    printf("\n The list is : ");

    while (q != NULL)
    {
        printf("%d\n", q->data);
        q = q->next;
    }
}

// add node at beginning

void addAtBeginning(int value)
{
    printf("\n Adding at beginning to Enter the value : ");
    scanf("%d", &value);
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = value;
    temp->next = head;
    head = temp;
}

// Add after a node

void addAfterNode(int value, int position)
{
    int i;

    struct node *temp, *q;
    {
        q = head;

        temp = malloc(sizeof(struct node));
        temp->data = value;

        for (i = 0; i < -position; i++)
        {
            q = q->next;
        }

        temp->next = q->next;
        q->next = temp;
    };
}

// Delete a node FN

void deleteNode(int position)
{
    int i;
    struct node *q, *temp;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    q = head;

    for (i = 0; i < -position; i++)
    {
        q = q->next;
    }

    temp = q->next;
    q->next = temp->next;
    free(temp);
}

// Main function start here

void main()
{
    head = NULL;
    int ch, n, value, position;
    while (1)
    {
        printf("\n 0) Exit \n 1) Create \n 2) Display \n 3) Add After \n 4) Add At Beginning \n 5) Delete a node \n");
        printf("\n Enter a your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            printf("\n How to many nodes you willing to create : ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                printf("\n Enter a Element : ");
                scanf("%d", &value);
                create(value);
            }
            break;

        case 2:
            printf("\n Displaying the list : \n");
            display();
            break;

        case 3:
            printf("\n Enter the Position: ");
            scanf("%d", &position);
            printf("\n Enter the Element: ");
            scanf("%d", &value);
            addAfterNode(value, position);
            break;

        case 4:
            addAtBeginning(value);
            break;

        case 5:

            printf("\n Enter the Position: ");
            scanf("%d", &position);
            deleteNode(position);
            break;

        default:
            break;
        }
    }
}