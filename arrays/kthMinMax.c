#include<stdio.h>

void bubblesort(int arr[], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void main() {
    int n, arr[20],k;
    printf("\nEnter the size of array :");
    scanf("%d",&n);
    printf("\nEnter the array:");
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the value for k: ");
    scanf("%d",&k);

    bubblesort(arr,n);
    printf("\nkth largest element : %d",arr[n-k+1]);
    printf("\nkth smallest element : %d",arr[k]);
}