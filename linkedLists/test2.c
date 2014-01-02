#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node* next;
} ;


typedef struct Node Node_t;

Node_t* createList(int* p, size_t n)
{
  Node_t* head = NULL;
  Node_t* curr = NULL;
  size_t i = 0;

  head = malloc(sizeof(Node_t));
  head->data = *p;
  head->next = NULL;
  curr = head;

  for(i=1; i < n; ++i)
  {
    curr->next = malloc(sizeof(Node_t));
    curr = curr->next;
    curr->data = *(p+i);
    curr->next = NULL;
  }

  return head;
}

void push_back(Node_t** headRef, int data)
{
  Node_t* curr = *headRef;
  Node_t* temp = malloc(sizeof(Node_t));
  temp->data = data;
  temp->next = NULL;

  while(curr->next)
  {
    curr = curr->next;   
  }

  curr->next = temp;
}

void printList(Node_t* head)
{
  printf("Print Array\n");
  Node_t* temp = NULL;
  
  for(temp = head;temp->next != NULL; temp = temp->next)
  {
     printf("[__%d__]-->",temp->data);
  }
  
  printf("NULL\n\n");
}

int count(Node_t* head, int data)
{
  int  
}
int main()
{
  
}



































































 
}

int main()
{
  return 0;
}
