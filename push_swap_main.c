#include "push_swap.h"

void basic_instruction(t_arr *a_arr, t_arr *b_arr, t_data *data, int len)
{
	if(data->a_len == 2)
		sa(a_arr, data, 1); //поменять местами
	else if(data->a_len == 3)
		sort_three(a_arr, data);
	else
		push_swap(a_arr, b_arr, data);
	if(bubble_sorted(a_arr, len)) //если len == 1 или 0, все чистим и выходим из программы
	{
		all_free(a_arr, b_arr, data);
		exit(0);
	}
}

int main(int argc, char **argv)
{
	int i;
	t_arr	*a_arr; // переменные со структурой для стека a
	t_arr	*b_arr; // для стека b
	t_data	*data;	

	data = malloc(sizeof(t_data)); //
	if(!data)
		return(0);
	error_utils(argc, argv);
	a_arr = new_array(argc);
	b_arr = new_array(argc);
	i = 0;
	while (i < argc && argv[i + 1])//считываю строку+пробел и записываю в стек
	{
		//инициализирую структуру
		a_arr[i].num = atoi_push_swap(argv[i + 1]);//сами цифры
		a_arr[i].i = -1;//индекс?
		a_arr[i].flag = 'n';//??
		i++;
	}

	index_array(a_arr, data, argc - 1);

	if(bubble_sorted(a_arr, argc - 1))//передаю стек a и размер стека a( -1 - name programms)
		return (0);//если true длина равна 1 или 0 возвращаю 0
	basic_instruction(a_arr, b_arr, data, argc - 1);
	return(0);

}







