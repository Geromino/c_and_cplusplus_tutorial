/*
 * string_parser.c
 *
 *  Created on: 6 באפר׳ 2020
 *      Author: pinchuk
 */


#include "string_parser.h"



char * unique_substring(char * string, int len_substring)
{
    char empty_string_restrict_rule[]="the substring is empty\r\n";
    char * result_substring_apply_restrict;
    char * substring;
    substring=string;  // new substring is point  to original string
    result_substring_apply_restrict = malloc (sizeof (char) * str_len(string));
    memset(result_substring_apply_restrict,0,str_len(string));
    uint8_t n_space_instring;
    uint8_t space_position_instring[NUMBER_OFSPACE_CHARCTHERS_INSTRING];
    n_space_instring=storage_address_pointers_pointto_space(string,space_position_instring);
    position_words_instring words_range_instring[6];
    update_words_ranges(words_range_instring,space_position_instring);
    int limup=0, limsup=0;

    for (int cnt_check_ranges_for_lensubstring=0;cnt_check_ranges_for_lensubstring<n_space_instring;cnt_check_ranges_for_lensubstring++)
   {
      limsup=words_range_instring[cnt_check_ranges_for_lensubstring].start_pos;
      limup=words_range_instring[cnt_check_ranges_for_lensubstring].end_pos;

      if (len_substring>limsup && len_substring<=limup)
        {
            if (len_substring<words_range_instring[0].end_pos)
            {
                memcpy(result_substring_apply_restrict,empty_string_restrict_rule,str_len(empty_string_restrict_rule));
            }
            else{
                memcpy(result_substring_apply_restrict,substring,words_range_instring[cnt_check_ranges_for_lensubstring-1].end_pos);

            }
        }
   }

    return result_substring_apply_restrict;
}


void print_character_string(char *string)
{
	int place=0;
    while(*string!=END_OF_STRING)
    {
        printf("index = [%d] character= [%c]\r\n",place,*string);
        place++;
        string++;
    }
}

int str_len(char *string)
{
    int len_str;

    char *temp_string=string;

    if (string==NULL)
          return 0;

    while(*temp_string!=END_OF_STRING)
    {
        len_str++;
        temp_string++;
    }

    return len_str;
}



void update_words_ranges(position_words_instring *data,uint8_t *pos_space_instring)
{

   for (int cnt_update_list_ranges=0;cnt_update_list_ranges<5;cnt_update_list_ranges++)
    {
        data[cnt_update_list_ranges].start_pos=pos_space_instring[cnt_update_list_ranges];
        data[cnt_update_list_ranges].end_pos=pos_space_instring[cnt_update_list_ranges+1];
    }

    for (int cnt_range_words=0;cnt_range_words<5;cnt_range_words++)
     {
#ifdef DEBUG_PRIVATE_FUNC
        printf("rng_words in string [%d,%d]\r\n",data[cnt_range_words].start_pos,data[cnt_range_words].end_pos);
 #endif
     }
}

uint8_t storage_address_pointers_pointto_space(char * string, uint8_t *address_pointers)
{
    int cnt_nspace_instring=0;
    int cnt_position_char_instring=1;

    // initialize address pointers  first element is zero
     address_pointers[cnt_nspace_instring++]=0;

    while(*string!=END_OF_STRING)
    {
        if(*string==SPACE)
        {
            address_pointers[cnt_nspace_instring]=cnt_position_char_instring; // save sapce position in string
#ifdef DEBUG_PRIVATE_FUNC
            printf("space_pos %d \t",cnt_position_char_instring);
#endif
            cnt_nspace_instring++;
        }
    string++; // moving forward address to next byte
    cnt_position_char_instring++; // respectvly moving position absolute address in given string
    }

    return cnt_nspace_instring;
}
