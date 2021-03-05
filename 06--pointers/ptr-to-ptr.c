#include <stdio.h>

int main(void)
{
    // Declare variables
    int num1, num2, num3;
    int *ptr_arr[3];
    int **ptr_to_ptr;
    int i;
    int arr_size;

    // Initialize variables
    ptr_to_ptr = ptr_arr;
    *ptr_to_ptr = &num1;
    *(ptr_to_ptr + 1) = &num2;
    *(ptr_to_ptr + 2) = &num3;

    /**
     * Pointer Operation
     */
    arr_size = sizeof(ptr_arr) / sizeof(ptr_arr[0]);
    for (i = 0; i < arr_size; i++)
    {
        printf("Input value : ");
        scanf("%d", *(ptr_to_ptr + i));
    }

    // Print the result of pointer operation
    for (i = 0; i < arr_size; i++)
    {
        printf("%d \t", **(ptr_to_ptr + i));
    }

    /*
	for (i = 0; i < 3; i++) {
		printf("\d \t", **(ptr_to_ptr + i));
	}
	*/

    printf("\n%d %d %d\n", num1, num2, num3);

    return 0;
}
