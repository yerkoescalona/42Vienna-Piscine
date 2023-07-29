
void ft_putchar(char c);
int ft_strlen(char *str);
void ft_putnbr_base(int nbr, char *base);

int main() {
  int l = 5;
  int numbers[l];
  numbers[0] = 0;
  numbers[1] = 1234;
  numbers[2] = -1234;
  numbers[3] = 2147483647;
  numbers[4] = -2147483648;

  char decimal[] = "0123456789";
  char binary[] = "01";
  char hexadecimal[] = "0123456789ABCDEF";
  //char octal[] = "poneyvif";
  char octal[] = "01234567";

  char wrong[] = "";
  char wrong2[] = "+-";
  char wrong3[] = "abca";

  int i = 0;
  while (i < l) {
    ft_putnbr_base(numbers[i], decimal);
    ft_putchar(';');
    ft_putnbr_base(numbers[i], binary);
    ft_putchar(';');
    ft_putnbr_base(numbers[i], hexadecimal);
    ft_putchar(';');
    ft_putnbr_base(numbers[i], octal);
    ft_putchar(';');
    ft_putnbr_base(numbers[i], wrong);
    ft_putchar(';');
    ft_putnbr_base(numbers[i], wrong2);
    ft_putchar(';');
    ft_putnbr_base(numbers[i], wrong3);
    ft_putchar('\n');
    i++;
  }


  return 0;
}
