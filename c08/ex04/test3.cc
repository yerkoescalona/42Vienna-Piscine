#include <iostream>
#include "ft_stock_str.h"

// Include the function prototypes defined in ft_stock_str.h
int ft_strlen(char *str);
char *ft_strcpy(char *dest, char *src);
t_stock_str *ft_strs_to_tab(int ac, char **av);

int main() {
    // Test ft_strlen function
    char str1[] = "Hello, world!";
    int len1 = ft_strlen(str1);
    std::cout << "Length of str1: " << len1 << std::endl;

    char str2[] = "";
    int len2 = ft_strlen(str2);
    std::cout << "Length of str2: " << len2 << std::endl;

    // Test ft_strcpy function
    char dest[50];
    char src[] = "Copy this string";
    char *result = ft_strcpy(dest, src);
    std::cout << "Copied string: " << result << std::endl;

    // Test ft_strs_to_tab function
    char *arr[] = {"String 1", "Another string", "Last string"};
    int size = sizeof(arr) / sizeof(arr[0]);
    t_stock_str *stock = ft_strs_to_tab(size, arr);

    // Display the contents of the stock array
    for (int i = 0; i < size; i++) {
        std::cout << "Element " << i << ":" << std::endl;
        std::cout << "Size: " << stock[i].size << std::endl;
        std::cout << "Str: " << stock[i].str << std::endl;
        std::cout << "Copy: " << stock[i].copy << std::endl;
    }

    // Don't forget to free the memory allocated in ft_strs_to_tab
    for (int i = 0; i < size; i++) {
        free(stock[i].str);
        free(stock[i].copy);
    }
    free(stock);

    return 0;
}

