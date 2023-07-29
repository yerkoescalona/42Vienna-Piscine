
void ft_putchar(char c);
void ft_putnbr(int nb);

int main() {
  ft_putnbr(0);
  ft_putchar('\n');
  ft_putnbr(1234);
  ft_putchar('\n');
  ft_putnbr(-1234);
  ft_putchar('\n');
  ft_putnbr(2147483647);
  ft_putchar('\n');
  ft_putnbr(-2147483648);
  ft_putchar('\n');
  return 0;
}
