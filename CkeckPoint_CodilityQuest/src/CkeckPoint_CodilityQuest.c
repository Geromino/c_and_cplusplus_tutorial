/*
 ============================================================================
 Name        : CkeckPoint_CodilityQuest.c
 Author      : zachar papkov
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "string_parser.h"

int main(void) {
    int len_substring=23;
    char  *result_unqiue_substring;
    char exmple_sentence[]="zachar trying prepare to checkpoint test";
    result_unqiue_substring=unique_substring(exmple_sentence,len_substring);
    printf("%s",result_unqiue_substring);
    free(result_unqiue_substring);
	return EXIT_SUCCESS;
}
