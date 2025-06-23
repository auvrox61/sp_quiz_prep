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

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    bsa(arr,n);
    int k;
    for(int i=0;i<n;i++){
        k=arr[i+m-1];
    }
    int ans;
    for(int i=0;i<n;i++){
        if(k==arr[i]){
            printf("%d\n",i+1);
        }
    }
    return 0;
}