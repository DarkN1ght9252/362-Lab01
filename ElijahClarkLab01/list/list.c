/**
* Name: Elijah Clark
* Lab/task: Lab 1
* Date: 02/01\\/20
**/
#include "list.h"

void allocate_list(LIST **list, int count)
{
   if (count == 0)
   {
      return;
   }

   *list = (LIST*)malloc(sizeof(LIST));
   allocate_list(&((*list)->next), --count);

}

void free_list_iter(LIST *head)
{
   while (head != NULL)
   {
      LIST *next = head->next;
      if (head->data != NULL)
         free(head->data);

      head = next;
   }
}

void free_list_emb(LIST *head)
{
   LIST *curr = head;

   if (curr->next)
      free_list_emb(curr->next);

   if (head->data != NULL)
      free(curr->data);

}

void free_list_tail(LIST *head)
{
   if (head == NULL)
      return;

   LIST *next = head->next;

   if (head->data != NULL)
      free(head->data);

   free_list_tail(next);
}

