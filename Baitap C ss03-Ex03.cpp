#include <stdio.h>
  
  int main() {
  	float PI = 3.14;
  	float chuVi, dienTich;
  	int bKinh;
  	
  	printf("Hay nhap ban kinh: ");
  	scanf("%d", &bKinh);
  	chuVi = 2 * PI * bKinh;
  	dienTich = PI * bKinh * bKinh;
  	printf("Chu vi hinh tron la %.2f\n", chuVi);
  	printf("Dien tich hinh tron la %.2f\n", dienTich);
  	
  	return 0;
  }
