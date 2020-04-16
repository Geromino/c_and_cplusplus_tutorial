
#include "gen_stack.h"


/* Function to add a node at the beginning of Linked List.
   This function expects a pointer to the data to be added
   and size of the data type */
void push(global_stack**head,void*data,int data_size)
{
	global_stack*new_node=(global_stack*)malloc(sizeof(global_stack));

	new_node->data=malloc(data_size);
	new_node->next=(*head);

	 // Copy contents of new_data to newly allocated memory.
	    // Assumption: char takes 1 byte.
	    int i;
	    for (i=0; i<data_size; i++)
	        *(char *)(new_node->data + i) = *(char *)(data + i);

	    // Change head pointer as new node is added at the beginning
	    (*head)    = new_node;
}

bool isEmpty_stack(global_stack *head)
{
	if(head==NULL)
		return true;
	else
		return false;

}

void pop_stack(global_stack**head)
{
	global_stack*temp=*head;
	if(isEmpty_stack(*head))
	{
		printf("the stack is empty\r\n");
	}
	else
	{
		*head=(*head)->next;
		free(temp);
	}
}



/* Function to print nodes in a given linked list. fpitr is used
   to access the function to be used for printing current node data.
   Note that different data types need different specifier in printf() */
void printList(global_stack *node, void (*fptr)(void *))
{
    while (node != NULL)
    {
        (*fptr)(node->data);
        node = node->next;
    }
}

// Function to print an char

void printchar(void *ch)
{
	printf("%c",*(char*)ch);
}


// Function to print an integer
void printInt(void *n)
{
   printf(" %d", *(int *)n);
}

// Function to print a float
void printFloat(void *f)
{
   printf(" %f", *(float *)f);
}

