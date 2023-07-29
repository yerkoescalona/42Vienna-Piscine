#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

// Include the function prototypes defined in ft_stock_str.h
int ft_strlen(char *str);
char *ft_strcpy(char *dest, char *src);
t_stock_str *ft_strs_to_tab(int ac, char **av);

int main() {
    // Test ft_strlen function
    char str1[] = "Hello, world!";
    int len1 = ft_strlen(str1);
    printf("Length of str1: %d\n", len1);

    char str2[] = "";
    int len2 = ft_strlen(str2);
    printf("Length of str2: %d\n", len2);

    // Test ft_strcpy function
    char dest[50];
    char src[] = "Copy this string";
    char *result = ft_strcpy(dest, src);
    printf("Copied string: %s\n", result);

    // Test ft_strs_to_tab function
    char *arr[] = {"String 1", "Another string", "Last string"};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Test when ac is 0
    int zero_size = 0;
    t_stock_str *zero_stock = ft_strs_to_tab(zero_size, NULL);
    if (zero_stock == NULL) {
        printf("Case: ac is 0, returned NULL\n");
    }

    // Test when ac is different from av
    int diff_size = 3;
    t_stock_str *diff_stock = ft_strs_to_tab(diff_size, arr);

    // Display the contents of the stock array
    for (int i = 0; i < size; i++) {
        printf("Element %d:\n", i);
        printf("Size: %d\n", diff_stock[i].size);
        printf("Str: %s\n", diff_stock[i].str);
        printf("Copy: %s\n", diff_stock[i].copy);

        // Test modifying str and checking if copy is affected
        diff_stock[i].str[0] = 'M';
        printf("Modified Str: %s\n", diff_stock[i].str);
        printf("Copy after modifying Str: %s\n", diff_stock[i].copy);

        // Test modifying copy and checking if str is affected
        diff_stock[i].copy[0] = 'A';
        printf("Modified Copy: %s\n", diff_stock[i].copy);
        printf("Str after modifying Copy: %s\n", diff_stock[i].str);
    }

    // Don't forget to free the memory allocated in ft_strs_to_tab
    for (int i = 0; i < size; i++) {
        free(diff_stock[i].str);
        free(diff_stock[i].copy);
    }
    free(diff_stock);

    return 0;
}

