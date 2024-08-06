#include <stdio.h>

// Hàm đệ quy để tính giá trị của S(n)
double TinhS(int n) {
	// Trường hợp cơ sở
	if (n == 1) {
		return 1.0;
	}
	else {
		return TinhS(n - 1) + 1.0 / (2 * n + 1);
	}
}

int main() {
	int n;

	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);

	double result = TinhS(n);

	printf("Gia tri cua S(%d) la: %.6lf\n", n, result);

	return 0;
}
