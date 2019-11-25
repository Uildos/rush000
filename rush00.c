/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 10:35:22 by usoares-          #+#    #+#             */
/*   Updated: 2019/11/24 22:15:50 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	fill_border(int k, int l, int z, int w)
{
	if ((k == 0 || k == z - 1) && (l == 0 || l == w - 1))
	{
		if ((k == 0 && !(l == w - 1)) || (k == z - 1 && l == w - 1)) 
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('\\');
		}
	}
	else
	{
		ft_putchar('*');
	}
}

void	rush(int y, int x)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < x)
	{
		while (j < y)
		{
			if ((i == 0) || (j == 0) || (i == x - 1) || (j == y - 1))
			{
				fill_border(i, j, x, y);
			}
			else
			{
				ft_putchar(' ');
			}
			j = j + 1;
		}
		i = i + 1;
		j = 0;
		ft_putchar('\n');
	}
}
