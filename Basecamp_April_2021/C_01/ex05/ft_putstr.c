/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcristin <lcristin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 04:38:01 by lcristin          #+#    #+#             */
/*   Updated: 2021/04/16 18:13:55 by lcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int text;

	text = 0;
	while (str[text] != '\0')
	{
		write(1, &str[text], 1);
		text++;
	}
}