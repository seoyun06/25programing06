#include <stdio.h>
#include <windows.h>

static void GotoXY(int x, int y) {
    COORD Pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void DrawBox(int x, int y, int width, int height) {
    // 상단 가로줄
    GotoXY(x, y);
    for (int i = 0; i < width; i++) printf("-");

    // 세로줄
    for (int i = 1; i < height - 1; i++) {
        GotoXY(x, y + i);
        printf("|");
        GotoXY(x + width - 1, y + i);
        printf("|");
    }

    // 하단 가로줄
    GotoXY(x, y + height - 1);
    for (int i = 0; i < width; i++) printf("-");
}

int main() {
    system("cls");  // 화면 지우기

    DrawBox(5, 2, 25, 2);   // 상단 박스
    DrawBox(5, 5, 25, 5);   // 하단 박스

    GotoXY(11, 11); // 커서를 맨 아래로 이동하여 깔끔하게 정리
    return 0;
}