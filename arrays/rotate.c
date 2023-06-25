#include<stdio.h>

void main() {
    int size, arr[20], rot[20];
    int p=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("\nEnter the elements: ");
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }

    printf("\nBefore rotation: ");
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    rot[p]=arr[size-1];
    p++;
    for(int i=0;i<size-1;i++) {
        rot[p]=arr[i];
        p++;
    }
    printf("\nAfter rotation: ");
    for(int i=0;i<size;i++) {
        printf("%d ",rot[i]);
    }
}