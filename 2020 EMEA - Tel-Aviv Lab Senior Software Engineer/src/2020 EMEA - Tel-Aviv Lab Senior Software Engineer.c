/*
 ============================================================================
 Name        : 2020.c
 Author      : zachar papkov
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define NEGATIVE_VALUE 0
#define FIRST_ELEMENT_IN_ARRAY 0
typedef struct {
	int cc,ee,mm;
}node_t;

node_t arr[512];

int arrl[]={-2,3,1,-5};
int minX(int arr_count, int* arr);
void fizzBuzz(int n);
int stam(char*str_a,char*str_b);

int main(void) {
//	puts("2020 EMEA - Tel-Aviv Lab Senior Software Engineer"); /* prints 2020 EMEA - Tel-Aviv Lab Senior Software Engineer */

  //printf("%d",stam("ababcccbbffc","abcdef"));

//	fizzBuzz(15);

	minX(4,arrl);

	return EXIT_SUCCESS;
}


int stam(char*str_a,char*str_b)
{
	int k;
	for(k=0;k<sizeof(arr)/sizeof(*arr);k++)
	{
		arr[k].cc=0;
		arr[k].ee=-1;
		arr[k].mm=-1;
	}

	char *i=str_a;

	while(*i)
	{
		arr[*i-'a'].cc++;
		if(arr[*i-'a'].ee==-1)
		{
			arr[*i-'a'].ee=i-str_a;
		}

		arr[*i-'a'].mm=i-str_a;
		i++;
	}

	int j,n=0;

	for(j=0;str_b[j];j++){
		n+=arr[str_b[j]-'a'].cc;
	}

	return n;
}






/*
 * @brief  check if numbers in range 1 to n devided  only by 3 or 5 or both or either
 * @param  number uplimit of the range include
 * @retval None
 */

void fizzBuzz(int n) {

    int cnt_range_in_number=0;
    //scan numbers in range <=n
    for (cnt_range_in_number=1;cnt_range_in_number<=n;cnt_range_in_number++)
    {
        if (cnt_range_in_number%3==0 && cnt_range_in_number%5==0) // spefific number devide by 3 and 5
        {
            printf("FizzBuzz\r\n");
        }
        else if(cnt_range_in_number%3==0 && cnt_range_in_number%5!=0)
        {
            printf("Fizz\r\n");
        }
        else if(cnt_range_in_number%3!=0 && cnt_range_in_number%5==0)
        {
          printf("Buzz\r\n");
        }
        else if (cnt_range_in_number%3!=0 && cnt_range_in_number%5!=0)
        {
            printf(" %d\r\n",cnt_range_in_number);
        }

    }

}


int minX(int arr_count, int* arr) {
    int min_start_value,cnt_element=0,sum_elemet_array=0;

    if (arr[FIRST_ELEMENT_IN_ARRAY]<NEGATIVE_VALUE)
    {
    	min_start_value=abs(arr[FIRST_ELEMENT_IN_ARRAY]);
    }
    else
    {
    	min_start_value=arr[FIRST_ELEMENT_IN_ARRAY];
    }

    sum_elemet_array+=min_start_value;

    for (cnt_element=0;cnt_element<arr_count;cnt_element++)
    {
        sum_elemet_array+=arr[cnt_element];
        while(sum_elemet_array<1)
        {
        	min_start_value++;
        	sum_elemet_array++;
        }
    }



    return min_start_value;
}




