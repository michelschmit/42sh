/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_redirection.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apantiez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/23 17:04:16 by apantiez          #+#    #+#             */
/*   Updated: 2014/05/23 17:04:16 by apantiez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "error.h"
#include "parser.h"
#include "struct.h"
#include "command.h"

void		check_redirection(t_process *p, t_gen *envp)
{
	if (p->FD_IN == -1 || p->FD_ERR == -1 || p->FD_OUT == -1)
	{
		envp->ret = EBADFD;
		error(p, 0);
	}
	else
	{
		if (p->FD_IN != STDIN_FILENO)
		{
			dup2(p->FD_IN, STDIN_FILENO);
			close(p->FD_IN);
		}
		if (p->FD_OUT != STDOUT_FILENO)
		{
			dup2(p->FD_OUT, STDOUT_FILENO);
			close(p->FD_OUT);
		}
		if (p->FD_ERR != STDERR_FILENO)
		{
			dup2(p->FD_ERR, STDERR_FILENO);
			close(p->FD_ERR);
		}
	}
}
