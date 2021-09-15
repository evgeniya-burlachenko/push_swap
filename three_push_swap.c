#include "push_swap.h"

void sort_three(t_arr *a_arr, t_data *data)
{
	//0>1 && 0>2
	if(a_arr[0].num > a_arr[1].num && a_arr[0].num > a_arr[2].num) // 0-7 1 -5 2 - 4
	{
		if(a_arr[1].num > a_arr[2].num)// 1>2 
		{
			sa(a_arr, data, 1);// поменять местами 1ые 2 эл-та 102 (574)
			rra(a_arr, data, 1);//последний первым 210(457)
		}
		else if (a_arr[1].num < a_arr[2].num)//1<2 (725)
			ra(a_arr, data, 1);//1ый последним(275)
	}


else if (a_arr[0].num > a_arr[1].num && a_arr[0].num < a_arr[2].num)//0> 1 0<2 547
	sa(a_arr, data, 1);// поменять местами 457
else if (a_arr[0].num < a_arr[1].num && a_arr[0].num < a_arr[2].num)//275
{
	sa(a_arr, data, 1);//725
	ra(a_arr, data, 1);//257
}
else if (a_arr[0].num < a_arr[1].num && a_arr[0].num > a_arr[2].num)//(572)5<7 5>2
	rra(a_arr, data, 1);//257
	
}