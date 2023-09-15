#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *head = NULL;
struct node *current = NULL;
//insertion at the beginning
void insertatbegin(int data){ //for insertion at the start of the linked list
   struct node *new_node = (struct node*) malloc(sizeof(struct node)); //new node creation
   new_node->data = data; //to store the data in new_node

   new_node->next = head; // point it to old first node

   head = new_node; //point first to new first node
}
//insertion at the end
void insertatend(int data){ 
    struct node *new_node = (struct node*) malloc(sizeof(struct node)); //new node creation
    new_node->data = data;
    struct node *temp = head;

    // point it to old first node
    while(temp->next != NULL)
      temp = temp->next;

    //point first to new first node
    temp->next = new_node;
}
//insertion after a particular node
void insertafternode(struct node *list, int data){
   struct node *lk = (struct node*) malloc(sizeof(struct node));
   lk->data = data;
   lk->next = list->next;
   list->next = lk;
}
//insertion before a particular node
void insertbeforenode(struct node *List,int data,struct node *head){
    struct node *lk = (struct node*) malloc(sizeof(struct node));
    lk->data=data;
    lk->next=List;
    struct node *temp = head;
    while(temp->next!=List){
        temp=temp->next;
    }
    temp->next=lk;
}
//deletion at the beggining of the linked list
void deleteatbegin(){ //deletion at the start of the linked list
    struct node *new_node = (struct node*) malloc(sizeof(struct node)); //new node creation
    new_node=head;
    head = new_node->next;
    free(new_node);
}
//deletion at the end
void deleteatend(){ //deletion at the end of the linked list
    struct node *linkedlist = head;
    while (linkedlist->next->next != NULL)
    {
        linkedlist = linkedlist->next;
    }

    struct node *new_node = (struct node*) malloc(sizeof(struct node)); //new node creation
    new_node->next=linkedlist->next;
    linkedlist->next = NULL;
    free(new_node);
}
//deletion after a particular node
void deleteafternode(struct node *List){
    struct node *temp=List->next;
    List->next=temp->next;
    free(temp);
}
//deletion before a particular node
void deletebeforenode(struct node *List,struct node *head){
    struct node *temp = head;
    while(temp->next->next!=List){
        temp=temp->next;
    }
    struct node *node_to_be_deleted=temp->next;
    temp->next=List;
    free(node_to_be_deleted);
}
//display function to print the linked list
void printList(){
    struct node *temp = head;
    printf("\n[");

    while(temp != NULL) { //start from the beginning
      printf(" %d ",temp->data);
      temp = temp->next;
    }
   printf("]");
}
int main(){
    insertatbegin(12);
    printf("Linked List: ");
    printList(); //priting of the linked list

    insertatbegin(22);
    printf("\nLinked List: ");
    printList(); //priting of the linked list

    insertatend(30);
    printf("\nLinked List after insertion at the end : ");
    printList(); //priting of the linked list

    insertatend(44);
    printf("\nLinked List after insertion at the end : ");
    printList(); //priting of the linked list

    insertatbegin(50);
    printf("\nLinked List: ");
    printList(); //priting of the linked list

    insertafternode(head->next->next, 33);
    printf("\nLinked List after insertion after a particular node ");
    printList(); //priting of the linked list

    insertbeforenode(head->next->next,2,head);
    printf("\nLinked List after insertion before a particular node ");
    printList(); //priting of the linked list

    deleteatbegin();
    printf("\nLinked List after deletion at the start : ");
    printList(); //priting of the linked list

    deleteatend();
    printf("\nLinked list after deletion at the end ");
    printList(); //priting of the linked list

    deleteafternode(head->next->next);
    printf("\nNode deletion after a particular node ");
    printList(); //priting of the linked list

    deletebeforenode(head->next->next,head);
    printf("\nNode deletion before a particular node ");
    printList(); //priting of the linked list
return 0;
}