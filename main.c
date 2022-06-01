// #include "get_next_line.h"
// #include <stdio.h>
// #include <fcntl.h>

// int main()
// {
// 	int		fd;
// 	char	*str;

// 	fd = open("text.txt", O_RDONLY);
// 	str = get_next_line(fd);
// 	printf("main 1 %s", str);
// 	free(str);
// 	str = get_next_line(fd);
// 	printf("main 2 %s", str);
// 	free(str);
// 	str = get_next_line(fd);
// 	printf("main 3 %s", str);
// 	free(str);
// 	str = get_next_line(fd);
// 	printf("main 4 %s", str);
// 	free(str);
// 	str = get_next_line(fd);
// 	printf("main 5 %s", str);
// 	free(str);
// 	str = get_next_line(fd);
// 	printf("main 6 %s\n", str);
// 	free(str);
// 	close(fd);

// 	return 0;
// }