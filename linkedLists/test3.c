#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct Node
{
  int data;
  struct Node* next;
};

typedef struct Node Node_t;

Node_t* createList(int* p, size_t n)
{
  size_t i = 0;
  Node_t* curr = NULL;
  Node_t* head = malloc(sizeof(Node_t));
  head->data = *p;
  head->next = NULL;
  curr = head;

  for(i=1; i < n; ++i)
  {
    curr->next = malloc(sizeof(size_t));
    curr = curr->next;
    curr->data = *(p+i);
    curr->next = NULL;
  }

  return head;
}

void printList(Node_t* head)
{
  printf("Printing the list\n");
  Node_t* curr = head;

  while(curr)
  {
    printf("[__%d__]-->",curr->data);
    curr = curr->next;
  }

  printf("NULL\n\n");
} 

void freeList(Node_t** headRef)
{
  Node_t* head = *headRef;
  Node_t* curr = head;
  Node_t* temp = NULL;

  printf("freeList::freeing the entire list\n");

  while(curr)
  {
    temp = curr;
    curr = curr->next;
    printf("freeing node with data = %d\n", temp->data);
    free(temp);
  }

  *headRef = NULL;
}

int GetNth(Node_t* head, size_t n)
{
  Node_t* curr = head;

  while(n)
  {
    assert(curr != NULL);
    curr = curr->next;
    --n;
  }

  assert(curr != NULL);
  return curr->data;
}

void insertNth(Node_t** headRef, int loc, int val)
{
  Node_t* curr = *headRef;
  Node_t* prev = NULL;

  while(loc)
  {
    if(curr == NULL)
       break;

    prev = curr;
    curr = curr->next;
    loc--;
  }
  
  Node_t* temp = malloc(sizeof(Node_t));
  temp->data = val;
  temp->next = NULL;

  if(curr == NULL)
  {
    prev->next = temp;
    return;
  }

  if(prev == NULL)
  {
    prev = temp;
    prev->next = curr;
    *headRef = prev;
    return;
  }

  prev->next = temp;
  temp->next = curr;

  return;
}


int main()
{
  int arr[8] = {1,2,3,4,5,6,7,8};
  Node_t* head = createList(arr, 8);
  printList(head);

  printf("3rd Node on the list = %d\n", GetNth(head, 3));
  printf("4rth Node on the list = %d\n", GetNth(head, 4));
  printf("6rd Node on the list = %d\n", GetNth(head, 6));
  printf("0th Node on the list = %d\n", GetNth(head, 0));
  printf("10th Node on the list = %d\n", GetNth(head, 10));

  printf(  

  freeList(&head);

  return 0;
}
