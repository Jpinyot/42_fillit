/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkfile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 00:18:44 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/24 21:11:03 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

char	*ft_createfile(char *argv)
{
	char *dst;
	int fd;
	char file[545];
	char buff;
	int i;

	fd = open(argv, O_RDONLY);
	i = 0;
	while (read(fd, &buff, 1))
	{
		file[i] = buff;
		i++;
	}
	dst = ft_strdup(file);
	return (dst);
}
