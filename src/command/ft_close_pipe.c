/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_pipe.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apantiez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/23 17:04:17 by apantiez          #+#    #+#             */
/*   Updated: 2014/05/23 17:04:17 by apantiez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "parser.h"

void		ft_close_pipe(t_process *p)
{
	if (STDIN_FILENO != p->FD_IN)
		close(p->FD_IN);
	if (STDERR_FILENO != p->FD_ERR)
		close(p->FD_ERR);
	if (STDOUT_FILENO != p->FD_OUT)
		close(p->FD_OUT);
}
