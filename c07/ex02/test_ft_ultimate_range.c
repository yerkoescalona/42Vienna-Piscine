
#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max);
int main() {
  int *range;
  int min = 3;
  int max = 100000;
  int len = ft_ultimate_range(&range, min, max);
  printf("min: %d max: %d len: %d\n", min, max, len);
   for (int i = 0; i < len; i++) {
     printf("%d, ", range[i]);
   }

  //int i = 0;
  //while (range[i] != NULL){
  //	printf("%d\n", range[i]);
  //}
}
