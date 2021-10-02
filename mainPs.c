#include "push_swap.h"

void mainInstruction(t_arr *a_arr, t_arr *b_arr, t_info *data)
{
	if(data ->a_len == 2)
		sa(a_arr, data, 1);
	else if(data -> a_len == 5)
		sortedFive(a_arr,b_arr, data);
	else if(data -> a_len == 4)
		sortedFour(a_arr, b_arr, data);
	else if(data -> a_len == 3)
		sortedThree(a_arr, data);
	else
		push_swap(a_arr, b_arr, data);
	if (bubbleSorting(a_arr, data->a_len))
	{
		freeAll(a_arr, b_arr, data);
		exit(0);
	}
	

}

int main(int argc, char **argv)
{
	int		i;
	t_arr	*a_arr;
	t_arr	*b_arr;
	t_info	*data;

	data = malloc(sizeof(t_info));
	if(!data)
		return(0);
	checkArgcArgv(argc, argv);
	a_arr = newArray(argc);
	b_arr = newArray(argc);
	i = 0;
	while(i < argc && argv[i + 1])
	{
		a_arr[i].value = atoiPs(argv[i + 1]);
		a_arr[i].i = -1;
		a_arr[i].flag = 'n';
		i++;
	}
	indexArray(a_arr, data, argc - 1);
	// if (bubbleSorting(a_arr, argc - 1))
	// {
	// 	freeAll(a_arr, b_arr, data);
	// 	exit(0);
	// }
	mainInstruction(a_arr, b_arr, data);
	// 	int l = 0;
	// int z = 0;
	// 	while ( l < data->a_len)
	// 	{
	// 	printf("a:%d\n", a_arr[l].value );

	// 		l++;
	// 	}
	// 		while ( z < data->b_len)
	// 	{
	// 	printf("b:%d\n", b_arr[z].value );

	// 		z++;
	// 	}
	return (0);
 }
