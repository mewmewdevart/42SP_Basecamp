/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:29:04 by veduardo          #+#    #+#             */
/*   Updated: 2021/04/04 22:02:59 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	c);

void	first_line(int line)
{
	ft_putchar('A');
	while (line > 2)
	{
		ft_putchar('B');
		line--;
	}
	if (line == 2)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	middle_line(int line)
{
	ft_putchar('B');
	while (line > 2)
	{
		ft_putchar(' ');
		line--;
	}
	if (line == 2)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	last_line(int line)
{
	ft_putchar('C');
	while (line > 2)
	{
		ft_putchar('B');
		line--;
	}
	if (line == 2)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0)
	{
		if (y > 0)
		{
			first_line(x);
		}
		while (y > 1)
		{
			if (y == 2)
			{
				last_line(x);
			}
			else
			{
				middle_line(x);
			}
			y--;
		}
	}
}
