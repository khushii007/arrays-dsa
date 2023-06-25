#include<stdio.h>

void main() {
    int s1, s2, arr1[20], arr2[20];
    printf("Enter size for arr1: ");
    scanf("%d",&s1);
    for(int i=0;i<s1;i++) {
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter size for arr2: ");
    scanf("%d",&s2);
    for(int i=0;i<s2;i++) {
        scanf("%d",&arr2[i]);
    }

    int intArr[20];
    int k=0;
    for(int i=0;i<s1;i++) {
        for(int j=0;j<s2;j++) {
            if(arr1[i]==arr2[j]) {
                intArr[k]=arr1[i];
                k++;
            }
        }
    }

    int uniArr[40];
    int p=0;
    for(int i=0;i<s1;i++) {
        uniArr[p]=arr1[i];
        p++;
    }
    for(int j=0;j<s2;j++) {
        for(int i=0;i<s1;i++) {
            if(arr1[i]==arr2[j]) {
                arr2[j]=-1;
            }
        }
    }
    for(int j=0;j<s2;j++) {
        if(arr2[j]!=-1) {
            uniArr[p]=arr2[j];
            p++;
        }
    }

    printf("\nIntersection array : ");
    for(int i=0;i<k;i++) {
        printf("%d ",intArr[i]);
    }

    printf("\nUnion array : ");
    for(int i=0;i<p;i++) {
        printf("%d ",uniArr[i]);
    }

}