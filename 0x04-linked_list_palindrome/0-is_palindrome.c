#include"lists.h"
/**
 * is_palindrome - checks if unsigned linked list is a palindome
 * @head: pointer to the head of the list
 * 
 * Return: 1 if palindrome else 0 
 **/
int is_palindrome(listint_t **head)
{
	listint_t *new_head = *head;

	return (check(&new_head, *head));
}
/**
 * check - 
 * @inner_list: pointer to the list
 * @head: pointer to the head of the list
 * Return: 11 if true else 0 if false
 **/
int check(listint_t *inner_list[], listint_t *head)
{
	if (!head)
		return (1);
	if (check(inner_list, head->next) && (head->n == (*inner_list)->n))
		return ((*inner_list = (*inner_list)->next), 1);
	return (0);
}