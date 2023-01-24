#include<stdio.h>
#include<stdlib.h>
struct node
{
    int num;
    struct node *link;
};
void display(struct node *ptr)
{

    while(ptr!=NULL)
    {
        printf("%d ",ptr->num);
        ptr = ptr->link;
    }

}

int main()
{
    int n;
    printf("Input the no. of nodes- ");
    scanf("%d", &n);
    struct node *head, *temp2, *temp, *nxtnode, *newnode;
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
    display(head);
    temp=NULL;
     while(head!=NULL)
    {
        temp2 = head->link;
        head->link = temp;
        temp = head;
        head= temp2;
    }
    head = temp;
 printf("\nReversed list is -\n ");
    display(head);
return 0;
}
