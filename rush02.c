void	ft_putchar(char c);
	    // 5 ,   1
	    // col , row
void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (i < y) // row i or y
	{
		while (j < x ) // col j or x
		{
			if (i == 0 )
			{
				if ( (j == 0) || (j == x - 1))
				{
					ft_putchar('A');
				}
				else
				{
					ft_putchar('B');
				}
			}
			else if (i == y -1 )
			{
				if ((j == 0) || (j == x - 1))
				{
					ft_putchar('C');
				}
				else
				{
					ft_putchar('B');
				}	
			}
			else
			{
				if(j == 0 || j == x - 1)
				{
					ft_putchar('B');
				}
				else
				{
					ft_putchar(' ');
				}
			}
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
