#include <stdio.h>

// Hàm tính S(n) sử dụng đệ quy
double TinhSDeQuy(int n) {
	if (n == 1) {
		return 1.0 / 2;
	}
	else {
		return (double)n / (n + 1) + TinhSDeQuy(n - 1);
	}
}

// Hàm tính S(n) không sử dụng đệ quy (dùng vòng lặp)
double TinhSKhongDeQuy(int n) {
	double tong = 0;
	for (int i = 1; i <= n; i++) {
		tong += (double)i / (i + 1);
	}
	return tong;
}

int main() {
	int n;

	printf("Nhap mot so nguyen duong: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("So nhap vao phai la mot so nguyen duong.\n");
	}
	else {
		double KetQuaDeQuy = TinhSDeQuy(n);
		double KetQuaKhongDeQuy = TinhSKhongDeQuy(n);

		printf("Tong S(%d) tinh bang de quy: %.5lf\n", n, KetQuaDeQuy);
		printf("Tong S(%d) tinh khong dung de quy: %.5lf\n", n, KetQuaKhongDeQuy);
	}

	return 0;
}
