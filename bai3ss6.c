#include <stdio.h>

int main (){
	int N , i = 1 , tong = 0;
	printf ("nhap mot so nguyen duong bat ky :");
	scanf ("%d",&N);
	while (i<=N ){
		tong +=i ;
		i++;
	}
	printf ("tong = %d",tong);
	
	
	
	return 0;
}
