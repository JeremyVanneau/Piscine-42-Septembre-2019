/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanneau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 19:17:16 by jvanneau          #+#    #+#             */
/*   Updated: 2019/09/01 10:45:59 by jvanneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char u, char d, char c)
{
	write(1, &u, 1);
	write(1, &d, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int u;
	int d;
	int c;

	u = 0;
	d = 1;
	c = 2;
	while (u <= 7)
	{
		while (d <= 8)
		{
			while (c <= 9)
			{
				ft_putchar(u + 48, d + 48, c + 48);
				if (u != 7)
					write(1, ", ", 2);
				c++;
			}
			d++;
			c = d + 1;
		}
		u++;
		d = u;
	}
}
