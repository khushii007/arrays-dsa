#include<stdio.h>
void main() {
    int n, arr[20];
    printf("\nEnter the size of array :");
    scanf("%d",&n);
    printf("\nEnter the array:");
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    int max = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i]<min) {
            min=arr[i];
        }
    }
    for(int i=1; i<n; i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    printf("\nLargest element: %d",max);
    printf("\nSmallest element: %d",min);
}