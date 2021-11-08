#include "../libtest.h"

int	test_isalpha(int detail)
{
	char	a;
	char	b;
	char	c;
	char	d;
	char	e;
	char	f;
	char	g;
	char	h;

	a = 'a';
	b = 'z';
	c = 'A';
	d = 'Z';
	e = '@';
	f = '[';
	g = '`';
	h = '{';
	if (detail == 1)
	{
		printf("===    Test FT_ISALPHA    ===\n\n");
		printf("Resultats de isalpha et ft_isalpha pour le caractere '%c' sont:\t%d\t%d\n", a, isalpha(a), ft_isalpha(a));
		printf("Resultats de isalpha et ft_isalpha pour le caractere '%c' sont:\t%d\t%d\n", b, isalpha(b), ft_isalpha(b));
		printf("Resultats de isalpha et ft_isalpha pour le caractere '%c' sont:\t%d\t%d\n", c, isalpha(c), ft_isalpha(c));
		printf("Resultats de isalpha et ft_isalpha pour le caractere '%c' sont:\t%d\t%d\n", d, isalpha(d), ft_isalpha(d));
		printf("Resultats de isalpha et ft_isalpha pour le caractere '%c' sont:\t%d\t%d\n", e, isalpha(e), ft_isalpha(e));
		printf("Resultats de isalpha et ft_isalpha pour le caractere '%c' sont:\t%d\t%d\n", f, isalpha(f), ft_isalpha(f));
		printf("Resultats de isalpha et ft_isalpha pour le caractere '%c' sont:\t%d\t%d\n", g, isalpha(g), ft_isalpha(g));
		printf("Resultats de isalpha et ft_isalpha pour le caractere '%c' sont:\t%d\t%d\n", h, isalpha(h), ft_isalpha(h));
	}
	if ((isalpha(a) == ft_isalpha(a)) && (isalpha(b) == ft_isalpha(b))
			&& (isalpha(c) == ft_isalpha(c)) && (isalpha(d) == ft_isalpha(d))
			&& (isalpha(e) == ft_isalpha(e)) && (isalpha(f) == ft_isalpha(f)) 
			&& (isalpha(g) == ft_isalpha(g)) && (isalpha(h) == ft_isalpha(h)))
		test_output("ft_isalpha", 0, 1);
	else
		test_output("ft_isalpha", 1, 1);
	if (detail == 1)
		printf("\n");
	return (0);
}

int	test_isdigit(int detail)
{
	char	a;
	char	b;
	char	c;
	char	d;
	char	e;
	char	f;
	char	g;
	char	h;

	a = '5';
	b = '9';
	c = '0';
	d = '1';
	e = '/';
	f = ':';
	g = '`';
	h = '{';
	if (detail == 1)
	{
		printf("===    Test FT_ISDIGIT    ===\n\n");
		printf("Resultats de isdigit et ft_isdigit pour le caractere '%c' sont:\t%d\t%d\n", a, isdigit(a), ft_isdigit(a));
		printf("Resultats de isdigit et ft_isdigit pour le caractere '%c' sont:\t%d\t%d\n", b, isdigit(b), ft_isdigit(b));
		printf("Resultats de isdigit et ft_isdigit pour le caractere '%c' sont:\t%d\t%d\n", c, isdigit(c), ft_isdigit(c));
		printf("Resultats de isdigit et ft_isdigit pour le caractere '%c' sont:\t%d\t%d\n", d, isdigit(d), ft_isdigit(d));
		printf("Resultats de isdigit et ft_isdigit pour le caractere '%c' sont:\t%d\t%d\n", e, isdigit(e), ft_isdigit(e));
		printf("Resultats de isdigit et ft_isdigit pour le caractere '%c' sont:\t%d\t%d\n", f, isdigit(f), ft_isdigit(f));
		printf("Resultats de isdigit et ft_isdigit pour le caractere '%c' sont:\t%d\t%d\n", g, isdigit(g), ft_isdigit(g));
		printf("Resultats de isdigit et ft_isdigit pour le caractere '%c' sont:\t%d\t%d\n", h, isdigit(h), ft_isdigit(h));
	}
	if ((isdigit(a) == ft_isdigit(a)) && (isdigit(b) == ft_isdigit(b))
			&& (isdigit(c) == ft_isdigit(c)) && (isdigit(d) == ft_isdigit(d))
			&& (isdigit(e) == ft_isdigit(e)) && (isdigit(f) == ft_isdigit(f)) 
			&& (isdigit(g) == ft_isdigit(g)) && (isdigit(h) == ft_isdigit(h)))
		test_output("ft_isdigit", 0, 1);
	else
		test_output("ft_isdigit", 1, 1);
	if (detail == 1)
		printf("\n");
	return (0);
}

