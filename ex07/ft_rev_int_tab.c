/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darambae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:25:18 by darambae          #+#    #+#             */
/*   Updated: 2023/08/25 07:24:46 by darambae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	len;

	i = 0;
	len = size -1 -i;
	while (i <= len)
	{
		temp = tab[i];
		tab[i] = *tab[len];
		*tab[len] = temp;
		i++;
	}
}

int		main(void)
{
	int tab[10] = {0,1,2,3,4,5,6,7,8,9};

	printf("9,8,7,6,5,4,3,2,1,0:");
	ft_rev_int_tab(tab, 10);
	printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
}
