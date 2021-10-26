#include "../libtest.h"


int	test_isalpha(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_isdigit(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_isalnum(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_isascii(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_isprint(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_strlen(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_memset(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_bzero(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_memcpy(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_memmove(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_strlcpy(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_strlcat(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_toupper(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_tolower(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_strchr(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_strrchr(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_strncmp(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_memchr(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_strnstr(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_atoi(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_calloc(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_strdup(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_substr(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_strjoin(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_strtrim(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_split(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_itoa(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_strmapi(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_striteri(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_putchar_fd(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_putstr_fd(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_putendl_fd(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_putnbr_fd(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_lstnew(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_lstadd_front(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_lstsize(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_lstlast(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_lstadd_back(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_lstdelone(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_lst_clear(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_lstiter(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	test_lstmap(int detail)
{
	printf("Cette fonction (isalpha) n'a pas encore de test\n");
	return (0);
}

int	big_test(int *test, int detail)
{
	int	r;

	r = 0;
	if (test[1] == 1)
		r += test_isalpha(0);
	if (test[2] == 1)
		r += test_isdigit(0);
	if (test[3] == 1)
		r += test_isalnum(0);
	if (test[4]== 1)
		r += test_isascii(0);
	if (test[5] == 1)
		r += test_isprint(0);
	if (test[6] == 1)
		r += test_strlen(0);
	if (test[7] == 1)
		r += test_memset(0);
	if (test[8] == 1)
		r += test_bzero(0);
	if (test[9] == 1)
		r += test_memcpy(0);
	if (test[10] == 1)
		r += test_memmove(0);
	if (test[11] == 1)
		r += test_strlcpy(0);
	if (test[12] == 1)
		r += test_strlcat(0);
	if (test[13] == 1)
		r += test_toupper(0);
	if (test[14] == 1)
		r += test_tolower(0);
	if (test[15] == 1)
		r += test_strchr(0);
	if (test[16] == 1)
		r += test_strrchr(0);
	if (test[17] == 1)
		r += test_strncmp(0);
	if (test[18] == 1)
		r += test_memchr(0);
	if (test[19] == 1)
		r += test_strnstr(0);
	if (test[20] == 1)
		r += test_atoi(0);
	if (test[21] == 1)
		r += test_calloc(0);
	if (test[22] == 1)
		r += test_strdup(0);
	if (test[23] == 1)
		r += test_substr(0);
	if (test[24] == 1)
		r += test_strjoin(0);
	if (test[25] == 1)
		r += test_strtrim(0);
	if (test[26] == 1)
		r += test_split(0);
	if (test[27] == 1)
		r += test_itoa(0);
	if (test[28] == 1)
		r += test_strmapi(0);
	if (test[29] == 1)
		r += test_striteri(0);
	if (test[30] == 1)
		r += test_putchar_fd(0);
	if (test[31] == 1)
		r += test_putstr_fd(0);
	if (test[32] == 1)
		r += test_putendl_fd(0);
	if (test[33] == 1)
		r += test_putnbr_fd(0);
	if (test[34] == 1)
		r += test_lstnew(0);
	if (test[35] == 1)
		r += test_lstadd_front(0);
	if (test[36] == 1)
		r += test_lstsize(0);
	if (test[37] == 1)
		r += test_lstlast(0);
	if (test[38] == 1)
		r += test_lstadd_back(0);
	if (test[39] == 1)
		r += test_lstdelone(0);
	if (test[40] == 1)
		r += test_lst_clear(0);
	if (test[41] == 1)
		r += test_lstiter(0);
	if (test[42] == 1)
		r += test_lstmap(0);
}
