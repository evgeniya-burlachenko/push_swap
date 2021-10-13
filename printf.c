int	l = 0;
int	z = 0;
while (l < data->a_len)
{
	printf("a:%d\n", a_arr[l].value)
	l++;
}
while (z < data->b_len)
{
	printf("b:%d\n", b_arr[z].value);
	z++;
}
//-fsanitize=address -g
//leaks --atExit -- 
