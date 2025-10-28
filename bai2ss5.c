#include <stdio.h>

int main (){
	double a , b ,x;
	printf ("nhap so a :");
	scanf ("%lf",&a);
	printf ("nhap so b :");
	scanf ("%lf",&b);
	
	if (a==0 && b==0)
	printf ("phuong trinh co vo so nghiem");
	else if (a==0 && b!=0)
	printf ("phuong trinh vo nghiem");
	else {
	x = -b/a ;
	printf ("phuong trinh co nghiem x = %.2lf",x);
}
	
	
	return 0;
}

