#include <stdio.h>
#include <stdlib.h>


struct Node
{
   int data;
   struct Node* next;
};

int length(struct Node* head)
{
  int num = 0;
  struct Node* current = NULL;

  for(current = head; current != NULL; current = current->next)
  {
    num++;
  }
  return num;
}

void printList(struct Node* head)
{
   printf("printing the list\n\n");
   struct Node* current = NULL;

   for(current = head; current != NULL; current = current->next)
   {
      printf("|___%d___|---->", current->data);
   }

   printf("NULL\n\n");

}

struct Node*  createNode(int data)
{
  struct Node* basicLink = malloc(sizeof(struct Node));
  basicLink->data = data;
  return basicLink;  
}

void deleteList(struct Node* head)
{
   struct Node* current = head;
   struct Node* temp = NULL;
    
   while(current != NULL)
   {
     temp = current;
     current = current->next;
     free(temp);
   }
}

struct Node*  createBasicList(int n)
{
  struct Node* curr = NULL;
  struct Node* head = NULL;
  while(n)
  {    
    if(head)
    {
       curr->next = createNode(n);
       curr = curr->next;
    }
    else
    {
       head = createNode(n);
       curr = head;
    }
    --n;
  }
  return head;   
}

void push(struct Node** headRef, int data)
{
  struct Node* curr = createNode(data);
  curr->next = *headRef;
  *headRef = curr;
}

int main()
{
  struct Node* head = createBasicList(4);
  printList(head);

  printf("push value 10 into the list\n");
  printf("address of head before push = %p\n", head);
  push(&head, 10);
  printf("address of head after push = %p\n", head);


  printList(head);
  deleteList(head);
 
  return 0;
}
