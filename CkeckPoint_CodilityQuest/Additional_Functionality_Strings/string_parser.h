/*
 * string_parser.h
 *
 *  Created on: 6 באפר׳ 2020
 *      Author: pinchuk
 */

#ifndef STRING_PARSER_H_
#define STRING_PARSER_H_

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#define SPACE 0x20
#define END_OF_STRING '\0'
#define NUMBER_OFSPACE_CHARCTHERS_INSTRING 20
#define EXPECTED_SPACE_IN_TESTSTRING 4

char * unique_substring(char * string, int len_substring);
uint8_t storage_address_pointers_pointto_space(char * string, unsigned char *address_pointers);
void print_character_string(char *string);
int str_len(char *string);

typedef struct _position_words_instring{
    uint8_t start_pos;
    uint8_t end_pos;
}position_words_instring;

void update_words_ranges(position_words_instring *data,uint8_t *pos_space_instring);



#endif /* STRING_PARSER_H_ */
