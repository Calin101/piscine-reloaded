/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 17:54:40 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 14:12:50 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "../includes/header.h"
#define BUF_SIZE 4096

int		main(int argc, char **argv)
{
	int		res;
	int		fd;
	char	buf[BUF_SIZE + 1];

	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		res = read(fd, buf, BUF_SIZE);
		buf[res] = '\0';
		ft_putstr(buf);
	}
	return (0);
}
