#include<stdio.h>

/*
Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.
*/


void main() {
    
    FILE *e, *o;
    int i;

    e = fopen("D://even.txt", "w");
    o = fopen("D://odd.txt", "w");

    if(e == NULL || o == NULL)
	{
        printf("can't open file\n");
    }
    for(i = 50; i <= 70; i++)
	{
        if(i % 2 == 0){
           fprintf(e,"%d\n", i);
        }else{
           fprintf(o,"%d\n", i);
        }
    }

    printf("Successfully added  numbers to files\n");
    fclose(e);
    fclose(o);

}