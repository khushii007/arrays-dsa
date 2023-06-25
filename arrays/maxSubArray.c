#include<stdio.h>

int kadaneAlgo(int arr[], int size) {
    int max_so_far = arr[0];
    int max_here = arr[0];
    for(int i=1;i<size;i++) {
        max_here = arr[i] > (max_here + arr[i]) ? arr[i] : (max_here + arr[i]);
        max_so_far = max_here > max_so_far ? max_here : max_so_far;
    }
    return max_so_far;
}


void main() {
    int size, arr[20];
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("\nEnter the elements: ");
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int max_so_far = kadaneAlgo(arr,size);
    printf("\nMaximum sub array sum is = %d ",max_so_far);

}