#include<stdio.h>

void sort(int arr[], int size) {
    int temp[20];
    int j=0;
    for(int i=0;i<size;i++) {
        if(arr[i]>0) {
            temp[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<size;i++) {
        if(arr[i]<0) {
            temp[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<size;i++) {
        arr[i]=temp[i];
    }
}

void main() {
    int size,arr[20];
    printf("Enter the size of array :");
    scanf("%d",&size);
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    printf("\nArray before sorting:");
    for(int i=0;i<size;i++) {
        printf(" %d ",arr[i]);
    }
    sort(arr,size);
    printf("\nArray after sorting: ");
    for(int i=0;i<size;i++) {
        printf(" %d ",arr[i]);
    }
}