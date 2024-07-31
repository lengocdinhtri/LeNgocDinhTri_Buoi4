#include <stdio.h>

// Hàm tính tổng S(n) sử dụng đệ quy
int TinhTongDeQuy(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n + TinhTongDeQuy(n - 1);
	}
}

// Hàm tính tổng S(n) không sử dụng đệ quy (dùng vòng lặp)
int TinhTongKhongDeQuy(int n) {
	int Tong = 0;
	for (int i = 1; i <= n; i++) {
		Tong += i;
	}
	return Tong;
}

int main() {
	int n;

	printf("Nhap mot so nguyen duong: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("So nhap vao phai la so nguyen duong !\n");
	}
	else {
		int KetQuaDeQuy = TinhTongDeQuy(n);
		int KetQuaKhongDeQuy = TinhTongKhongDeQuy(n);

		printf("Tong S(%d) tinh bang de quy: %d\n", n, KetQuaDeQuy);
		printf("Tong S(%d) tinh khong dung de quy: %d\n", n, KetQuaKhongDeQuy);
	}

	return 0;
}
