/*
 * linkedlist.c
 *
 *  Created on: 6 באפר׳ 2020
 *      Author: pinchuk
 */

#include "stack.h"

void insert_list(userlist**head,int data,uint8_t push_begin_end)
{
	userlist * item;
	userlist * runnner_list=*head;
	//alocation  for new item
	item=(userlist*)malloc(sizeof(userlist));

	if (item==NULL)
	{
		printf("allocation for item failed ");
	}
	else
	{
		//init new item
		item->data=data;
      if (push_begin_end==PUSH_ITEM_BEGIN_OF_THE_LIST)
      {
			if (*head==NULL)
			{

				*head=item;
				item->next=NULL;

			}
			else // insert in the beggin of the list
			{
				item->next=*head; // link new item to beggin of the list
				*head=item;
			}
      }
      else if (push_begin_end==PUSH_ITEM_END_OF_THE_LIST)
      {

    	  if (*head==NULL)
    	  			{

    	  				*head=item;
    	  				item->next=NULL;

    	  			}
    	  else
    	  {

    	  while(runnner_list->next!=NULL)
    	  {
    		  runnner_list=runnner_list->next;
    	  }// end of the list

    	  item->next=NULL;
    	  runnner_list->next=item;
    	  }

      }

}
}

void print_list(userlist*head)
{
	userlist* temp_head=head;
	int pos_item_inlist=1;

	while(temp_head!=NULL)
	{
		printf("[%d , %d]\t\t",pos_item_inlist,temp_head->data);
		pos_item_inlist++;
		temp_head=temp_head->next;
	}
	printf("\r\n");
}

int count_item_on_thelist(userlist*head)
{
	int number_items=0;
	userlist *runlist=head;

	while(runlist!=NULL)
	{
		runlist=runlist->next;
		number_items++;
	}

	return number_items;
}

void delete_last_item(userlist*head)
{
	userlist *todelete=head;
	userlist *slastdelet=head;

	if (head==NULL)
	{
		printf("nothing to delete \r\n");
	}
	else
	{

    while(todelete->next!=NULL)
    {
    	slastdelet=todelete;
    	todelete=todelete->next;
    }

    if(todelete==slastdelet)
    {
    	head=NULL;
    }
    else
    {
    	slastdelet->next=NULL;
    }
    free(todelete);
	}

}

userlist* reverse_list(userlist*head)
{
	userlist* rev=NULL;
	userlist *temp=head;
	while(temp!=NULL)
	{
		insert_list(&rev,temp->data,PUSH_ITEM_BEGIN_OF_THE_LIST);
		temp=temp->next;

	}
	return rev;

}


/* Function to reverse the linked list */
 void reverse(userlist** head_ref)
{
	 userlist* prev = NULL;
	 userlist* current = *head_ref;
	 userlist* next = NULL;
    while (current != NULL) {
        // Store next
        next = current->next;

        // Reverse current node's pointer
        current->next = prev;

        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

bool isEmpty(userlist*head)
{
	if (head==NULL)
		return true;
	else
		return false;
}

void pop(userlist **head)
{
	userlist *temp=*head;
	if(isEmpty(head))
	{
		printf("the stack is empty\r\n");
	}
	else
	{
		head=(*head)->next;
		free(temp);

	}

}
