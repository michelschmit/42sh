/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosdeve <abosdeve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/23 17:07:10 by apantiez          #+#    #+#             */
/*   Updated: 2014/06/03 14:01:50 by apantiez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

# define EALLOC 1
# define E2BIGA 2
# define ENOARG 3
# define ENPERM 4
# define ENENTR 5
# define EISHER 6
# define EBADFD 7
# define ENFORK 8
# define ENODIR 9
# define EDIRIS 10
# define EINVAR 11
# define EBPIPE 12
# define ENOCMD 13
# define EBDENV 14
# define EEXECV 15
# define EAGNUM 16
# define EMQNOT 17

# include "parser.h"

void	error(t_process *p, int i);
char	*strror(int i);

#endif
