#include<stdio.h>
#include<string.h>

typedef struct{
    char name[50];
    int ml,ds,nt,total;
}students;

void bsaTotal(students student[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(student[j].total<student[j+1].total){
                students temp=student[j];
                student[j]=student[j+1];
                student[j+1]=temp;
            }
        }
    }
}

void bsaMl(students student[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(student[j].total==student[j+1].total&&student[j].ml<student[j+1].ml){
                students temp=student[j];
                student[j]=student[j+1];
                student[j+1]=temp;
            }
        }
    }
}

void bsaDs(students student[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(student[j].total==student[j+1].total&&student[j].ml==student[j+1].ml&&student[j].ds<student[j+1].ds){
                students temp=student[j];
                student[j]=student[j+1];
                student[j+1]=temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    students student[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %d %d",&student[i].name,&student[i].ml,&student[i].ds,&student[i].nt);
        student[i].total=student[i].ml+student[i].ds+student[i].nt;
    }
    bsaTotal(student,n);
    bsaMl(student,n);
    bsaDs(student,n);
    for(int i=0;i<n;i++){
        printf("%d %s\n",i+1,student[i].name);
    }
    return 0;
}