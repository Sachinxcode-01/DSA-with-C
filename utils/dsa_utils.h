/**
 * @file dsa_utils.h
 * @brief Common utility helpers, macros, and debugging functions for DSA with C.
 */

#ifndef DSA_UTILS_H
#define DSA_UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/* ANSI Terminal Colors for readable test output */
#define COLOR_RESET   "\033[0m"
#define COLOR_GREEN   "\033[32m"
#define COLOR_RED     "\033[31m"
#define COLOR_CYAN    "\033[36m"
#define COLOR_YELLOW  "\033[33m"

/**
 * @brief Swap two integer values using pointers.
 */
static inline void swap_int(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * @brief Print an integer array formatted nicely.
 */
static inline void print_array(const int arr[], int size, const char *label) {
    if (label != NULL) {
        printf("%s: [", label);
    } else {
        printf("[");
    }
    for (int i = 0; i < size; i++) {
        printf("%d%s", arr[i], (i == size - 1) ? "" : ", ");
    }
    printf("]\n");
}

/**
 * @brief Safe wrapper around malloc that aborts if allocation fails.
 */
static inline void *safe_malloc(size_t size) {
    void *ptr = malloc(size);
    if (!ptr && size > 0) {
        fprintf(stderr, COLOR_RED "[Memory Error] Failed to allocate %zu bytes!\n" COLOR_RESET, size);
        exit(EXIT_FAILURE);
    }
    return ptr;
}

/**
 * @brief Simple assertion macro for DSA testing.
 */
#define DSA_ASSERT(cond, msg) \
    do { \
        if (!(cond)) { \
            fprintf(stderr, COLOR_RED "[-] Assertion failed: %s (%s:%d)\n" COLOR_RESET, msg, __FILE__, __LINE__); \
        } else { \
            printf(COLOR_GREEN "[+] Test passed: %s\n" COLOR_RESET, msg); \
        } \
    } while(0)

#endif /* DSA_UTILS_H */
