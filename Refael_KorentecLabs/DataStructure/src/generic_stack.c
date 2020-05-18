#include "generic_stack.h"

void push_gen_tarde(trade_list_stack**head,void*data,int data_size)
{
	trade_list_stack* item=(trade_list_stack*)malloc(sizeof(trade_list_stack));
	int count_data_size;

	item->data=malloc(data_size);
	for(count_data_size=0;count_data_size<data_size;count_data_size++)
		*(uint8_t*)(item->data+count_data_size)=*(uint8_t*)(data+count_data_size);

	if(*head==NULL)
	{
		item->next=NULL;
		*head=item;
	}
	else
	{
	    item->next=*head;
		*head=item;
	}
}

void print_trade_list(trade_list_stack*head,print_trade_prediction_items * func)
{
	trade_list_stack*temp=head;
	while(temp!=NULL)
	{
		func(temp->data);
		temp=temp->next;
	}
}

void print_trade_item(void *data)
{
	printf("data %d",*(int*)data);
}
