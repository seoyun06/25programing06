#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y)

{

    COORD pos = { x,y };

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}


int main()
{
    gotoxy(0,5);


    // ������ �ؽ�Ʈ

    puts("\033[31m***************\033[0m");
    puts("\033[31m  ***********  \033[0m");
    puts("\033[31m    ******* \033[0m");


    // �ʷϻ� �ؽ�Ʈ�� ����� ���

    puts("\033[32m\033[40m���� ���� �������Դϴ�.\033[0m\n");



    // ���� �ؽ�Ʈ�� �Ķ��� �ؽ�Ʈ

    puts("\033[1m\033[34m����ȣȣ.\033[0m\n");



    return 0;

}