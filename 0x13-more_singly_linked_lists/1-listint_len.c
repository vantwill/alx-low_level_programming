#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */

size_t listint_len(const listint_t *h)
{
     size_t nod = 0;
     while (h)
     {
      nod++;
      h = h->next;
     }
   
     return (nod);
}
