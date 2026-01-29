#include <stdio.h>
#include <string.h>
int main(void) {
    // char str[20] = "mango tree";

    // strncpy(str, "apple-pie", 5);

    // printf("%s\n", str);

    // return 0;

    // char str[80] = "straw";

    // strcat(str, "berry");
    // printf("%s\n", str);
    // strncat(str, "piece", 3);
    // printf("%s\n", str);

    // return 0;
    
    char str1[80] = "pear";
    char str2[80] = "peach";

    printf("사전에 나중에 나오는 과일 이름 : ");
    if (strcmp(str1, str2)>0)
        printf("%s\n", str1);
    else
        printf("%s\n", str2);

    return 0;

}