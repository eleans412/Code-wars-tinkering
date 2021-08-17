#include <stddef.h>

struct Node
{
    int value;
    struct Node *next;
};

struct Node * reverse_list(struct Node *node)
{
    
  struct Node *head = node;
  struct Node *current = head;
  struct Node *previous = NULL;
  struct Node *following = head;
  
  while (current != NULL) {
    
    following = following->next;
    current->next = previous;
    previous = current;
    current = following;
  }
  
    return previous;
}