int	test_isalnum(int detail)
{
	char	a;
	char	b;
	char	c;
	char	d;
	char	e;
	char	f;
	char	g;
	char	h;

	a = 'g';
	b = '9';
	c = '0';
	d = '1';
	e = 'a';
	f = 'Z';
	g = '`';
	h = '/';
	if (detail == 1)
	{
		printf("===    Test FT_ISALNUM    ===\n\n");
		printf("Resultats de isalnum et ft_isalnum pour le caractere '%c' sont:\t%d\t%d\n", a, isalnum(a), ft_isalnum(a));
		printf("Resultats de isalnum et ft_isalnum pour le caractere '%c' sont:\t%d\t%d\n", b, isalnum(b), ft_isalnum(b));
		printf("Resultats de isalnum et ft_isalnum pour le caractere '%c' sont:\t%d\t%d\n", c, isalnum(c), ft_isalnum(c));
		printf("Resultats de isalnum et ft_isalnum pour le caractere '%c' sont:\t%d\t%d\n", d, isalnum(d), ft_isalnum(d));
		printf("Resultats de isalnum et ft_isalnum pour le caractere '%c' sont:\t%d\t%d\n", e, isalnum(e), ft_isalnum(e));
		printf("Resultats de isalnum et ft_isalnum pour le caractere '%c' sont:\t%d\t%d\n", f, isalnum(f), ft_isalnum(f));
		printf("Resultats de isalnum et ft_isalnum pour le caractere '%c' sont:\t%d\t%d\n", g, isalnum(g), ft_isalnum(g));
		printf("Resultats de isalnum et ft_isalnum pour le caractere '%c' sont:\t%d\t%d\n", h, isalnum(h), ft_isalnum(h));
	}
	if ((isalnum(a) == ft_isalnum(a)) && (isalnum(b) == ft_isalnum(b))
			&& (isalnum(c) == ft_isalnum(c)) && (isalnum(d) == ft_isalnum(d))
			&& (isalnum(e) == ft_isalnum(e)) && (isalnum(f) == ft_isalnum(f)) 
			&& (isalnum(g) == ft_isalnum(g)) && (isalnum(h) == ft_isalnum(h)))
		test_output("ft_isalnum", 0, 1);
	else
		test_output("ft_isalnum", 1, 1);
	if (detail == 1)
		printf("\n");
	return (0);
}

int	test_isascii(int detail)
{
	unsigned char	a;
	unsigned char	b;
	unsigned char	c;
	unsigned char	d;
	unsigned char	e;
	unsigned char	f;
	unsigned char	g;
	unsigned char	h;

	a = 130;
	b = 150;
	c = 0;
	d = '1';
	e = 'a';
	f = 'Z';
	g = '2';
	h = '/';
	if (detail == 1)
	{
		printf("===    Test FT_ISASCII    ===\n\n");
		printf("Resultats de isascii et ft_isascii pour le caractere %d sont:\t%d\t%d\n", a, isascii(a), ft_isascii(a));
		printf("Resultats de isascii et ft_isascii pour le caractere %d sont:\t%d\t%d\n", b, isascii(b), ft_isascii(b));
		printf("Resultats de isascii et ft_isascii pour le caractere %d sont:\t%d\t%d\n", c, isascii(c), ft_isascii(c));
		printf("Resultats de isascii et ft_isascii pour le caractere '%c' sont:\t%d\t%d\n", d, isascii(d), ft_isascii(d));
		printf("Resultats de isascii et ft_isascii pour le caractere '%c' sont:\t%d\t%d\n", e, isascii(e), ft_isascii(e));
		printf("Resultats de isascii et ft_isascii pour le caractere '%c' sont:\t%d\t%d\n", f, isascii(f), ft_isascii(f));
		printf("Resultats de isascii et ft_isascii pour le caractere '%c' sont:\t%d\t%d\n", g, isascii(g), ft_isascii(g));
		printf("Resultats de isascii et ft_isascii pour le caractere '%c' sont:\t%d\t%d\n", h, isascii(h), ft_isascii(h));
	}
	if ((isascii(a) == ft_isascii(a)) && (isascii(b) == ft_isascii(b))
			&& (isascii(c) == ft_isascii(c)) && (isascii(d) == ft_isascii(d))
			&& (isascii(e) == ft_isascii(e)) && (isascii(f) == ft_isascii(f)) 
			&& (isascii(g) == ft_isascii(g)) && (isascii(h) == ft_isascii(h)))
		test_output("ft_isascii", 0, 1);
	else
		test_output("ft_isascii", 1, 1);
	if (detail == 1)
		printf("\n");
	return (0);
}

