#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int	main(void)
{
	int fd;

	if ((fd = open("main.c", O_RDONLY)) < 3 && fd != 0)
		return (-1);
	printf("%d\n", fd);
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	return (0);
}
