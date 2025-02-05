
#include "../../minishell.h"

void	handle_ctrl_c(int sig)
{
	g_signum = sig;
	rl_replace_line("", 1);
	write(1, "\n", 1);
	rl_on_new_line();
	rl_redisplay();
}

void	handle_execution_signals(int sig)
{
	g_signum = sig;
	write(1, "\n", 1);
}

void	check_signal_if_recieved(int *status)
{
	if (g_signum == SIGINT)
	{
		*status = 130;
		g_signum = 0;
	}
	else if (g_signum == SIGQUIT)
	{
		*status = 131;
		g_signum = 0;
	}
}

void	free_env(t_env **env)
{
	t_env	*tmp;
	t_env	*next_node;

	if (!*env)
		return ;
	tmp = *env;
	while (tmp)
	{
		next_node = tmp->next;
		if (tmp->key)
			free(tmp->key);
		if (tmp->value)
			free(tmp->value);
		free(tmp);
		tmp = next_node;
	}
	*env = NULL;
}
