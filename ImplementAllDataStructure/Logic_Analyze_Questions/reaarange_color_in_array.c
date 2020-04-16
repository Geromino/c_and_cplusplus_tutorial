/*
 * Logic_Quiz.c
 *
 *  Created on: 7 באפר׳ 2020
 *      Author: pinchuk
 */

#include <reaarange_color_in_array.h>

uint32_t ball[NUMBER_OF_ITEM_IN_ARRAY_BALOON];

/**
 * @brief  fill_array_with_rnd_numbers
 * @param  lower limit random number
 * @param  upper limit random number
 * @param  point to array  , array which user provide
 * @retval None
 */


void fill_array_with_rnd_numbers(int lower, int upper, int count,uint32_t *user_ball_array)
{
    int cnt_user_ball_array;
    for (cnt_user_ball_array = 0; cnt_user_ball_array < count; cnt_user_ball_array++) {
        int random_number_fill_ballarray = (rand() %
           (upper - lower + 1)) + lower;
        *(user_ball_array+cnt_user_ball_array)=random_number_fill_ballarray;

#ifdef DEBUG_LEVEL_ONE_MESSAGES
        switch(*(user_ball_array+cnt_user_ball_array))
        {
        	case RED: printf("RED \t"); /*printf("index %d RED %d \r\n",cnt_user_ball_array,user_ball_array[cnt_user_ball_array])*/;break;

        	case YELLOW:printf("YELLOW\t");/*printf("index %d YELLOW %d \r\n",cnt_user_ball_array,user_ball_array[cnt_user_ball_array])*/;break;

        	case GREEN :printf("GREEN\t");/*printf("index %d GREEN %d \r\n",cnt_user_ball_array,user_ball_array[cnt_user_ball_array]);*/break;
        }
#endif

    }
}

void rearrange_element_array_inspesific_order(uint32_t *user_ball_array)
{
	uint32_t * begin_poiner_ball=user_ball_array; // default red pointer point to first element in user ball array
    uint32_t * end_pointer_ball=user_ball_array+NUMBER_OF_ITEM_IN_ARRAY_BALOON-1;

    while(begin_poiner_ball!=end_pointer_ball) // untill all array scan for searching RED
    {
    	if(*begin_poiner_ball==RED) //
    	{
    		begin_poiner_ball++; // moving forward  until RED stop show in Array
    	}
    	else
    	{
        	if(*end_pointer_ball!=RED) //
        	{
        		end_pointer_ball--;

        	}
        	else
        	{
        		swap_elememt_in_array(begin_poiner_ball,end_pointer_ball);
        	}

    	}
    }

}


void update_list_green_item_end(uint32_t *user_ball_array)
{
	uint32_t * begin_poiner_ball=user_ball_array; // default red pointer point to first element in user ball array
    uint32_t * end_pointer_ball=user_ball_array+NUMBER_OF_ITEM_IN_ARRAY_BALOON-1;

    while(begin_poiner_ball!=end_pointer_ball) // untill all array scan for searching RED
    {
    	if(*begin_poiner_ball!=GREEN) //
    	{
    		begin_poiner_ball++; // moving forward  until RED stop show in Array
    	}
    	else
    	{
        	if(*end_pointer_ball==GREEN) //
        	{
        		end_pointer_ball--;

        	}
        	else
        	{
        		swap_elememt_in_array(begin_poiner_ball,end_pointer_ball);
        	}

    	}
    }

}


void swap_elememt_in_array(uint32_t *item1,uint32_t *item2)
{
	uint32_t swap;

	swap=*item1;
	*item1=*item2;
	*item2=swap;

}

void print_user_ball_array(uint32_t *user_array)
{
	int cnt_array_element=0;

	for (cnt_array_element=0;cnt_array_element<14;cnt_array_element++)
	{
	    switch(*(user_array+cnt_array_element))
	        {
	        	case RED: printf("RED \t"); /*printf("index %d RED %d \r\n",cnt_user_ball_array,user_ball_array[cnt_user_ball_array])*/;break;

	        	case YELLOW:printf("YELLOW\t");/*printf("index %d YELLOW %d \r\n",cnt_user_ball_array,user_ball_array[cnt_user_ball_array])*/;break;

	        	case GREEN :printf("GREEN\t");/*printf("index %d GREEN %d \r\n",cnt_user_ball_array,user_ball_array[cnt_user_ball_array]);*/break;
	        }

	}

	printf("\r\n");
}
