#include <stdio.h>

void main()
{
 int a[40], i;
 a[0]=0 ;
 a[1]=1 ;
 
 for(i=2;i<=39;i++)
 {
 	a[i]=a[i-2] + a[i-1];
 }
 
 printf("The first 40 Fibonacci sequence are");
 for(i=0;i<=39;i++)
 {
 	printf(" %d", a[i]);
 	if(i!=39){
 		printf(",");
 	}
 	
 }
}