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
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int eligible=0;
    bsa(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i]+k<=5){
            eligible++;
        }
    }
    int team=eligible/3;
    printf("%d\n",team);
    return 0;
}