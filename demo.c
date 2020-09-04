#include<stdalign.h>
#include<conio.h>
#include<stdio.h>


void sort(int *,int );


void main(void){
    int a[25];
    int number;

    sort(a,number);
}

void sort(int *p,int number){
    register int counter = 0;
    for (register int i=0; i<number; i++){
        for (register int j=counter; j<number; j++){
            if (*(p+counter) > *(p+j+1)){
                /* Swaping Variables */
                *(p+counter) = *(p+counter) ^ *(p+j+1);
                *(p+j+1)     = *(p+counter) ^ *(p+j+1);
                *(p+counter) = *(p+counter) ^ *(p+j+1);
            }
        }
        counter++;
    }
}