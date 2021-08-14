#include <stdio.h> 
#include <stdlib.h> 
struct node
{
    char name[20]; 
    int data;
    struct node *next;
}*start=NULL,*start1=NULL; 

int insertatend()
{
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node)); 
    printf("Enter Name : ");
    scanf("%s",temp->name);
    printf("Enter marks : "); 
    scanf("%d",&temp->data); 
    printf("\n");
    if (start==NULL)
    {
        temp->next=NULL; 
        start=temp;
    }
    else
    {
        temp->next=NULL; 
        ptr=start;
        while(ptr->next!=NULL) ptr=ptr->next;ptr->next=temp;
    }
}

int insertatend1()
{
    struct node *new1,*st;
    new1=(struct node*)malloc(sizeof(struct node)); 
    printf("Enter Name : ");
    scanf("%s",new1->name); 
    printf("Enter marks : ");
    scanf("%d",&new1->data); 
    printf("\n\n");
    if (start1==NULL)
    {
        new1->next=NULL; 
        start1=new1;
    }
    else
    {
        new1->next=NULL; 
        st=start1;
        while(st->next!=NULL) st=st->next;
        st->next=new1;
    }
}

void merge1()
{
    struct node *sm,*sm1; 
    sm=start;
    while (sm!=NULL)
    {
        printf("%d \n",sm->data); 
        sm=sm->next;
    }
    sm1=start1;
    while (sm1!=NULL){
        printf("%d \n",sm1->data); 
        sm1=sm1->next;
    }
}

void merge2()
{
    struct node *q,*r,*q1,*r1; 
    int c,c1;
    for(q=start;q->next!=NULL;q=q->next)
    {
        for(r=q->next;r!=NULL;r=r->next) 
            if(q->data > r->data){
                c=q->data;
                q->data=r->data; 
                r->data=c;
            }
        }
    for(q1=start1;q1->next!=NULL;q1=q1->next)
    {
        for(r1=q1->next;r1!=NULL;r1=r1->next) 
        if(q1->data > r1->data){
           c1=q1->data;
            q1->data=r1->data; 
            r1->data=c1;
        }
    }
    merge1();
}

int main()
{
    int n,m; 
    while (m!=3)
    {
        printf("1. Insert for list 1\n");
        printf("2. Insert for list 2\n");
        printf("3. Stop Inserting\n");
        scanf("%d",&m);
        if (m==1) insertatend(); 
        else if (m==2) insertatend1(); 
        else if (m==3) break;
    }
    printf("1. Merge as per low level\n");
    printf("2. Merge as per Middle level\n"); 
    printf("3.Merge as per Higher level\n");
    printf("Enter your choice : "); 
    scanf("%d",&n);
    printf("\n"); 
    switch(n)
    {
        case 1: 
            merge1(); 
            break; 
        case 2: 
            merge2(); 
            break;
        case 3:
            merge2();
            break;
    }

    return 0;
}
