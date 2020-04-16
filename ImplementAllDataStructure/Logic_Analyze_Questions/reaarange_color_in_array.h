/*
 * logic_quiz.h
 *
 *  Created on: 7 באפר׳ 2020
 *      Author: pinchuk
 */

#ifndef REAARANGE_COLOR_IN_ARRAY_H_
#define REAARANGE_COLOR_IN_ARRAY_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#define NUMBER_OF_ITEM_IN_ARRAY_BALOON 15

//#define DEBUG_LEVEL_ONE_MESSAGES


typedef enum {
	RED=1,
	YELLOW,
	GREEN
}ball_color;

extern uint32_t ball[NUMBER_OF_ITEM_IN_ARRAY_BALOON];

void fill_array_with_rnd_numbers(int lower, int upper, int count,uint32_t *user_ball_array);
void rearrange_element_array_inspesific_order(uint32_t *user_ball_array);
void swap_elememt_in_array(uint32_t *item1,uint32_t *item2);
void print_user_ball_array(uint32_t *user_array);
void update_list_green_item_end(uint32_t *user_ball_array);

#endif /* REAARANGE_COLOR_IN_ARRAY_H_ */
