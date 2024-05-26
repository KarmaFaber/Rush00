/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubal-c <mrubal-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:46:13 by mrubal-c          #+#    #+#             */
/*   Updated: 2024/05/25 16:42:21 by mrubal-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, char left, char mid, char right);

void	rush(int x, int y)
{
	int	row;

	row = 1;
	if (x > 0 && y > 0)
	{
		ft_putchar(x, 'o', '-', 'o');
		write (1, "\n", 1);
	}
	while (x > 0 && row < y - 1)
	{
		ft_putchar(x, '|', ' ', '|');
		write (1, "\n", 1);
		row++;
	}	
	if (y > 1)
	{
		ft_putchar(x, 'o', '-', 'o');
		write (1, "\n", 1);
	}
}
