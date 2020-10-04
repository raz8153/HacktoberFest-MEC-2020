//Swapping two consecutive nodes in linked list
//Language : C
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{ int data;
 struct node * next;
 }*head=NULL,*temp;
void swap()
{ temp=head;
  while(temp!=NULL&&temp->next!=NULL)
   {temp->data+=temp->next->data;
    temp->next->data=temp->data-temp->next->data;
    temp->data-=temp->next->data;
    temp=temp->next->next;
    }
}
void display()
{ temp=head;
  while(temp->next!=NULL)
   {printf("%d->",temp->data);
    temp=temp->next;
    }
    printf("%d\n",temp->data);
 }
void main()
{ int ch;
  clrscr();
  do
   { struct node *ptr=(struct node *)malloc(sizeof(struct node*));
    ptr->next=NULL;
    printf("Enter data : ");
    scanf("%d",&ptr->data);
    if(head==NULL)
      head=temp=ptr;
    else
     {temp->next=ptr;
      temp=ptr;}
     printf("Want to enter(1 yes,0 no)?");
     scanf("%d",&ch);
    }
  while(ch==1);
  display();
  swap();
  display();
 getch();
}
