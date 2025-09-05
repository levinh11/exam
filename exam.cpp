#include <stdio.h>
#include <string.h>
int main(){
	char S1[100], S2[100];
	printf("Nhap chuoi S1: ");
	scanf("%s",&S1);
    printf("Nhap chuoi S2: ");
    scanf("%s",&S2);
    char *shorter, *longer;
    if (strlen(S1) < strlen(S2)) {
        shorter = S1;
        longer = S2;
    } else {
        shorter = S2;
        longer = S1;
    }
    if (strstr(longer, shorter) != 0 ) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}