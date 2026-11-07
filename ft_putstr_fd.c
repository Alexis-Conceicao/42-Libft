/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:44:38 by alconcei          #+#    #+#             */
/*   Updated: 2026/11/05 16:31:58 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*#include <fcntl.h>

int	main(void)
{
	int fd = open("a.txt", O_WRONLY | O_APPEND | O_CREAT, 0777);
	ft_putstr_fd("ja suspeitava", fd);
	close(fd);
}*/