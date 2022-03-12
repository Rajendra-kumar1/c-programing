//Write a C program to read through an array of any type using pointers. Copy the elements of the first array to second array using pointers

#include <stdio.h>
int main() {
    int data[5];

    printf("Enter elements: ");         // eneter element the first array
    for (int i = 0; i < 5; ++i)
        scanf("%d", data + i);

    printf("You entered: \n");           // print enter element second array
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(data + i));        // print copy the element  using pounter
    return 0;
}
