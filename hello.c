//
//  hello.c
//  magic
//
//  Created by 刘开放 on 2017/9/26.
//  Copyright © 2017年 刘开放. All rights reserved.
//

#include<stdio.h>
int main(){
    int i=0;
    scanf("%d",&i);
    int end=i;
    if(i>100000){
        printf("you should input the number less than 100000");
        return -1;
    }
    int a[10]={0};
    for(int j=9;j--;j>0){
        a[j]=i%10;
        i=(i-a[j])/10;
    }
    int oppose=0;
    int n=1;
    for(int k=0;k++;k<10){
        if(a[k]==0)
            continue;
        else{
            oppose=a[k]*n+oppose;
            n=10*n;
            printf("%d\n",oppose);
        }
        
    }
    end=end+oppose;
    printf("%d",end);
    return 0;
    
    
}
