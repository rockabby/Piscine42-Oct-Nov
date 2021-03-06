/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 12:21:43 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/05 19:50:37 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s2 == '*')
	{
		if (*s1 == '\0')
		{
			return (match(s1, s2 + 1));
		}
		else
		{
			return (match(s1, s2 + 1)) || (match(s1 + 1, s2));
		}
	}
	else if (*s1 == *s2)
	{
		return (match(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
