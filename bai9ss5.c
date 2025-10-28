#include <stdio.h>

int main (){
	float hsLuong , phuCap , thuong = 0.0 , luong ;
	int ngayCong , chucVu ;
	printf ("Nhap he so luong :");
	scanf ("%f",&hsLuong);
	if(hsLuong<=0){
		printf ("Loi he so luong !!");
		return 0 ;
	}
	printf ("Nhap so ngay cong :");
	scanf ("%d",&ngayCong);
	if(ngayCong<=0){
		printf ("Loi ngay cong !!");
		return 0 ;
	}
	printf ("Chuc vu \n");
	printf ("1 : Nhan vien\n");
	printf ("2 : To truong \n");
	printf ("3 : Quan ly \n");
	printf ("Nhap chuc vu 1 , 2 hoac 3 :");
	scanf ("%d",&chucVu);
	

		if(ngayCong<=0){
		printf ("Loi ngay cong !!");
		return 0 ;
	}
	
	
	switch (chucVu){
		case 1 :
			phuCap = 500000 ;
			break ;
		case 2 :
			phuCap = 1000000 ;
			break ;
		case 3 :
			phuCap = 2000000 ;
			break ;
	    default :
	    	printf ("Loi chuc vu !!");
	    return 0;
	}
	
	if (ngayCong > 26){
		thuong = (ngayCong - 26) * 200000 ;
	}
	
	luong = ngayCong * 160000 * hsLuong + phuCap + thuong ;
	printf ("Luong la :%.0f",luong); 
	
	return 0;
}
