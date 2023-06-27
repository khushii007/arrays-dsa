#include<stdio.h>
//return duplicate number

void main() {
    int n,arr[20],dup[20];
    int k=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i]==arr[j]) {
                dup[k]=arr[i];
                k++;
            }
        }
    }
    printf("\nDuplicate numbers: ");
    for(int i=0; i<k; i++) {
        printf("%d ",dup[i]);
    }
}