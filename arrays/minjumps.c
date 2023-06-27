#include<stdio.h>

//minimum jumps needed to reach the last element 

void main() {
    int n, arr[20];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int temp=arr[0];
    int j=0, jumps=0;
    while(j<n-1) {
        temp=arr[j+arr[j]];
        if(temp==0) {
            jumps=-1;
            break;
        }
        j=j+arr[j];
        jumps++;
    }
    printf("\nNo. of jumps needed: %d",jumps);
}