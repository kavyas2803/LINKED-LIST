#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*temp,*new,*del;
int x;
void create()
{
    int i;
    temp=head;
    printf("\n CREATE");
    do{
        new=malloc(sizeof(struct node));
        printf("\n enter the value");
        scanf("%d",&new->data);
        new->next=head;
        temp->next=new;
        temp=temp->next;
        printf("\n press 1 to continue");
        scanf("%d",&i);
    }while(i==1);
}
void insert()
{
    printf("\n INSERT");
    printf("\n enter the value after which it is to be inserted");
    scanf("%d",&x);
    temp=head->next;
    while(temp->data!=x)
    {
        temp=temp->next;
    }
    new=malloc(sizeof(struct node));
    printf("\n enter the value");
    scanf("%d",&new->data);
    new->next=temp->next;
    temp->next=new;
}
void delete()
{
    printf("\n DELETE");
    printf("\n Enter the element to delete");
    scanf("%d",&x);
    temp=head;
    while(temp->next->data!=x)
    {
        temp=temp->next;
    }
    del=temp->next;
    temp->next=del->next;
    free(del);
}
void count()
{
    printf("\n COUNT");
    int c=0;
    temp=head;
    while(temp->next!=head)
    {
        c++;
        temp=temp->next;
    }
    printf("\n The total records is %d",c);
}
void search()
{
    int f=0;
    printf("\n SEARCH");
    printf("\n enter the element to be searched");
    scanf("%d",&x);
    temp=head->next;
    while(temp!=head)
    {
        if(temp->data==x)
        {
            printf("\n found");
            f=1;
            break;
        }
        temp=temp->next;
    }
       if(f==0)
        {
            printf("Not found");
            
        }
  
}

void display()
{
    temp=head->next;
    while(temp!=head)
    {
        printf("\t%d",temp->data);
        temp=temp->next;
    }
}

int main()
{
    head=malloc(sizeof(struct node));
    head->next=new;
    create();
    display();
    insert();
    display();
    delete();
    display();
    count();
    search();
   
    
}
