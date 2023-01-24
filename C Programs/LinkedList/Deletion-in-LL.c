#include<stdio.h>
#include<stdlib.h>
struct node
{
    int num;
    struct node *link;
};
void display(struct node *ptr)
{
        struct node *temp;

        temp = ptr;
    while(temp!=NULL)
    {
        printf("%d ",temp->num);
        temp = temp->link;
    }

}
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
    display(head);

     // deletion of node at the end
/*
    temp = head;
    for(int i=1; i<n; i++)
    {
        if(i==n-1)
        {
                free(temp->link);
    temp->link = NULL;

        }
                temp = temp->link;

    }
     printf("\nAfter deletion of a node at end\nNew list is created- ");
    display(head);
 /*   // deletion of node at beginning

    temp = head;
    head = temp->link;
    free(temp);
     printf("\nAfter deletion of a node at beginning\nNew list is created- ");
    display(head);

*/
  //  deletion of node at specific location

   int loc;
    printf("\nDeletion of a node at specific location\nInsert which node you want to delete- ");
    scanf("%d",&loc);
    temp=head;
                struct node *temp2;

    for(int i=1; i<loc; i++)
    {

        if(i==loc-1)
        {

         temp2 = temp->link ->link;
         free(temp->link);
          temp->link = temp2;
        }

        temp = temp->link;
    }
        display(head);

    return 0;
}
