#include <stdio.h>

int main (){
	double diemTb ;
	printf ("nhap diem trung binh :");
	scanf ("%lf",&diemTb);
	if (diemTb>=8)
	printf ("Hoc luc gioi ");
	else if (diemTb>=6.5)
	printf ("Hoc luc kha ");
	else if (diemTb>=5)
	printf ("Hoc luc trung binh ");
	else 
	printf ("Hoc luc yeu ");
	return 0 ;
}
