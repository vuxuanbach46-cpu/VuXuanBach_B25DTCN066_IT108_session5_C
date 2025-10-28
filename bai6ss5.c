#include <stdio.h>

int main (){
	double a , b , kq;
	char toanTu ;
	printf ("Nhap so a :");
	scanf ("%lf",&a);
	printf ("nhap so b :");
	scanf ("%lf",&b);
	printf ("Nhap mot toan tu :");
	scanf (" %c",&toanTu);
	
	switch (toanTu) {
		case '+':
			kq = a + b;
		break ;
		case '-':
			kq = a - b ;
		break ;
		case '*':
			kq = a * b;
		break ;
		case '/':
			if (b==0){
			    printf ("Khong the chia cho 0");
			    return 0;
			}else {
    		    kq = a / b;
    }
		break ;
	default :
		printf ("Toan tu khong hop le ");
}
	printf ("Ket qua la :%.2lf",kq);
	
	return 0 ;
}

