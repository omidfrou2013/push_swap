#include "push_swap.h"



int	check_dup(int a, char **v)
{
	int	d[4];

	if (a < 3)
		return (0);
	d[0] = 1;
	while (d[0] < a)
	{
		d[2] = ft_atoi(v[d[0]]);
		d[1] = d[0] + 1;
		while (d[1] < a)
		{
			d[3] = ft_atoi(v[d[1]]);
			if (d[3] == d[2])
				return (1);
			d[1]++;
		}
		d[0]++;
	}
	return (0);
}

int	main(int args, char **argv)
{
	t_stack	*s1;
	t_stack	*s2;

	s1 = NULL;
	s2 = NULL;
	if ((check_dup(args, argv) == 1))
	{
		return (0);
	}
}