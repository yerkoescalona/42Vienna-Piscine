#include <stdio.h>
#include <string.h>

int ft_atoi_base(char *str, char *base);

int main() {
  char d[] = "1234";
  char d1[] = "-1234";
  char d2[] = "  -+--2147483648";
  char d3[] = "  -+---2147483647";
  char b[] = "10";
  char b1[] = "-10";
  char b2[] = "--10";
  char h[] = "A1";
  char o[] = "oo";

  char decimal[] = "0123456789";
  char binary[] = "01";
  char hexadecimal[] = "0123456789ABCDEF";
  char octal[] = "poneyvif";

  printf("%s %d\n", d, ft_atoi_base(d, decimal));
  printf("%s %d\n", d1, ft_atoi_base(d1, decimal));
  printf("%s %d\n", d2, ft_atoi_base(d2, decimal));
  printf("%s %d\n", d3, ft_atoi_base(d3, decimal));
  printf("%s %d\n", b, ft_atoi_base(b, binary));
  printf("%s %d\n", b1, ft_atoi_base(b1, binary));
  printf("%s %d\n", b2, ft_atoi_base(b2, binary));
  printf("%s %d\n", h, ft_atoi_base(h, hexadecimal));
  printf("%s %d\n", o, ft_atoi_base(o, octal));

  return 0;
}
