/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 20:54:22 by abouzanb          #+#    #+#             */
/*   Updated: 2021/10/13 10:30:02 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int ac, char **av)
{
	int	a;
	int	b;

	a = 0;
	b = ac - 1;
	if (ac > 1)
	{
		while (b > 0)
		{
			a = 0;
			while (av[b][a] != '\0')
			{
				write(1, &av[b][a], 1);
				a++;
			}
			write(1, "\n", 1);
			b--;
		}
	}
}
