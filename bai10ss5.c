#include <stdio.h>

int main (){
	int soDien , loaiHo ;
	float phuPhi = 0.0 , tienDien = 0.0 , tienBacThang ;
	
	printf ("Nhap so dien :");
	scanf ("%d",&soDien);
	if (soDien < 0) {
        printf("Loi: So dien khong duoc am!\n");
        return 0;
}
	printf ("Loai ho gia dinh :\n");
	printf ("1 : Ho gia dinh \n");
	printf ("2 : Ho kinh doanh \n");
	printf ("3 : Ho san xuat\n");
	printf ("Nhap 1 , 2 va 3 de chon loai :");
	scanf ("%d",&loaiHo);
	
	if (soDien<=50){
		tienBacThang = soDien * 1500;
	}else if (soDien<=100)
	    tienBacThang = 50*1500 + (soDien-50)*2000 ;
	else if (soDien<=200)
	    tienBacThang = 50*1500 + 50*2000 + (soDien-100) * 2500 ;
	else 
	    tienBacThang = 50*1500 + (50*2000) + (100*2500) + (soDien-200)*3000;
	
	switch (loaiHo) {
		case 1 :
	        phuPhi =  tienBacThang *0.05 ;
	    break ;
	    case 2 :
	        phuPhi = tienBacThang * 0.1 ;
	    break ;
	    case 3 : 
	        phuPhi = tienBacThang * 0.08 ;
	    break ;
	default :
		printf ("Nhap loai ho gia dinh sai !!");
		return 0 ;
	}
	
	tienDien = tienBacThang + phuPhi ;
	printf ("So tien dien la : %.3f",tienDien);
	
	
	return 0 ;
}

