#include <stdio.h>
#include <windows.h> 

void gotoxy(int x, int y) {
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main() {
    system("cls"); 

    
    int width = 20;
    int height = 5;

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            gotoxy(x + 5, y + 5);  
            if (y == 0 || y == height - 1) {
                printf("#");
            }
            else {
                if (x == 0 || x == width - 1) {
                    printf("#");
                }
                else {
                    printf(" ");
                }
            }
        }
    }

    gotoxy(0, height + 6);
    return 0;
}