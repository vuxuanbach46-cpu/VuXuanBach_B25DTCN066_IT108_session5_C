#include <stdio.h>

int main (){
	int tieuThu ;
	double tien ;
	printf ("Nhap so nuoc tieu thu trong thang :");
	scanf ("%d",&tieuThu);
	
	 if (tieuThu < 0) {
        printf("Loi: So nuoc khong hop le! Vui long nhap lai .\n");
        return 0;
}
	if (tieuThu <= 10){
		tien = tieuThu * 6000 ;
	}else if (tieuThu <= 20){
		tien = (10 * 6000) + (tieuThu - 10) * 7000 ;
	}else if (tieuThu <= 30){
		tien = (10 * 6000) + (10 * 7000) + (tieuThu - 20) * 8500 ;
	}else{
	    tien = (10 * 6000) + (10 * 7000) + (10 * 8500) + (tieuThu - 30) * 10000;
    }
	printf ("Tong tien la :%.0lf",tien);	
	return 0;
}
