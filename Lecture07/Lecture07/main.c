#include <windows.h>
#include <stdio.h>

int main() {
    const char* left = "<(- _ - )>";
    const char* right = "<( - _ -)>";

    while (1) {
        // 첫 프레임: 왼쪽
        printf("\r%s", left);
        fflush(stdout);
        Sleep(300); // 300ms 대기

        // 두 번째 프레임: 오른쪽
        printf("\r%s", right);
        fflush(stdout);
        Sleep(200);
    }

    return 0;
}