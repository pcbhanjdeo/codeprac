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

void push_front(Node_t** headRef, int data)
{
  Node_t* temp = malloc(sizeof(Node_t));
  temp->next = *headRef;
  temp->data = data;
  *headRef = temp;
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

int pop(Node_t** headRef)
{
  Node_t* curr = *headRef;
  *headRef = curr->next;
  int n = curr->data;
  free(curr);
  return n;
}

void printList(Node_t* head)
{
  printf("Print Array\n");
  Node_t* temp = NULL;
  
  for(temp = head;temp != NULL; temp = temp->next)
  {
     printf("[__%d__]-->",temp->data);
  }
  
  printf("NULL\n\n");
}

void freeList(Node_t** head)
{
  Node_t* curr = *head;
  Node_t* temp = NULL;
  printf("\n\n");
  for(curr = *head; curr != NULL; curr = curr->next)
  {
    temp = curr;
    printf("freeList::now freeing Node with data = %d\n", temp->data);
    free(temp);
  }
  *head = NULL;
  printf("\n\n");
}


int count(Node_t* head, int data)
{
  int num = 0;
  Node_t* curr = head;
  for(curr = head; curr != NULL; curr = curr->next)
  {
    if(data == curr->data)
    {
      ++num;
    }
  }
  return num;
}


int main()
{
  int a[6] = {1,2,3,4,5,6};
  Node_t* head = createList(a,6);
  printList(head);

  printf("main::calling push_back with 10\n");
  push_back(&head, 10);

  printf("main::calling print list function");
  printList(head);

  push_back(&head, 10);

  printf("main::address of head before push_front = %p\n", head);
  push_front(&head, 10);
  printf("main::address of head after push_front = %p\n", head);

  printf("main::printing the list\n");
  printList(head);
 
  int n = count(head, 10);
  printf("main number of nodes with data 10 = %d\n", n);
  
  n = pop(&head);
  printf("main we just popped = %d\n", n);
  printList(head);
  freeList(&head);

  return 0;
  
}
