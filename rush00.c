
void	ft_putchar(char c);
	    // 5 ,   1
	    // col , row
void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < y) // row i or y
	{
		while (j < x ) // col j or x
		{
			if (i == 0 || i == y-1)
			{
				if ((i == 0 || i == y - 1) && (j == 0 || j == x - 1))
				{
					ft_putchar('o');
				}
				else
				{
					ft_putchar('-');
				}
			}
			else
			{
				if(j == 0 || j == x - 1)
				{
					ft_putchar('|');
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
