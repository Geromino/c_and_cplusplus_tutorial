/*
 * gen_stack.h
 *
 *  Created on: 10 באפר׳ 2020
 *      Author: pinchuk
 */

#ifndef SRC_GEN_STACK_H_
#define SRC_GEN_STACK_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct stack{
	void*data;
	struct stack *next;
}global_stack;

void push(global_stack**head,void*data,int size_data);
void printList(global_stack *node, void (*fptr)(void *));
bool isEmpty_stack(global_stack *head);
void pop_stack(global_stack**head);
void printchar(void *ch);
void printInt(void *n);
void printFloat(void *f);

#endif /* SRC_GEN_STACK_H_ */
