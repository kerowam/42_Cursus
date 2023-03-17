#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.h"

void check_leaks(void)
{
	system("leaks a.out");
}

int	main(void)
{
	int fd;
	char *line;

	if ((fd = open("infile", O_RDONLY)) < 3 && fd != 0)
		return (-1);
	printf("%d\n", fd);
		line = get_next_line(fd);
		printf("%s\n", line);
		free(line);
	//while (get_next_line(fd))
	//	printf("%s\n", get_next_line(fd));
	close(fd);
	atexit(check_leaks);
	return (0);
}
