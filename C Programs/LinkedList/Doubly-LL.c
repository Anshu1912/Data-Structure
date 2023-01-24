
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

    void display(struct node *head)
    {
        struct node *ptr;
        ptr=head;
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
    struct node * insertion(struct node *head)
    {
        struct node *ptr;
        int num;
        ptr = (struct node *)malloc(sizeof(struct node));
        printf("Enter data - ");
        scanf("%d", &num);
        if(head==NULL)
        {
            ptr->next = NULL;
            ptr->prev = NULL;
            ptr->data = num;
            head=ptr;
        }
        else
        {
            ptr->data = num;
            ptr->prev = NULL;
            ptr->next = head;
            head->prev = ptr;
            head=ptr;
        }
return head;

    }

    void deletion(struct node *head)
    {
        struct node *ptr;
        if(head->next ==NULL)
        {
            head=NULL;
            free(head);
          //  printf("Node deleted");
        }
        else
        {
            ptr = head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->prev->next=NULL;
            free(ptr);

         //   printf("\nNode deleted");

        }
    }
int main()
{
    int n;
    printf("Input the no. of nodes- ");
    scanf("%d", &n);
    struct node *head = 0, *temp, *nxtnode;
   // head = (struct node *)malloc(sizeof(struct node));
    // temp = head;
         for(int i=1; i<=n; i++)
    {

        nxtnode = (struct node *)malloc(sizeof(struct node));
        printf("Insert data for node %d- ",i);
        scanf("%d",&nxtnode->data);
        nxtnode->prev = 0;
        nxtnode->next=0;
        if(head==0)
        {
            head=temp=nxtnode;
           
        }
     
        else
        {
            temp->next=nxtnode;
            nxtnode->prev = temp;
            temp=nxtnode;
        }
    }
    printf("list is created\n Elements are- ");
    display(head);

    printf("\n\nInsertion at front\n\n");
    head = insertion(head);
    display(head);
        printf("\n\nDeletion at end\n\n");
        deletion(head);
                printf("\nAfter deletion \n New list-");

    display(head);


   /*
*/

}
