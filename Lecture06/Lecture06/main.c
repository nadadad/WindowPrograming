#include <windows.h>
#include <stdio.h>

int main() {

    while (1) {

        // W Ű�� ���ȴ��� Ȯ�� (key down)
        if (GetAsyncKeyState(0x57) & 0x8000) { // VK_W�� 0x57
            printf("W Ű ���� (Key Down)\n");
        }

        // S Ű�� ���ȴ��� Ȯ�� (key down)
        if (GetAsyncKeyState(0x53) & 0x8000) { // VK_S�� 0x53
            printf("S Ű ���� (Key Down)\n");
        }

        // W Ű�� ���������� Ȯ�� (key up)
        if (!(GetAsyncKeyState(0x57) & 0x8000)) { // VK_W�� 0x57
            printf("W Ű ������ (Key Up)\n");
        }

        // S Ű�� ���������� Ȯ�� (key up)
        if (!(GetAsyncKeyState(0x53) & 0x8000)) { // VK_S�� 0x53
            printf("S Ű ������ (Key Up)\n");
        }

        // ���α׷� ���� ����
        if (GetAsyncKeyState(0x51) & 0x8000) { // VK_Q�� 0x51
            printf("���� ����\n");
            break;  // Q Ű�� ������ ����
        }

        // ��� ��� (CPU ��� ����ȭ)
        Sleep(10);  // 10�и��� ���

    }

    return 0;
}