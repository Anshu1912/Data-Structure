// circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int num;
    struct node *link;
};
void display(struct node *head)
{
    struct node *temp;
    temp=head;
do
    {
        printf("%d ",temp->num);
        temp = temp->link;
    }while(head!=temp);
}
struct node * insertion(struct node *head)
{
    struct node *temp = head;
    while(head!=temp->link)
    {
        temp=temp->link;
    }
    struct node  *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Insert new data- ");
    scanf("%d", &newnode->num);
    newnode->link = temp->link;
    temp->link = newnode;
    head=newnode;
    return head;
}

void deletion(struct node *head)
{
     struct node *temp = head;
      while(head!=temp->link->link)
    {
        temp=temp->link;
    }
    free(temp->link);
            temp->link = head;
}
int main()
{
    int n;
    printf("Input the no. of nodes- ");
    scanf("%d", &n);
    struct node *head, *temp2, *temp, *nxtnode, *newnode;
    head = (struct node *)malloc(sizeof(struct node));
    temp=head;
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
            temp->link =head;
        }
    }
    printf("Circular list is created\n Elements are- ");
    display(head);

     printf("\n\nInsertion at front\n\n");

    head =insertion(head);
        display(head);


    n = n+1;
         printf("\n\nDeletion at end\n\n  ");

    deletion(head);
    n--;
        display(head);



    return 0;
}
