#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
};

void linklistT(struct node *c)
{
    while(c!=NULL)
    {
        printf("Data = %d\n",c->data);
        c=c->next;
    }
}

struct node* startInsert(struct node *head,int ndata)
{
        struct node *ptr=(struct node*)malloc(sizeof(struct node));
        ptr->next=head;
        ptr->data=ndata;
        return ptr;
}

void main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node) );
    struct node *first=(struct node*)malloc(sizeof(struct node) );
    struct node *second=(struct node*)malloc(sizeof(struct node) );
    struct node *third=(struct node*)malloc(sizeof(struct node) );

    head->data=10;
    head->next=first;

    first->data=20;
    first->next=second;

    second->data=30;
    second->next=third;

    third->data=40;
    third->next=NULL;

    linklistT(head);
    head=startInsert(head,52);
    linklistT(head);


}
