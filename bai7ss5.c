#include <stdio.h>

int main (){
	char kiTu;
	printf ("Nhap vao mot ki tu :");
	scanf ("%c",&kiTu);
	
	if ((kiTu < 65) || (kiTu > 90 && kiTu < 97)|| (kiTu > 122)){
	printf ("Khong phai chu cai");
	return 0;
	}else if (kiTu >= 65 && kiTu <= 90){
		kiTu = kiTu + 32 ;
	}else{
		kiTu = kiTu - 32 ;
	}
	printf ("Chu la :%c",kiTu);
	
	return 0 ;
}
