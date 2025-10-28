#include <stdio.h>

int main (){
	int tuoi  ;
	double giaVe ;
	printf ("Nhap tuoi :");
	scanf ("%d",&tuoi);
	
	if (tuoi<0 || tuoi>130){
	printf ("Tuoi khong hop le ");
	return 0 ;
	}
	else if (tuoi<6)
	giaVe = 20000*0;
	else if (tuoi<18)
	giaVe = 20000*0.5;
	else if (tuoi <60)
	giaVe = 20000;
	else 
	giaVe = 20000*0.7;
	printf ("So tien ve :%.0lf VND",giaVe);
	return 0;
}

