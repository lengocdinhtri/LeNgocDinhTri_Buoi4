#include <stdio.h>

// Hàm đệ quy để tính ước chung lớn nhất (UCLN) của hai số nguyên dương a và b
int TinhUCLN(int a, int b) {
	// Trường hợp cơ sở: khi một trong hai số bằng 0
	if (b == 0) {
		return a;
	}
	if (a == 0) {
		return b;
	}
	// Nếu a > b, thì tính UCLN(b, a - b)
	if (a > b) {
		return TinhUCLN(b, a - b);
	}
	else { // Nếu a <= b, thì tính UCLN(a, b - a)
		return TinhUCLN(a, b - a);
	}
}

int main() {
	int a, b;

	printf("Nhap so nguyen duong a: ");
	scanf("%d", &a);
	printf("Nhap so nguyen duong b: ");
	scanf("%d", &b);

	// Đảm bảo rằng a và b đều là số dương
	if (a <= 0 || b <= 0) {
		printf("Cac so nhap vao phai la so nguyen duong.\n");
		return 1;
	}

	int result = TinhUCLN(a, b);

	printf("Uoc chung lon nhat cua %d và %d la: %d\n", a, b, result);

	return 0;
}
