#include <stdio.h>
int main() {
	int a, b, tong, hieu, tich, thuong;
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	printf("\nTong = %.2d", tong);
	printf("\nHieu = %.2d", hieu);
	printf("\nTich = %.2d", tich);
	if (b !=0) {
		thuong = a / b;
		printf("\nThuong = %.2d", thuong);
		} else {
			printf("\nKhong the chia cho 0!");
			}
			return 0;
			}
