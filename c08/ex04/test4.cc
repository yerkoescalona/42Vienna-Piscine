#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"


void print_stock(t_stock_str *stock, int size) {
    for (int i = 0; i < size; i++) {
        printf("Element %d:\n", i);
        printf("Size: %d\n", stock[i].size);
        printf("Str: %s\n", stock[i].str);
        printf("Copy: %s\n", stock[i].copy);
        printf("\n");
    }
}

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

    // Test ft_strs_to_tab function with ac = 3
    char *arr[] = {"String 1", "Another string", "Last string"};
    int size = sizeof(arr) / sizeof(arr[0]);
    t_stock_str *stock = ft_strs_to_tab(size, arr);

    // Display the initial contents of the stock array
    printf("Initial stock array:\n");
    print_stock(stock, size);

    // Modify one of the elements to see if it affects the other
    stock[0].str = "Modified string";
    stock[1].copy = "Modified copy";

    // Display the modified contents of the stock array
    printf("Modified stock array:\n");
    print_stock(stock, size);

    // Free the memory allocated in ft_strs_to_tab
    for (int i = 0; i < size; i++) {
        free(stock[i].str);
        free(stock[i].copy);
    }
    free(stock);

    // Test ft_strs_to_tab function with ac = 0
    int ac_zero = 0;
    char **av_null = NULL;
    t_stock_str *stock_ac_zero = ft_strs_to_tab(ac_zero, av_null);
    if (stock_ac_zero == NULL) {
        printf("ft_strs_to_tab returned NULL for ac = 0.\n");
    }

    return 0;
}

