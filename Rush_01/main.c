/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <anferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 19:52:23 by anferrei          #+#    #+#             */
/*   Updated: 2021/04/12 02:36:14 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		erros(char *entrada);
void	rush01(char *entrada);

int		main(int c, char *v[1])
{
	int i;
	int j;
	int erro_char;
	char *entrada;

	i = 0;
	j = 0;
	erro_char = 1;

	while (v[1][i] != '\0')
		i++;

	i = (i / 2) + 1;

	if(i == 16)
	{
		entrada = (char *) malloc(i);
		i = 0;

		while (v[1][i] != '\0')
		{
		if(i % 2 == 0)
		{
			entrada[j] = v[1][i];
			if(entrada[j] < '1' || entrada[j] > '4')
			erro_char = 0;
			j++;
		}
		i++;
		}

		entrada[j]= '\0';

		if(erros(entrada) == 1 && erro_char == 1)
			rush01(entrada);

		else
			write(1, "Error\n", 6);

		free(entrada);
	}
	else
		write(1, "Error\n", 6);

	return (0);
}
