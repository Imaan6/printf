/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:56:04 by iel-moha          #+#    #+#             */
/*   Updated: 2021/12/13 11:03:38 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_n(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
		return (i = 11);
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		write (1, "-", 1);
		n = nb * -1;
	}
	else
	{
		n = nb;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
	else if (n < 10)
	{
		ft_putchar(n + 48);
	}
	return (len_n(nb));
}
/*#include <stdio.h>
int main()
{
	int	i;
	i = ft_putnbr(0);
	printf("\n%d", i);
}*/
