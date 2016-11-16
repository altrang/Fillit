/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_piece.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalime <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 20:13:48 by pcalime           #+#    #+#             */
/*   Updated: 2015/12/10 17:40:03 by atrang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_piece(char *str)
{
	int		cmpt;
	int		i;
	char	**ret;

	cmpt = 0;
	i = 0;
	ret = malloc(sizeof(char *) * 26);
	while (str[cmpt])
	{
		ret[i] = ft_strndup(str + cmpt, 16);
		cmpt += 16;
		i++;
	}
	return (ret);
}
