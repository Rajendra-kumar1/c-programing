//a c program to print all elements of two dimensional array using pointer 
#include<stdio.h>
int main(void){

    int arr[3][3]={{1,2,3},{5,6,7},{9,0,1}};
    int *ptr = &arr;

    //accessing the elements of 2D array using ptr
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++)
            printf("%d ",*((ptr+i*3)+j));     // 3is the number of columns
            //*((ptr+i*4)+j) is similar to arr[i][j]
            printf("\n");
    }
    return 0;
}
                    // output 3*3 matrix
