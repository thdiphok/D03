/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdiphok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:35:54 by thdiphok          #+#    #+#             */
/*   Updated: 2020/07/15 14:36:48 by thdiphok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		ft_strlen(char *str)
{
	int counter;

	while(str[counter] != '\0')
	{
		counter++;
	}
	return counter;
}
