/*
 * LinkedList.h
 *
 *  Created on: 6 באפר׳ 2020
 *      Author: pinchuk
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

typedef enum {
	PUSH_ITEM_BEGIN_OF_THE_LIST,
	PUSH_ITEM_END_OF_THE_LIST
}method_insert_item_to_list;

typedef struct list{
	int data;
	struct list *next;
}userlist;


userlist *Lottery;

void insert_list(userlist**head,int data,uint8_t push_begin_end);
void delete_last_item(userlist*head);
void print_list(userlist*head);
userlist* reverse_list(userlist*head);
void reverse(userlist** head_ref);
bool isEmpty(userlist*head);
void pop(userlist **head);

#endif /* LINKEDLIST_H_ */
