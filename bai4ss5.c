#include <stdio.h>

int main (){
	int thuNhap ;
	double thue ;
	printf ("So tien :");
	scanf("%d",&thuNhap);
	
	if (thuNhap <= 0){
	printf ("So tien nhap khong hop le ");
	return 0 ;
}
	if (thuNhap<=5) 
		thue = thuNhap*0.05;
	else if (thuNhap>5&&thuNhap<=10)
	    thue = thuNhap*0.1;
	else 
	    thue = thuNhap*0.15;
	
	printf ("Thue thu nhap phai dong :%.2lf",thue);
	
	return 0;
}
