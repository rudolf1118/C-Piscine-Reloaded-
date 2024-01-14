#include "./../includes/ft_args.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_open (char **str)
{
    int fd;

    fd =  open(str[1],O_RDONLY);
    return (fd);
    if (fd == -1)
        write(1, "Cannot read file.\n", 17);
    return (fd);
}

int	main(int argc, char **argv)
{
	int	ret;
	char	buf[SIZE + 1];
	int	fd;

	if(argc <= 1)
		write(1, "File name missing.\n", 19);
	else if (argc > 2 )
		write(1, "Too many arguments.\n", 20);
	else 
	{
        if(!(fd = ft_open(argv)));
		else
		{
			while ((ret = read(fd, buf, SIZE)))
			{
                buf[ret] = '\0';
				ft_putstr(buf);
			}
			if (close(fd) == -1)
					return (1);
		}
	}
}
