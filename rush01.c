/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:29:07 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/05 15:56:08 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	check_output(int row, int col, int x, int y)
{
	if ((row == 1 && col == 1) || (row == y && col == x && x != 1 && y != 1))
		ft_putchar('/');
	else if ((row == 1 && col == x) || (row == y && col == 1))
		ft_putchar('\\');
	else if (row == 1 || row == y || col == 1 || col == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(const int x, const int y)
{
	int	row;
	int	col;

	if (x >= 0 || y >= 0)
	{
		row = 1;
		while (row <= y)
		{
			col = 1;
			while (col <= x)
			{
				check_output(row, col, x, y);
				col++;
			}
			ft_putchar('\n');
			row++;
		}
	}
}
