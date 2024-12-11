#include <stdio.h>

int main(){
    char str[100];
    printf("Nhap mot chuoi bat ky: ");
    scanf("%[^\n]", str);
    int len = 0;
    while(str[len]!='\0'){
        len++;
    }
    printf("Chuoi da nhap: %s\n", str);
    printf("Do dai cua chuoi: %d", len);
    
    return 0;
}
