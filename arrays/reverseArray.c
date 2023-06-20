#include<stdio.h>

/*void main() {
    int n, arr[20];
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    printf("\nEnter the array:");
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    printf("\nThe given array is : \n");
    for(int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }

    printf("\nReversed array is :\n");
    for(int i=n; i>0; i--) {
        printf("%d ",arr[i-1]);
    }
}*/

void main() {
    int n, arr[20], pos;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    printf("\nEnter the array:");
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the position to reverse after :");
    scanf("%d",&pos);

    printf("\nThe given array is : \n");
    for(int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }

    printf("\nReversed array: \n");
    for(int i=0; i<=pos; i++) {
        printf("%d ",arr[i]);
    }
    for(int i=n; i>pos+1; i--) {
        printf("%d ",arr[i-1]);
    }
}