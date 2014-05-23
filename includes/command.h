/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apantiez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/23 15:49:32 by apantiez          #+#    #+#             */
/*   Updated: 2014/05/23 15:49:32 by apantiez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMAND_H
# define COMMAND_H

# define STDIN_FILENO 0
# define STDOUT_FILENO 1
# define STDERR_FILENO 2

# include "struct.h"

void		launch_process (t_process *p, t_gen *gen);
void		launch_job (t_job *j, t_gen *gen);
void		ft_close_pipe(t_process *p);
void		ft_fork(t_process *p, t_gen *gen);
void		ft_command(t_command *com, t_gen *gen);
t_job		*get_job_next(t_job *job, int success);
void		check_redirection(t_process *p, t_gen *envp);
int			ft_run_builtin(t_process *p, t_gen *env);
int			ft_checkbuiltin(t_process *p, t_gen *gen);

#endif
