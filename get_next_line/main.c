#include <stdio.h>
#include <fcntl.h>
#include "get_next_line_bonus.h"

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

	ret = get_next_line(1000);
	printf("%s", ret);
	ret = get_next_line(fd[0]);
	printf("%s", ret);
	ret = get_next_line(1001);
	printf("%s", ret);
	ret = get_next_line(fd[1]);
	printf("%s", ret);
	ret = get_next_line(1002);
	printf("%s", ret);
	ret = get_next_line(fd[2]);
	printf("%s", ret);
	ret = get_next_line(1003);
	printf("%s", ret);
	ret = get_next_line(fd[0]);
	printf("%s", ret);
	ret = get_next_line(1004);
	printf("%s", ret);
	ret = get_next_line(fd[1]);
	printf("%s", ret);
	ret = get_next_line(1005);
	printf("%s", ret);
	ret = get_next_line(fd[2]);
	printf("%s", ret);
	ret = get_next_line(fd[0]);
	printf("%s", ret);
	ret = get_next_line(fd[1]);
	printf("%s", ret);
	ret = get_next_line(fd[2]);
	printf("%s", ret);
	ret = get_next_line(1006);
	printf("%s", ret);
	ret = get_next_line(fd[3]);
	printf("%s", ret);
	ret = get_next_line(1007);
	printf("%s", ret);
	ret = get_next_line(fd[3]);
	printf("%s", ret);
	write(1, "\n", 1);
	return (0);
}
