#include <stdio.h>

int main(){
    char str[]="Nguyen Van Tung";
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    printf("Chuoi dao nguoc la: ");
    for(int i=len-1; i>=0; i--){
        printf("%c", str[i]);
    }
    return 0;
}