int	test_isprint(int detail)
{
	unsigned char	a;
	unsigned char	b;
	unsigned char	c;
	unsigned char	d;
	unsigned char	e;
	unsigned char	f;
	unsigned char	g;
	unsigned char	h;

	a = 127;
	b = 150;
	c = 0;
	d = 10;
	e = 'a';
	f = 'Z';
	g = '2';
	h = '/';
	if (detail == 1)
	{
		printf("===    Test FT_ISPRINT    ===\n\n");
		printf("Resultats de isprint et ft_isprint pour le caractere %d sont:\t%d\t%d\n", a, isprint(a), ft_isprint(a));
		printf("Resultats de isprint et ft_isprint pour le caractere %d sont:\t%d\t%d\n", b, isprint(b), ft_isprint(b));
		printf("Resultats de isprint et ft_isprint pour le caractere %d sont:\t%d\t%d\n", c, isprint(c), ft_isprint(c));
		printf("Resultats de isprint et ft_isprint pour le caractere %d sont:\t%d\t%d\n", d, isprint(d), ft_isprint(d));
		printf("Resultats de isprint et ft_isprint pour le caractere '%c' sont:\t%d\t%d\n", e, isprint(e), ft_isprint(e));
		printf("Resultats de isprint et ft_isprint pour le caractere '%c' sont:\t%d\t%d\n", f, isprint(f), ft_isprint(f));
		printf("Resultats de isprint et ft_isprint pour le caractere '%c' sont:\t%d\t%d\n", g, isprint(g), ft_isprint(g));
		printf("Resultats de isprint et ft_isprint pour le caractere '%c' sont:\t%d\t%d\n", h, isprint(h), ft_isprint(h));
	}
	if ((isprint(a) == ft_isprint(a)) && (isprint(b) == ft_isprint(b))
			&& (isprint(c) == ft_isprint(c)) && (isprint(d) == ft_isprint(d))
			&& (isprint(e) == ft_isprint(e)) && (isprint(f) == ft_isprint(f)) 
			&& (isprint(g) == ft_isprint(g)) && (isprint(h) == ft_isprint(h)))
		test_output("ft_isprint", 0, 1);
	else
		test_output("ft_isprint", 1, 1);
	if (detail == 1)
		printf("\n");
	return (0);
}

int	test_strlen(int detail)
{
	char	a[] = "Vache";
	char	b[1];
	char	c[3] = { 'a', '\0', '9'};
	char	d[] = "o";

	b[0] = '\0';

	if (detail == 1)
	{
		printf("===    Test FT_STRLEN    ===\n\n");
		printf("Resultats de strlen et ft_strlen pour la string '%s' sont:\t%ld\t%ld\n", a, strlen(a), ft_strlen(a));
		printf("Resultats de strlen et ft_strlen pour la string '%s' sont:\t%ld\t%ld\n", b, strlen(b), ft_strlen(b));
		printf("Resultats de strlen et ft_strlen pour la string '%s' sont:\t%ld\t%ld\n", c, strlen(c), ft_strlen(c));
		printf("Resultats de strlen et ft_strlen pour la string '%s' sont:\t%ld\t%ld\n", d, strlen(d), ft_strlen(d));
	}
	if ((strlen(a) == ft_strlen(a)) && (strlen(b) == ft_strlen(b))
			&& (strlen(c) == ft_strlen(c)) && (strlen(d) == ft_strlen(d)))
		test_output("ft_strlen", 0, 1);
	else
		test_output("ft_strlen", 1, 1);
	if (detail == 1)
		printf("\n");
	return (0);
}

