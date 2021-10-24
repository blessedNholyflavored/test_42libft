#include "../libtest.h"

int	main(int argc, char **argv)
{
	int	mode;
	int	test[43];
	char	*fnc_name[43];
	int	detail;

	detail = 0;
	mode = 0;
	init_fnc_name(fnc_name);
	printf("\033[0;037m");
	system("clear");

	if (argc == 1)
	{
		if (help_mode() == 0)
			return (0);
		//big test
	}
	if (argc > 1)
	{
		mode = get_mode(argv[1]);
		if (mode == 1)
		{
			init_test(test, 1);
			//big test
		}

		if (mode == 2)
		{
			init_test(test, 0);
			//big test
		}

		if (mode == 3)
		{
			init_test(test, 1);
			//big test)
		}
		
		if (mode == 4)
		{
			if (help_mode() == 0)
				return (0);
			init_test(test, 1);
			//big test
		}
	}

	test_output("1", 1, 1);
	test_output("abcdefghijklmn", 0, 2);
	return (0);
}
