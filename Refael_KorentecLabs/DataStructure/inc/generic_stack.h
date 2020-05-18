#ifndef INC_GENERIC_STACK_H_
#define INC_GENERIC_STACK_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

typedef struct trade_prediction_stack {
	  void * data;
	  struct trade_prediction_stack *next;
}trade_list_stack;

typedef void (print_trade_prediction_items)(void*);

void push_gen_tarde(trade_list_stack**head,void*data,int size_casting);

void print_trade_list(trade_list_stack*head,print_trade_prediction_items*func);

void print_trade_item(void *data);

#endif /* INC_GENERIC_STACK_H_ */
