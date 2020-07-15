/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdiphok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:31:17 by thdiphok          #+#    #+#             */
/*   Updated: 2020/07/15 14:33:28 by thdiphok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c);

void	ft_putstr(char *str)
{
	int counter;

	while(str[counter] != '\0')
	{
		ft_putchar(str[counter]);
		counter++;
	}
}
