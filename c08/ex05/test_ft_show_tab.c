#include "../ex04/ft_strs_to_tab.c"
//#include "../ex04/ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int main(int argc, char *argv[]) {
 //printf("size of t_stock_str%lu\n", sizeof(t_stock_str));
  t_stock_str *out;
  printf("argc: %d\n", argc);
  out = ft_strs_to_tab(argc, argv);

  for (int i = 0; i < argc; i++) {
    printf("out->size %d\n", out[i].size);
    printf("out->str %s\n", out[i].str);
    printf("out->copy %s\n", out[i].copy);
  }

  printf("&&&&&&&&&&&&&&&&&\n");

  ft_show_tab(out);
}

