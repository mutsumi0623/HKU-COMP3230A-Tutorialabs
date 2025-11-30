// file: lab1-stack.c
#include <stdio.h>
#include <stdlib.h>

int* initialize_array(int n){
    int *stack_arr = malloc(n * sizeof(int));
    if (stack_arr == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    for (int i = 0; i < n; i++) {
        stack_arr[i] = i * i;
    }

    return stack_arr;
}
int main(int argc, char *argv[]) {
    int *arr;  // Pointer for our dynamically allocated array

    // Check if the command line argument is provided
    if (argc != 2) {
        printf("Usage: %s <number_of_elements>\n", argv[0]);
        return 1;  // Exit with an error code
    }

    // Convert the command line argument to an integer
    int n = atoi(argv[1]);

    arr = initialize_array(n);

    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    free(arr);
    return 0;
}
