#include <windows.h>
#include <stdio.h>

int main() {
    const char* left = "<(- _ - )>";
    const char* right = "<( - _ -)>";

    while (1) {
        // ù ������: ����
        printf("\r%s", left);
        fflush(stdout);
        Sleep(300); // 300ms ���

        // �� ��° ������: ������
        printf("\r%s", right);
        fflush(stdout);
        Sleep(200);
    }

    return 0;
}