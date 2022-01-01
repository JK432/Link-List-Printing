#include <stdio.h>

int main(){
struct node{
int data;
struct node*next;
};

struct node *head,*newnode,*temp;
head=0;
int x;
scanf("%d",&x);
while(x!=0)
{
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=0;
if(head==0){
  head=temp=newnode;
}
else{
  temp->next=newnode;
  temp=newnode;
}
scanf("%d",&x);
}
temp=head;
while(temp!=0){
  printf("%d",temp->data);
  
  temp=temp->next;
  if(temp!=0){
    printf("->");
  }
}
}
