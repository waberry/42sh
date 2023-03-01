/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gettermsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbraeckm <wbraeckm@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:10:30 by wbraeckm          #+#    #+#             */
/*   Updated: 2019/10/16 14:15:43 by wbraeckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh.h"

int		gettermsize(t_winsiz *winsize)
{
	if (ioctl(0, TIOCGWINSZ, winsize) == -1)
		return (1);
	return (0);
}
