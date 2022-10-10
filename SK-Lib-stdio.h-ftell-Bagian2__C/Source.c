#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* fp = fopen("test.txt", "r");

    char string[20];
    fscanf(fp, "%s", string);

    printf("%ld", ftell(fp));

    _getch();
    return 0;
}