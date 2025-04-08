#include <stdio.h>
#include <windows.h>

static void GotoXY(int x, int y) {
    COORD Pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void DrawBox(int x, int y, int width, int height) {
    // ��� ������
    GotoXY(x, y);
    for (int i = 0; i < width; i++) printf("-");

    // ������
    for (int i = 1; i < height - 1; i++) {
        GotoXY(x, y + i);
        printf("|");
        GotoXY(x + width - 1, y + i);
        printf("|");
    }

    // �ϴ� ������
    GotoXY(x, y + height - 1);
    for (int i = 0; i < width; i++) printf("-");
}

int main() {
    system("cls");  // ȭ�� �����

    DrawBox(5, 2, 25, 2);   // ��� �ڽ�
    DrawBox(5, 5, 25, 5);   // �ϴ� �ڽ�

    GotoXY(11, 11); // Ŀ���� �� �Ʒ��� �̵��Ͽ� ����ϰ� ����
    return 0;
}