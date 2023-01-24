#include<stdio.h>
#include<stdlib.h>
struct node
{
    int num;
    struct node *link;
};
int main()
{
    int n;
    printf("Input the no. of nodes- ");
    scanf("%d", &n);
    struct node *head, *temp, *nxtnode, *newnode;
    head = (struct node *)malloc(sizeof(struct node));
     temp = head;
    for(int i=1; i<=n; i++)
    {
        nxtnode = (struct node *)malloc(sizeof(struct node));
        printf("Insert data for node %d- ",i);
        scanf("%d",&temp->num);
        temp->link = nxtnode;
        if(i!=n)
        {
            temp->link = nxtnode;
            temp = nxtnode;
        }
        else
        {
            temp->link =NULL;
        }
    }
    printf("list is created\n Elements are- ");
    temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->num);
        temp = temp->link;
    }
    // inserting new node at beginning


    newnode  = (struct node *)malloc(sizeof(struct node));
    printf("Inserting new node at beginning\nInsert data of new node- ");
    scanf("%d",&newnode->num);
    newnode->link = head;
    head = newnode;
    printf("New list - ");
     temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->num);
        temp = temp->link;
    }

    // inserting new node at specific location
    int loc;
    printf("\nInserting new node at specific location\nInsert on which node you want to insert data- ");
    scanf("%d",&loc);
    temp = head;
                newnode = (struct node *)malloc(sizeof(struct node));

            printf("Enter value in newnode - ");
            scanf("%d",&newnode->num);
    for(int i=1; i<loc; i++)
    {

        if(i==loc-1)
        {
            newnode->link = temp->link;
            temp->link = newnode;
        }
        temp = temp->link;
    }
    printf("New list - ");
     temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->num);
        temp = temp->link;
    }




    // insertion at the end
    temp=head;
        newnode  = (struct node *)malloc(sizeof(struct node));

    printf("\nInserting new node at end\nInsert value- ");
    scanf("%d",&newnode->num);
    newnode->link = NULL;
    while(temp->link!=NULL)
    {
        temp = temp->link;
    }
    temp->link = newnode;

      printf("New list - ");
     temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->num);
        temp = temp->link;
    }


    return 0;
}