int	test_memset(int detail)
{
	printf("Cette fonction (memset) n'a pas encore de test\n");
	return (0);
}

int	test_bzero(int detail)
{
	printf("Cette fonction (bzero) n'a pas encore de test\n");
	return (0);
}

int	test_memcpy(int detail)
{
	printf("Cette fonction (memcpy) n'a pas encore de test\n");
	return (0);
}

int	test_memmove(int detail)
{
	printf("Cette fonction (memmove) n'a pas encore de test\n");
	return (0);
}

int	test_strlcpy(int detail)
{
	printf("Cette fonction (strlcpy) n'a pas encore de test\n");
	return (0);
}

int	test_strlcat(int detail)
{
	printf("Cette fonction (strlcat) n'a pas encore de test\n");
	return (0);
}

int	test_toupper(int detail)
{
	printf("Cette fonction (toupper) n'a pas encore de test\n");
	return (0);
}

int	test_tolower(int detail)
{
	printf("Cette fonction (tolower) n'a pas encore de test\n");
	return (0);
}

int	test_strchr(int detail)
{
	printf("Cette fonction (strchr) n'a pas encore de test\n");
	return (0);
}

int	test_strrchr(int detail)
{
	printf("Cette fonction (strrchr) n'a pas encore de test\n");
	return (0);
}

int	test_strncmp(int detail)
{
	printf("Cette fonction (strncmp) n'a pas encore de test\n");
	return (0);
}

int	test_memchr(int detail)
{
	printf("Cette fonction (memchr) n'a pas encore de test\n");
	return (0);
}

int	test_strnstr(int detail)
{
	printf("Cette fonction (strnstr) n'a pas encore de test\n");
	return (0);
}

int	test_atoi(int detail)
{
	printf("Cette fonction (atoi) n'a pas encore de test\n");
	return (0);
}

int	test_calloc(int detail)
{
	printf("Cette fonction (calloc) n'a pas encore de test\n");
	return (0);
}

int	test_strdup(int detail)
{
	printf("Cette fonction (strdup) n'a pas encore de test\n");
	return (0);
}

int	test_substr(int detail)
{
	printf("Cette fonction (sbustr) n'a pas encore de test\n");
	return (0);
}

int	test_strjoin(int detail)
{
	printf("Cette fonction (strjoin) n'a pas encore de test\n");
	return (0);
}

int	test_strtrim(int detail)
{
	printf("Cette fonction (strtrim) n'a pas encore de test\n");
	return (0);
}

int	test_split(int detail)
{
	printf("Cette fonction (split) n'a pas encore de test\n");
	return (0);
}

int	test_itoa(int detail)
{
	printf("Cette fonction (itoa) n'a pas encore de test\n");
	return (0);
}

int	test_strmapi(int detail)
{
	printf("Cette fonction (strmapi) n'a pas encore de test\n");
	return (0);
}

int	test_striteri(int detail)
{
	printf("Cette fonction (striteri) n'a pas encore de test\n");
	return (0);
}

int	test_putchar_fd(int detail)
{
	printf("Cette fonction (putchar_fd) n'a pas encore de test\n");
	return (0);
}

int	test_putstr_fd(int detail)
{
	printf("Cette fonction (putstr_fd) n'a pas encore de test\n");
	return (0);
}

int	test_putendl_fd(int detail)
{
	printf("Cette fonction (putendl_fd) n'a pas encore de test\n");
	return (0);
}

int	test_putnbr_fd(int detail)
{
	printf("Cette fonction (putnbr_fd) n'a pas encore de test\n");
	return (0);
}

int	test_lstnew(int detail)
{
	printf("Cette fonction (lstnew) n'a pas encore de test\n");
	return (0);
}

