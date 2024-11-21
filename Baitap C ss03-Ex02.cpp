#include <stdio.h>

int main(){
	float C,F;
	printf("Nhap nhiet do hien tai : ");
	scanf("%f",&C);
	
	F = ( C * 9/5 ) + 32;
	printf("Nhiet do hien tai la %fC tuong duong voi %fF",C,F);
	
	return 0;
}
