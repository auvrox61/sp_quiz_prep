#include<stdio.h>

void bsa(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int bs(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            return mid;
        } else if(arr[mid]<x){
            high=mid-1;
        } else if(arr[mid]>x){
            low=mid+1;
        }
    }
    return 0;
}

int main(){
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    bsa(arr,n);
    if(bs(arr,n,x)!=0){
        printf("FOUND\n");
    }else{
        printf("NOT FOUND\n");
    }
    return 0;
}