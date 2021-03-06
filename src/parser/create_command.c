/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_command.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apantiez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/23 17:04:19 by apantiez          #+#    #+#             */
/*   Updated: 2014/05/23 17:04:19 by apantiez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "libft.h"
#include <stdlib.h>

t_command		*create_command(t_token *token_lst)
{
	t_command	*new;

	if (!(new = (t_command *)malloc(sizeof(*new))))
		return (NULL);
	new->token_lst = token_lst;
	new->first_job = NULL;
	new->next = NULL;
	new->prev = NULL;
	new->first_job = make_job_lst(new->token_lst);
	return (new);
}
