/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:50:20 by abouzanb          #+#    #+#             */
/*   Updated: 2021/10/13 10:28:29 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int ac, char **av)
{
	int	a;

	a = 0;
	if (ac >= 1)
	{
		while (av[0][a])
		{
			write(1, &av[0][a], 1);
			a++;
		}
	}
	write(1, "\n", 1);
}
