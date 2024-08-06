#include <stdio.h>

// Hàm đệ quy để tính giá trị của phần tử thứ n của cấp số cộng
int TinhU(int n, int a, int r) {
	// Trường hợp cơ sở
	if (n == 1) {
		return a;
	}
	else {
		// Gọi đệ quy để tính giá trị của phần tử thứ (n-1)
		return TinhU(n - 1, a, r) + r;
	}
}

int main() {
	int n, a, r;

	// Nhập các giá trị từ bàn phím
	printf("Nhap gia tri cua a (hang dau): ");
	scanf("%d", &a);
	printf("Nhap gia tri cua r(cong sai): ");
	scanf("%d", &r);
	printf("Nhap so nguyen duong n (vi tri cua phan tu can tinh): ");
	scanf("%d", &n);

	// Kiểm tra giá trị n có phải là số nguyên dương không
	if (n <= 0) {
		printf("n phai la so nguyen duong.\n");
		return 1;
	}

	// Tính giá trị của phần tử thứ n và in kết quả
	int result = TinhU(n, a, r);
	printf("Gia tri cua phan tu %d la: %d\n", n, result);

	return 0;
}
