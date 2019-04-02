/*
Problem Statement -
Given an integer an N. The task is to print the position of first set bit found from right side in the binary representation of the number.
*/

#include<stdio.h>
int main() {
	//code
	int T, num=0, ctr=0, rdbit;
	scanf("%d",&T);
	while(T--){
	    ctr=0;
	    rdbit = 1;
	    scanf("%d",&num);
	    
	    if(num==0){
	        printf("%d",0);
	        break;
	    }
	    while((num&rdbit)==0){
	        rdbit = rdbit<<1;
	        ctr++;
	    }
	    printf("%d",ctr+1);
	    if(T!=0){
	        printf("\n");
	    }
	}
	return 0;
}