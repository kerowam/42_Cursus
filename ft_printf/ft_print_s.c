

#include "libftprinf.h"

void	ft_print_s(char	*str, size_t *len)
{
	if(!str)
		str = "(null)";
	while (*str != '\0')
	{
		ft_print_c(*str, len);
		str++;
	}
}
