/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:37:13 by alconcei          #+#    #+#             */
/*   Updated: 2026/11/05 15:33:20 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

/*#include <stdio.h>
#include "ctype.h"

int	main(void)
{
	printf("result: %d\n", ft_isdigit('0'));
	printf("result: %d\n", isdigit('0'));
}*/