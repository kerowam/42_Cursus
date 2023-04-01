#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.h"

/*void check_leaks(void)
{
	system("leaks a.out");
}*/

int	main(void)
{
	int		fd[4];

	fd[0] = open("41_with_nl", O_RDWR);
	fd[1] = open("42_with_nl", O_RDWR);
	fd[2] = open("43_with_nl", O_RDWR);
	fd[3] = open("nl", O_RDWR);
	
	get_next_line(1000);
	get_next_line(fd[0]);
	get_next_line(1001);
	get_next_line(fd[1]);
	get_next_line(1002);
	get_next_line(fd[2]);
	get_next_line(1003);
	get_next_line(fd[0]);
	get_next_line(1004);
	get_next_line(fd[1]);
	get_next_line(1005);
	get_next_line(fd[2]);
	get_next_line(fd[0]);
	get_next_line(fd[1]);
	get_next_line(fd[2]);
	get_next_line(1006);
	get_next_line(fd[3]);
	get_next_line(1007);
	get_next_line(fd[3]);
	write(1, "\n", 1);
	return (0);
}
