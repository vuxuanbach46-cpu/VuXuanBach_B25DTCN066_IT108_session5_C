#include <stdio.h>



int main (){
	int a , b ;
	printf ("nhap so nguyen a :");
	scanf ("%d",&a);
	printf ("nhap so nguyen b :");
	scanf("%d",&b);
	
	if(a==b)
	printf ("Hai so bang nhau ");
	else if (a>b)
	printf ("so lon hon la :%d",a);
	else 
	printf ("so lon hon la :%d",b);
	
	return 0;
}
