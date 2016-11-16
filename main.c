/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalime <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 12:31:18 by pcalime           #+#    #+#             */
/*   Updated: 2015/12/10 15:47:08 by pcalime          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char **argv)
{
	t_tetrimini	*tab_piece;
	char		*str;

	if (argc == 2)
	{
		str = malloc(sizeof(char) * BUF_SIZE);
		ft_strcpy(str, ft_read(argv[1]));
		if (ft_counttetri(str) == 0)
		{
			ft_putstr("error\n");
			return (0);
		}
		tab_piece = malloc(sizeof(t_tetrimini) * ft_counttetri(str) + 1);
		if (ft_recup(tab_piece, str) == 0)
			ft_putstr("error\n");
	}
	else
		ft_putstr("error\n");
	return (0);
}
