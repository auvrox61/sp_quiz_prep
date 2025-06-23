#include<stdio.h>
#include<stdbool.h>

void bsa(float arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                float temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

bool nue(float arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    float arr[n];
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    if(nue(arr,n)){
        printf("NO\n");
    } 
    else if(!nue(arr,n)){
        printf("YES\n");
        bsa(arr,n);
        for(int i=0;i<n;i++){
            printf("%f ",arr[i]);
        }
    }
    return 0;
}