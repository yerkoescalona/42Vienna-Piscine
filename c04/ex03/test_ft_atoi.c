#include <stdio.h>

int ft_atoi(char *str);

int main() {

  char t1[] = "0";
  char t2[] = "1234";
  char t3[] = "+-1325632167";
  char t4[] = "2147483647";
  char t5[] = "-2147483648";
  printf("%s %d\n", t1, ft_atoi(t1));
  printf("%s %d\n", t2, ft_atoi(t2));
  printf("%s %d\n", t3, ft_atoi(t3));
  printf("%s %d\n", t4, ft_atoi(t4));
  printf("%s %d\n", t5, ft_atoi(t5));
  return 0;
}
