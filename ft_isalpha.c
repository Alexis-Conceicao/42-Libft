/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:42:52 by alconcei          #+#    #+#             */
/*   Updated: 2026/11/05 15:33:03 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	int	i;

	i = ft_isalpha((int)'a');
	printf("result: %d\n", i);
}

int	main(void)
{
	printf("result: %d\n", ft_isalpha((int)'a'));
}
*/