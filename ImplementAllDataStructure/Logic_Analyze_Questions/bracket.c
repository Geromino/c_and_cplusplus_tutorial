#include "bracket.h"
#include "gen_stack.h"

global_stack *bracket_exp=NULL;


bool check_braket_expression(char *braket_expression)
{

	char open_type[]={'[','(','{','\0'};
	char close_type[]={']',')','}','\0'};
	int char_size=sizeof(char);
	char *hold_braket_exp=braket_expression;

	while(*hold_braket_exp!='\0')
	{


		if (is_type(open_type,*hold_braket_exp)==true)
		{
			push(&bracket_exp,&*hold_braket_exp,char_size);
		}
		else if (is_type(close_type,*hold_braket_exp)==true)
		{
			pop_stack(&bracket_exp);

		}

		hold_braket_exp++;
	}

	if (isEmpty_stack(bracket_exp))
	 return true;
	else
		return false;
}

bool is_type(char *type,char item)
{
	bool res=false;

	while(*type!='\0')
	{
		if (*type==item)
		 res= true;
		type++;
	}

	return res;

}
