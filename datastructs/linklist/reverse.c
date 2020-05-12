#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};


struct node *Insert(struct node* head, int data)
{
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    temp->data = data; temp->next = NULL;
    if(head==NULL)
    head = temp;
    else
    {
        struct node* temp1 = head;
        while(temp1->next != NULL) temp1 = temp1->next;
        temp1->next = temp;

    }

    return head;

}

void print(struct node* head){
    while (head != NULL){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

struct node * reverse(struct node* head)
{

    struct node *current, *prev, *next;
    current = head;
    prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;

    }
    head = prev;
    return head;


}



int main()
{
    struct node* head=NULL; //local var
    head = Insert(head,2);
    head = Insert(head,4);
    head = Insert(head,6);
    head = Insert(head,8);

    print(head);
    head = reverse(head);
    print(head);

}



