#include <stdio.h>

// Hàm đệ quy để tính giá trị của S(n)
long long TinhS(int n) {
	// Trường hợp cơ sở
	if (n == 1) {
		return 1 * 2;
	}
	else {
		return TinhS(n - 1) + n * (n + 1);
	}
}

int main() {
	int n;

	printf("Nhap gia tri duong n: ");
	scanf("%d", &n);

	long long result = TinhS(n);

	printf("Gia tri cua S(%d) la: %lld\n", n, result);

	return 0;
}
