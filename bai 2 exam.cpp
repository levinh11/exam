#include <stdio.h>
int lasonguyen(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int player[n];
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &player[i]);
    }

    int found = 0;
    printf("ko co so nguyen to nao ");

    if (found=0) {
        printf("ko co so nguyen to nao");
    }else{
    	printf("\n");
	}
    return 0;
}