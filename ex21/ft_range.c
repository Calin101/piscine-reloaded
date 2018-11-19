/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 17:29:08 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 18:23:07 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	if ((tab = (int *)malloc(sizeof(*tab) * (max - min))) == NULL)
		return (NULL);
	while (min < max)
	{
		tab[i] = min++;
		i++;
	}
	return (tab);
}
