#include "lists.h"

/**
 *
 */

void free_listint(listint_t *head)
{
  listint_t *crt;
  while (head)
  {
   crt = head->next;
   free(head);
   head = tmp;

}
}
