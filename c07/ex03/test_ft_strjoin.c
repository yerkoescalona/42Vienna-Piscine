#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(int argc, char **argv) {
  char sep[] = ", ";
  int size = argc - 1;
  char **strs = &argv[1];
  printf("argc %d\n", argc);
  char *out = ft_strjoin(size, strs, sep);
  printf("join %s\n", out);
  free(out);


  int size2=0;
  char **strs2 = NULL;
  char *out2 = ft_strjoin(size2, strs2, sep);
  printf("join %s\n", out2);
  free(out2);

  return 0;
}
