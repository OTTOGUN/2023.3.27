//
// Created by 39221 on 2023/3/16.
//
#include<stdio.h>
#include <synchapi.h>
#include<string.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>

/*
int main(){
    int i = 0;
    int j = 0;
    int k = 0;
    int n = 0;
    for(i = 1;i < 5;i++){
        for(j = 1;j < 5;j++){
            for(k = 1;k < 5;k++)
            {
            if(i != k && i != j && k != j)
            {
                printf("%d%d%d ",i,j,k);
            }
            n++;
            }
        }
    }
    printf("\n一共有%d个数",n);
}*/

/*
double Final_Profits(double p){
    double Commission = 0;
    if(p > 1000000){
        Commission += (p-1000000) / 100;
    }else if(p > 600000){
        Commission += Commission + p * 1.5 / 100;
    }else if(p > 400000){
        Commission += Commission + p * 3 / 100;
    }else if(p > 200000){
        Commission += Commission + p * 5 / 100;
    }else if(p > 100000){
        Commission += Commission + (p - 100000) * 7.5 / 100 + 99999 * 0.1;
    }
    printf("那么你的月工资为：%lf",Commission + p);
}

int main(){
    double Profits = 0;
    printf("请输入你这个月的工资：");
    scanf("%lf",&Profits);
    Final_Profits(Profits);
}*/

int main(){
int x =91;
int y = 100;
int n = 1;
while(y > 0){
    if(x > 100){
        x-= 10;
        y--;
    }else{
        x++;
    }
n++;}
    printf("%d",n);
}