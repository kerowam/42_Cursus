
#include "libftprinf.h"

void	ft_print_c(char c, size_t	*len)
{
	write (1, &c, 1);
	(*len)++;
}
