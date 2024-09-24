#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 100


int is_valid_number_string(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1; 
}

void get_valid_string(char *str, char *input) {
    do {
        printf("%s", input);
        fgets(str, MAX_LEN , stdin); 
        str[strcspn(str, "\n")] = '\0';
        
        if (strlen(str) > MAX_LEN) {
            printf("Chuoi vuot qua 100 ky tu. Vui long nhap lai.\n");
        } else if (!is_valid_number_string(str)) {
            printf("Chuoi chi chua cac ky tu so (0-9). Vui long nhap lai.\n");
        } else {
            break; 
        }
    } while (1);
}
int main (){
	char s1[MAX_LEN];
	char s2[MAX_LEN];
	get_valid_string(s1,"Nhap chuoi s1 do dai 100 ky tu chu bao gom cac so tu 0 - 9 :");
	get_valid_string(s2, "Nhap chuoi s2 do dai 100 ky tu chu bao gom cac so tu 0 - 9 :");
	printf("Chuoi s1: %s\n", s1);
    printf("Chuoi s2: %s\n", s2);
    int a = strcmp(s1, s2);
switch (a)
{
case 1:
	printf("\nOutput: chuoi can tim la: S1");
break;
case -1:
	printf("\nOutput: chuoi can tim la S2");
break;
case 0:
printf ("\nOutput: Hai chuoi bang nhau");
break;
}
return 0;
}

