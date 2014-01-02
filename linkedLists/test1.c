#include <stdio.h>
#include <stdlib.h>


struct Node
{
   int data;
   struct Node* next;
};

int count(struct Node* head)
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

struct Node*  createBasicList(int n=3)
{
  struct Node* temp = NULL;
  while(n)
  {
    temp = createNode(n);
    --n;
    
  }   
}
int main()
{
  return 0;

}
