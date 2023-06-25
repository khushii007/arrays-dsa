#include<stdio.h>

void sort012(int arr[], int size) {
    int low=0;
    int mid=0;
    int high=size-1;

    while(mid<=high) {
        switch(arr[mid]) {

            case 0: {
                int temp = arr[mid];
                arr[mid] = arr[low];
                arr[low] = temp;
                mid++;
                low++;
            }
            break;

            case 1:
            mid++;
            break;

            case 2: {
                int temp = arr[mid];
                arr[mid] = arr[high];
                arr[high] = temp;
                high--;
            }
            break;
        }
    }
}
 
void main() {
    int size,arr[20];
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("\nEnter numbers(0,1,2):");
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    printf("\nArray before sorting:");
    for(int i=0;i<size;i++) {
        printf(" %d ",arr[i]);
    }

    sort012(arr,size);
    printf("\nArray after sorting: ");
    for(int i=0;i<size;i++) {
        printf(" %d ",arr[i]);
    }
}