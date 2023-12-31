/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 21:37:47 by abouzanb          #+#    #+#             */
/*   Updated: 2021/10/04 12:04:43 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	h;

	h = 0;
	while (s1[h] != '\0' && s2[h] != '\0' && s1[h] == s2[h])
		h++;
	return (s1[h] - s2[h]);
}
