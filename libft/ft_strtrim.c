/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalikhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 00:48:38 by aalikhan          #+#    #+#             */
/*   Updated: 2019/10/06 00:48:41 by aalikhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		len;
	int		i;
	char	*str;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	len = 0;
	while (s[len])
		len++;
	while (len > 0 \
	&& (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t'))
		len--;
	if ((str = (char *)malloc(sizeof(char) * len + 1)))
	{
		i = -1;
		while (++i < len)
			str[i] = s[i];
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}
