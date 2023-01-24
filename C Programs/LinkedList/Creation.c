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
    struct node *head, *temp, *nxtnode;
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
    return 0;
}
