#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main() {
	char d[] = "42";
	char decimal[] = "0123456789";
	char hexadecimal[] = "0123456789abcdef";
	char binary[] = "01";
	char octal[] = "01234567";
	printf("%s %s->%s = %s\n", d, decimal, hexadecimal, ft_convert_base(d, decimal, hexadecimal));
	printf("%s %s->%s = %s\n", d, decimal, binary, ft_convert_base(d, decimal, binary));
	printf("%s %s->%s = %s\n", d, decimal, octal, ft_convert_base(d, decimal, octal));
	return 0;

}
