/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:09:50 by alconcei          #+#    #+#             */
/*   Updated: 2026/11/02 15:09:51 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	int		len;

	nb = n;
	len = ft_len(nb);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		res[0] = '0';
	while (nb > 0)
	{
		len--;
		res[len] = nb % 10 + '0';
		nb /= 10;
	}
	return (res);
}

/*#include <stdio.h>

char		*ft_itoa(int n);

int	main(void)
{
	int tests[] = {0, 5, -5, 42, -42, 1000, INT_MAX, INT_MIN};
	char *str;
	int i;

	i = 0;
	while (i < 8)
	{
		str = ft_itoa(tests[i]);
		printf("\"%s\"\n", str);
		free(str);
		i++;
	}
	return (0);
}*/