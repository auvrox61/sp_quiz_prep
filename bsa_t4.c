#include<stdio.h>

void bsa1(int arr1[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr1[j]>arr1[j+1]){
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
}

void bsa2(int arr2[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr2[j]>arr2[j+1]){
                int temp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    bs1(arr1,n);
    bs2(arr2,n);
    int found=0;
    for(int i=0;i<n;i++){
        if(arr1[i]==arr2[i]){
            found=1;
        } else{
            found=0;
        }
    }
    if(found){
        printf("SAME\n");
    } else{
        printf("DIFFERENT\n");
    }
    return 0;
}