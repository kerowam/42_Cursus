int	main(void)
{
	int fd;
	int ret;
	char *line;

	if ((fd = open("main.c", O_RDONLY)) < 3 && fd != 0)
		return (-1);
	printf("%d\n", fd);
	ret = get_next_line(fd, &line);
	printf("%d - %s\n", ret, line);
	ret = get_next_line(fd, &line);
	printf("%d - %s\n", ret, line);
	ret = get_next_line(fd, &line);
	printf("%d - %s\n", ret, line);
	ret = get_next_line(fd, &line);
	printf("%d - %s\n", ret, line);
	return (0);
}