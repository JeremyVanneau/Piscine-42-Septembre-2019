/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanneau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 10:36:41 by jvanneau          #+#    #+#             */
/*   Updated: 2019/09/01 19:55:08 by jvanneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	a;
	long			b;

	if (nb < 0)
	{
		ft_putchar('-');
		a = -nb;
	}
	else
		a = nb;
	if (a > 9)
		ft_putnbr(a / 10);
	b = a % 10 + 48;
	ft_putchar(b);
}
