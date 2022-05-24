#include "lists.h"



/**

 * sum_listint - Calculates the sum of all the

 *               data (n) of a listint_t list.

 * @head: A pointer to the head of the listint_t list.

 *

 * Return: If the list is empty - 0.

 *         Otherwise - the sum of all the data.

 */

int sum_listint(listint_t *head)

{

	int sumall = 0;



	while (head)

	{

		sumall += head->n;

		head = head->next;

	}



	return (sumall);

}


