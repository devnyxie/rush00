/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:29:07 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/05 15:29:11 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	rush(const int x, const int y)
{
	int	rows;
	int	columns;

	rows = 0;
	while (rows < y)
	{
		// over each row (Y)
		columns = 0;
		while (columns < x)
		{
			// over each col (X)
			if (rows == 0)
			{
				// === HANDLE (START) ===
				// first row handle
				if (columns == 0)
					ft_putchar('/');
				else if (columns == x - 1)
					ft_putchar('\\');
				else
					ft_putchar('*');
			}
			else if (rows == y - 1)
			{
				// === HANDLE (END) ===
				// last row handle
				if (columns == 0)
					ft_putchar('\\');
				else if (columns == x - 1)
					ft_putchar('/');
				else
					ft_putchar('*');
			}
			else
			{
				// // === HANDLE (EVERYTHING ELSE) ===
				// middle rows handle
				if (columns == 0 || columns == x - 1)
					ft_putchar('*');
				else
					ft_putchar(' ');
			}
			columns++;
		}
		// add a new line after each row output
		ft_putchar('\n');
		rows++;
	}
	return (0);
}
