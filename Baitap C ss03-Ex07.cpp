#include <stdio.h>

int main(){
	int a,b,c,d,sum;
	printf("Nhap so nguyen thu nhat : ");
	scanf("%d",&a);
	printf("Nhap so nguyen thu hai : ");
	scanf("%d",&b);
	printf("Nhap so nguyen thu ba : ");
	scanf("%d",&c);
	printf("Nhap so nguyen thu bon : ");
	scanf("%d",&d);
	
	sum = a+b+c+d;
	printf("Tong cua bon so nguyen %d+%d+%d+%d=%d", a,b,c,d,sum);
	
	return 0;
}
