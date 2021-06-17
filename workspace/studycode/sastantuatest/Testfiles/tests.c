/*read map leftovers*/

printf("%s this is the buffer\n", buf);
	map = (char*)malloc(sizeof(char) * ret + 1);
	while (i < ret)
	{
		map[i] = buf[i];
		i++;
	}
	map[i+1] = '\0';
	printf("%s This is the malloc map\n", map);
	free (map);





}

int        main(int argc, char **argv)
{
    if (argc != 2)
    {
        if (argc < 2)
            printf("No arguments, give me the map bitch\n");
        if (argc > 2)
            printf("Too many arguments\n");
        return (1);
    }
    ft_display_file(argv[1]);
    return (0);
}
