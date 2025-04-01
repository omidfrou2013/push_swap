
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct t_stack
{
	int				data;
	int				index;
	struct t_stack	*next;
}	t_stack;

// stack_managing.c
long long	ft_atoi(char *str);

#endif