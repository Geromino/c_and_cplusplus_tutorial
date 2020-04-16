/*
 ============================================================================
 Name        : LInkedList.c
 Author      : zachar papkov
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <reaarange_color_in_array.h>
#include "gen_stack.h"
#include "bracket.h"
#include <stack.h>
#include <stdio.h>
#include <stdlib.h>
#include  <time.h>
userlist *Lottery=NULL;
userlist*rev=NULL;
global_stack *start = NULL;
int user_app=3;
//uint32_t test_ball[]={3,1,3,2,3,1,1,1,1,2,3,1,1,3,3};
char braket[]="[({})}";
unsigned int_size = sizeof(int);
int arr[] = {10, 20, 30, 40, 50}, i;
char open_type[]={'[','(','{','\0'};
int char_size=sizeof(char);
char close_type[]={']',')','}','\0'};
int main(void) {

	int lower = 1, upper = 3, count = NUMBER_OF_ITEM_IN_ARRAY_BALOON;

	switch(user_app)
	{
	  case  1:
		  insert_list(&Lottery,4,PUSH_ITEM_END_OF_THE_LIST);
		  insert_list(&Lottery,7,PUSH_ITEM_END_OF_THE_LIST);
		  insert_list(&Lottery,13,PUSH_ITEM_END_OF_THE_LIST);
		  print_list(Lottery);
		  reverse(&Lottery);
		  printf("======================================================\r\n");
		  print_list(Lottery);

		  break;
	  case  2:
		  srand(time(0));
		  fill_array_with_rnd_numbers(lower, upper, count,ball);
		  rearrange_element_array_inspesific_order(ball);
		//  print_user_ball_array(ball);
		  update_list_green_item_end(ball);
		  print_user_ball_array(ball);
		  break;

	  case 3:

		  if(check_braket_expression(braket)==true)
		  {
			  printf("bracket expression define well\r\n");
		  }
		  else
		  {
			  printf("bracket expression define wrong\r\n");
		  }

		break;

	  case 4:


		      for (i=3; i>=0; i--)
		         push(&start, &open_type[i], char_size);
		      printf("Created integer linked list is \n");
		      printList(start, printchar);
		      pop_stack(&start);
		      printList(start, printchar);
		  break;
	}






	return EXIT_SUCCESS;
}
