#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
    const dlistint_t *current;
    size_t count = 0;

    for (current = h; current != NULL; current = current->next)
    {
        count++;
    }

    return count;
}
