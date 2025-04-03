#include <stdio.h>
#include <stdlib.h>

void printWithColor(const char* text, const char* color, const char* background) {
    printf("%s%s%s\033[0m", color, background, text); // 색상 적용 후 텍스트 출력
}

int main() {
    // 초록색 배경 설정
    const char* greenBackground = "\033[42m";  // 초록색 배경
    const char* whiteText = "\033[37m";  // 흰색 텍스트

    // 텍스트 아트를 배열로 정의
    const char* art[] = {
        "##################################################",
        "#                                                #",
        "#                                                #",
        "#                                                #",
        "#                                                #",
        "#                                                #",
        "##################################################"
    };

    // art 배열의 각 줄을 출력
    for (int i = 0; i < 7; i++) {
        printWithColor(art[i], whiteText, greenBackground); // 색상 적용하여 출력
        printf("\n");
    }

    return 0;
}