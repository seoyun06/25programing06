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


    // 빨간색 텍스트

    puts("\033[31m***************\033[0m");
    puts("\033[31m  ***********  \033[0m");
    puts("\033[31m    ******* \033[0m");


    // 초록색 텍스트와 노란색 배경

    puts("\033[32m\033[40m저는 지금 수업중입니다.\033[0m\n");



    // 굵은 텍스트와 파란색 텍스트

    puts("\033[1m\033[34m하하호호.\033[0m\n");



    return 0;

}