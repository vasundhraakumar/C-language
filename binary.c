#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
}*head,*temp,*newnode;
void Preorder()
{
    if (head == NULL)
        return head;
            printf("%d ", head->data);
    Preorder(head->left);
    Preorder(head->right);
}

int main()
{
    int size,i;
    scanf("%d",&size);
    for(i=0;i<size;i++)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
             printf("enter the data:");
            scanf("%d",&newnode->data);
            newnode->left=NULL;
            newnode->right=NULL;
            if(head==NULL)
            {
                head=newnode;
                temp=newnode;
            }
            else
                {
                    temp->right=newnode;
                    newnode->left=temp;
                    temp=temp->right;
                }
        }
        Preorder();
        temp=head;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->right;
        }
    }
