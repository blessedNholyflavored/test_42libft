#include "libtest.h"

int	main(int argc, char **argv)
{
	int	mode;
	int	test[43];
	char	*fnc_name[43];
	int	detail;
	char	*arg1;
	char	*arg2;
	char	*arg3;

	detail = 0;
	mode = 0;
	init_fnc_name(fnc_name);

	if (argc == 1)
	{
		while (mode == 0)
		{
			mode = help_mode(arg1, arg2, arg3);
		}
		//test(test_tab, details)
		//test help_mode
		char o;
		o = arg1[0];
		printf("[%c]", o);

		if (argc > 1)
		{
			mode = get_mode(argv[1]);
/*			if (argc > 2)
			{
				mode = get_mode(argv[1]);
				if (mode == 2 || mode == 3)
				{
					set_test(mode, test, fnc_name, argv[2]);
				}
				if (argc > 3)
				{
					if (strcmp(strlow(argv[3]), "detail") == 0)
						detail = 1;
				}
			} */
		}
	}
	//test_fnc(mode, detail, test, fnc_name);
	return (0);
}
