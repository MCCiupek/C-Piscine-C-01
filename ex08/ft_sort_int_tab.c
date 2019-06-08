/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 01:50:20 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/08 20:53:41 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_sort_int_tab(int *tab, int size) 
{ 
	int i;
	int min;
	int j;
	int t;

	i = 0;
	while (i < size)
	{ 
		min = tab[i];
		t = i;
		j = size - 1; 
		while (j > i) 
		{
			if (min > tab[j])
			{ 
				min = tab[j]; 
				t = j; 
			}
			j--; 
		} 
		tab[t]=tab[i];
		tab[i]=min; 
		i++; 
	} 
} 
