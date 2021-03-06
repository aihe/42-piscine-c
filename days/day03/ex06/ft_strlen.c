/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 15:04:32 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/06 15:10:09 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		length;

	length = 0;
	while (*(str + length) != '\0')
	{
		length = length + 1;
	}
	return (length);
}
