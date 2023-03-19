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
	int 	fd;
	char 	*line;
	int 	i;

	i = 0;
	if ((fd = open("42_with_nl", O_RDONLY)) < 3 && fd != 0)
		return (-1);
	printf("%d\n", fd);
	while (i < 3)
	{
		line = get_next_line(fd);
		printf("%s\n", line);
		i++;
	}
	free(line);
	//while (get_next_line(fd))
	//	printf("%s\n", get_next_line(fd));
	close(fd);
	atexit(check_leaks);
	return (0);
}
