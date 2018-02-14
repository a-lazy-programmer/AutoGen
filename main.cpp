/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: root
 *
 * Created on February 13, 2018, 9:16 AM
 */

#include<stdio.h>
int i,j,n,x,y[10],m;
int k[10];
char game[10][10];
void disp(char game[10][10]);
void del(int x,int y[10],int k[10],char game[10][10]) {
    for(i=2;i<=n;i++) {
        for(j=1;j<=i;j++) {
            //printf("x = %d, y= %d,i = %d,j = %d,k = %d\n",x,y[j],i,j,k[j]);
                if(i==x && j==y[k[j]]) {
                    //printf("Key: %d at j = %d",y[k[j]],j);
                    game[i][j]=32;
                    printf("%c\t",game[i][j]);
                    }
                else {
                    printf("%c\t",game[i][j]);
                }
            }
        printf("\n");
        }
    }
void disp(char game[10][10]) {
    for(i=2;i<=n;i++) {
        for(j=1;j<=i;j++) {
            game[i][j]=124;
            printf("%c\t",game[i][j]);
        }
        printf("\n");
    }
    while(1) {
        printf("Enter the row from which you want to remove: ");
        scanf("%d",&x);
        printf("Enter the no. of sticks you want to remove: ");
        scanf("%d",&m);
        for(i=1;i<=m;i++) {
            printf("Enter the location of stick %d which you want to remove: ",i);
            scanf("%d",&y[i]);
            k[i]=y[i];
            //printf("y[i] %d at i = %d\n",y[i],i);
            //printf("k[i]: %d at i = %d\n",k[i],i);
        }
        del(x,y,k,game);
    }
}
int main() {
    printf("\nGame Begins");
    printf("\nEnter the game size:");
    scanf("%d",&n);
    disp(game);
}

