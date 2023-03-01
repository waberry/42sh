/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dir.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbraeckm <wbraeckm@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 23:17:50 by wbraeckm          #+#    #+#             */
/*   Updated: 2020/01/21 23:18:55 by wbraeckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh.h"

int		is_dir(char *str)
{
	struct stat st;

	if (stat(str, &st) == -1)
		return (0);
	return (S_ISDIR(st.st_mode));
}
