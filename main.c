#include <stdio.h>
#include <stdlib.h>

void printWithColor(const char* text, const char* color, const char* background) {
    printf("%s%s%s\033[0m", color, background, text); // ���� ���� �� �ؽ�Ʈ ���
}

int main() {
    // �ʷϻ� ��� ����
    const char* greenBackground = "\033[42m";  // �ʷϻ� ���
    const char* whiteText = "\033[37m";  // ��� �ؽ�Ʈ

    // �ؽ�Ʈ ��Ʈ�� �迭�� ����
    const char* art[] = {
        "##################################################",
        "#                                                #",
        "#                                                #",
        "#                                                #",
        "#                                                #",
        "#                                                #",
        "##################################################"
    };

    // art �迭�� �� ���� ���
    for (int i = 0; i < 7; i++) {
        printWithColor(art[i], whiteText, greenBackground); // ���� �����Ͽ� ���
        printf("\n");
    }

    return 0;
}