int	test_lstadd_front(int detail)
{
	printf("Cette fonction (lstadd_front) n'a pas encore de test\n");
	return (0);
}

int	test_lstsize(int detail)
{
	printf("Cette fonction (lstsize) n'a pas encore de test\n");
	return (0);
}

int	test_lstlast(int detail)
{
	printf("Cette fonction (lstlast) n'a pas encore de test\n");
	return (0);
}

int	test_lstadd_back(int detail)
{
	printf("Cette fonction (lstadd_back) n'a pas encore de test\n");
	return (0);
}

int	test_lstdelone(int detail)
{
	printf("Cette fonction (lstdelone) n'a pas encore de test\n");
	return (0);
}

int	test_lst_clear(int detail)
{
	printf("Cette fonction (lst_clear) n'a pas encore de test\n");
	return (0);
}

int	test_lstiter(int detail)
{
	printf("Cette fonction (lstiter) n'a pas encore de test\n");
	return (0);
}

int	test_lstmap(int detail)
{
	printf("Cette fonction (lstmap) n'a pas encore de test\n");
	return (0);
}

int	test_memcmp(int detail)
{
	printf("Cette fonction (memcmp) n'a pas encore de test\n");
	return (0);
}

int	big_test(int *test, int detail)
{
	int	r;

	r = 0;
	if (test[1] == 1)
		r += test_isalpha(detail);
	if (test[2] == 1)
		r += test_isdigit(detail);
	if (test[3] == 1)
		r += test_isalnum(detail);
	if (test[4]== 1)
		r += test_isascii(detail);
	if (test[5] == 1)
		r += test_isprint(detail);
	if (test[6] == 1)
		r += test_strlen(detail);
	if (test[7] == 1)
		r += test_memset(detail);
	if (test[8] == 1)
		r += test_bzero(detail);
	if (test[9] == 1)
		r += test_memcpy(detail);
	if (test[10] == 1)
		r += test_memmove(detail);
	if (test[11] == 1)
		r += test_strlcpy(detail);
	if (test[12] == 1)
		r += test_strlcat(detail);
	if (test[13] == 1)
		r += test_toupper(detail);
	if (test[14] == 1)
		r += test_tolower(detail);
	if (test[15] == 1)
		r += test_strchr(detail);
	if (test[16] == 1)
		r += test_strrchr(detail);
	if (test[17] == 1)
		r += test_strncmp(detail);
	if (test[18] == 1)
		r += test_memchr(detail);
	if (test[19] == 1)
		r += test_strnstr(detail);
	if (test[20] == 1)
		r += test_atoi(detail);
	if (test[21] == 1)
		r += test_calloc(detail);
	if (test[22] == 1)
		r += test_strdup(detail);
	if (test[23] == 1)
		r += test_substr(detail);
	if (test[24] == 1)
		r += test_strjoin(detail);
	if (test[25] == 1)
		r += test_strtrim(detail);
	if (test[26] == 1)
		r += test_split(detail);
	if (test[27] == 1)
		r += test_itoa(detail);
	if (test[28] == 1)
		r += test_strmapi(detail);
	if (test[29] == 1)
		r += test_striteri(detail);
	if (test[30] == 1)
		r += test_putchar_fd(detail);
	if (test[31] == 1)
		r += test_putstr_fd(detail);
	if (test[32] == 1)
		r += test_putendl_fd(detail);
	if (test[33] == 1)
		r += test_putnbr_fd(detail);
	if (test[34] == 1)
		r += test_lstnew(detail);
	if (test[35] == 1)
		r += test_lstadd_front(detail);
	if (test[36] == 1)
		r += test_lstsize(detail);
	if (test[37] == 1)
		r += test_lstlast(detail);
	if (test[38] == 1)
		r += test_lstadd_back(detail);
	if (test[39] == 1)
		r += test_lstdelone(detail);
	if (test[40] == 1)
		r += test_lst_clear(detail);
	if (test[41] == 1)
		r += test_lstiter(detail);
	if (test[42] == 1)
		r += test_lstmap(detail);
	if (test[43] == 1)
		r += test_memcmp(detail);
}
