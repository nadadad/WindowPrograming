#include <windows.h>
#include <stdio.h>

int main() {

    while (1) {

        // W 키가 눌렸는지 확인 (key down)
        if (GetAsyncKeyState(0x57) & 0x8000) { // VK_W는 0x57
            printf("W 키 눌림 (Key Down)\n");
        }

        // S 키가 눌렸는지 확인 (key down)
        if (GetAsyncKeyState(0x53) & 0x8000) { // VK_S는 0x53
            printf("S 키 눌림 (Key Down)\n");
        }

        // W 키가 떼어졌는지 확인 (key up)
        if (!(GetAsyncKeyState(0x57) & 0x8000)) { // VK_W는 0x57
            printf("W 키 떼어짐 (Key Up)\n");
        }

        // S 키가 떼어졌는지 확인 (key up)
        if (!(GetAsyncKeyState(0x53) & 0x8000)) { // VK_S는 0x53
            printf("S 키 떼어짐 (Key Up)\n");
        }

        // 프로그램 종료 조건
        if (GetAsyncKeyState(0x51) & 0x8000) { // VK_Q는 0x51
            printf("게임 종료\n");
            break;  // Q 키를 누르면 종료
        }

        // 잠시 대기 (CPU 사용 최적화)
        Sleep(10);  // 10밀리초 대기

    }

    return 0;
}