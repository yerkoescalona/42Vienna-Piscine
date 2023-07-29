#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int main(){//t argc, char *argv[]) {

  char *test[] = {};
  //char *test[0];
  t_stock_str *out = ft_strs_to_tab(0, test);
  printf("%p\n", out);

  for (int i = 0; i < 0; i++) {
    printf("out->size \"%d\"\n", out[i].size);
    printf("out->str \"%s\"\n", out[i].str);
    printf("out->str \"%p\"\n", out[i].str);
    printf("out->copy \"%s\"\n", out[i].copy);
    printf("out->copy \"%p\"\n", out[i].copy);
	free(out[i].copy);
  }
  free(out);
}
