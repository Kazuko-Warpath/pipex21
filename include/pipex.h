/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwarpath <kwarpath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:18:34 by kwarpath          #+#    #+#             */
/*   Updated: 2022/03/05 18:56:21 by kwarpath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <sys/errno.h>
# include <string.h>
# include <fcntl.h>

void	error_cmd(char *cmd);
void	error_file(char *file);
void	error_process(void);
void	check_args(int argc);
void	free_arr(char **arr);
void	check_fd(int *fd1, int *fd2, char **argv);
char	**find_path(char **env);
char	*get_line(char *cmd, char **arr);

#endif
