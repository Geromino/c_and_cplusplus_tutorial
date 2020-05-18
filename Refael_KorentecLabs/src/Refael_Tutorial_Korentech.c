/*
 ============================================================================
 Name        : Refael_Tutorial_Korentech.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "generic_stack.h"



int main(void) {


	trade_list_stack *head=NULL;
    int test_gen_data=0x00008877;
    int test_gen_data1=0x00008844;
    unsigned int_size = sizeof(int);
    push_gen_tarde(&head,&test_gen_data,int_size);
    push_gen_tarde(&head,&test_gen_data1,int_size);
    print_trade_list(head,print_trade_item);



	return EXIT_SUCCESS;
}


