/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunyai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 09:35:20 by amunyai           #+#    #+#             */
/*   Updated: 2020/01/23 11:33:33 by amunyai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//int			ft_strlen(char *str)
//{
//	int i;
//
//	i = 0;
//	while (str[i] != '\0')
//	{
//		i++;
//	}
//	return (i);
//}

int			main(int argc, char *argv[])
{
	int i;
//	int len;

	i = 0;
	if (argc > 1)
	{
//		len = ft_strlen(argv[1] - 1);
		while (argv[1][i - 1] != '\0')
		{
			write(1, &argv[1][i - 1], 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
