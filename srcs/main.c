#include "../libtest.h"

int op();
int	main(int argc, char **argv)
{
	int	mode;
	int	test[43];
	char	*fnc_name[] = {"bonus", "isalpha", "isdigit", "isalnum",
		"isascii", "isprint", "strlen", "memset", 
		"bzero", "memcpy", "memmove", "strlcpy",
		"strlcat", "toupper", "tolower", "strchr",
		"strrchr", "strncmp", "memchr", "strnstr",
		"atoi", "calloc", "strdup", "substr",
		"strjoin", "strtrim", "split", "itoa", "strmapi",
		"striteri", "putchar_fd", "putstr_fd", "putendl_fd",
		"putnbr_fd","lstnew", "lstadd_front", "lstsize", 
		"lstlast", "lstadd_back", "lstdelone", "lst_clear", 
		"lstiter", "lstmap", "memcmp", '\0'};
	int	detail;

	detail = 0;
	mode = 0;
	printf("\033[0;037m");
	//system("clear");

	if (argc == 1)
	{
		if (help_mode() == 0)
			return (0);
		init_test(test, 1);
		big_test(test, detail);
	}
	if (argc == 4 && (strcmp(strlow("detail"), argv[3]) == 0 || strcmp(strlow("details"), argv[3]) == 0))
		detail = 1;
	if (argc > 1)
	{
		mode = get_mode(argv[1]);

		if (mode == 2)
		{
			if (argc == 2)
				mode = 1;
			else
			{
				init_test(test, 0);
				set_test(mode, test, fnc_name, argv[2]);
				big_test(test, detail);
			}
		}

		if (mode == 3)
		{
			if (argc == 2)
				mode = 1;
			else
			{
				init_test(test, 1);
				set_test(mode, test, fnc_name, argv[2]);
				big_test(test, detail);
			}
		}

		if (mode == 4)
		{
			if (help_mode() == 0)
				return (0);
			mode = 1;
			big_test(test, detail);
		}
		if (mode == 1)
		{
			if (argc == 3 && (strcmp(strlow(argv[2]), "detail") == 0 || strcmp(strlow(argv[2]), "details") == 0))
				detail = 1; 
			init_test(test, 1);
			big_test(test, detail);
		}
	}
	return (0);
}
