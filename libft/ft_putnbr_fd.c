/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalikhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 03:37:28 by aalikhan          #+#    #+#             */
/*   Updated: 2019/10/03 03:37:31 by aalikhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];
	int		i;

	str[0] = (n < 0) ? '-' : 0;
	str[11] = '\0';
	str[10] = '0';
	i = (n == 0) ? 10 : 11;
	while (i > 0 && n != 0)
	{
		str[--i] = (n % 10) * ((n < 0) ? -1 : 1) + '0';
		n /= 10;
	}
	if (str[0] == '-')
		str[--i] = '-';
	ft_putstr_fd(str + i, fd);
}
