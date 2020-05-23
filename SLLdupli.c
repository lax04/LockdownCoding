#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void insertele(struct node**head,int newdata)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=newdata;
    newnode->next=*head;
    *head=newnode;
}
void display(struct node *node)
{
    while(node!=NULL)
    {
        printf("%d",node->data);
        node=node->next;
    }
    
}
void remvduplicate(struct node*head)
{
    struct node*current=head;
    struct node*next_next;
    if(current==NULL)
    {
        return;
    }
    while(current->next!=NULL)
    {
        if(current->data==current->next->data)
        {
            next_next=current->next->next;
            free(current->next);
            current->next-next_next;
        }
        else
        {
            current=current->next;
            
        }
    }
}
void main()
{
    struct node*head=NULL;
    int n,i;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    printf("enter the sorted linked list:\n");
    for(i=0;i<n;i++)
    {
        int data;
        scanf("%d",&data);
        insertele(&head,data);
    }
    printf("Before removeing duplicates\n");
    display(head);
    printf("\n")
    remvduplicate(head);
    printf("After removeing the duplicates\n");
    display(head);
    return(0);
    
}
