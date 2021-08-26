#pragma once
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <string.h>
#include <windows.h>
#include <fstream>
#include<time.h>

#define MAXTRANG 30
#define MAXTRANG_HK 12
#define COT 140
#define COT_L 5
#define COT_R 119
#define DONG 1
#define DONG_TITLE 10
#define DONGVITRI_X 3
#define DONGVITRI_Y 49
#define LEFT 75
#define RIGHT 77

#define input1 14
#define input2 18
#define input3 22
#define input4 26
#define input5 30
#define input6 34
#define input7 38
#define input8 42
#define input9 46
#define MIDDLE_DOC 65
#define MIDDLE_NGANG 7
#define KHUNG_R 2
#define KHUNG_L 30
#define KHUNG_M 12

#define WIDTH 207
#define HEIGHT 52

#define NGANG 196
#define DOC 179
#define UPLEFT 218
#define UPRIGHT 191
#define DOWNLEFT 192
#define DOWNRIGHT 217
#define BELEFT 195
#define BEUP 194
#define BERIGHT 180
#define BEDOWN 193

#define ENTER 13
#define BACKSPACE 8
#define DELETE 83
#define UP 72
#define DOWN 80
#define ESC 27
#define TAB 9
#define PAGEUP 73
#define PAGEDOWN 81
#define SPACE 32
#define INSERT 82
#define HOME 71
#define F7 65
#define F8 66
#define F9 67
#define F10 68
#define F3 61
#define TIMKIEMMA 0 
#define THEMMAYBAY 1
#define XOAMAYBAY 2
#define SUAMAYBAY 3
#define THEMCHUYENBAY 1
#define XOACHUYENBAY 2
#define XOACHUYENBAY_L 112
#define SUACHUYENBAY 3
#define HUYCHUYENBAY 4
#define THEMHANHKHACH 1
#define XOAHANHKHACH 2
#define HIEUCHINH_HK 3
#define DATVE 3
#define HUYVE 2
#define UI_THEMHANHKHACH 113
#define UI_THEMCHUYENBAY 111
#define TIMKIEMCB_NGAY 12
#define TIMKIEMNOIDEN 30
#define THONGKE 11
#define XUATMAYBAY 5
#define XUATCHUYENBAY 6
#define XUATHANHKHACH 7
#define XOAMAYBAY 8
#define XOACHUYENBAY 9
#define XOAHANHKHACH 10
#define YES 3
#define NO 2
#define CANCEL 0
#define A 65
#define Z 90
#define a 97
#define z 122
#define num0 48
#define num1 49
#define num2 50
#define num3 51
#define num4 52
#define num5 53
#define num6 54
#define num9 57


void gotoxy(short x, short y)
{
    HANDLE hConsoleOutput;
    COORD Cursor_an_Pos = { x,y };
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}

int wherex(void)
{
    HANDLE hConsoleOutput;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
    return screen_buffer_info.dwCursorPosition.X;
}

int wherey(void)
{
    HANDLE hConsoleOutput;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
    return screen_buffer_info.dwCursorPosition.Y;
}
void clreol() {
    COORD coord;
    DWORD written;
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
    coord.X = info.dwCursorPosition.X;
    coord.Y = info.dwCursorPosition.Y;
    FillConsoleOutputCharacter(GetStdHandle(STD_OUTPUT_HANDLE), ' ',
        info.dwSize.X - info.dwCursorPosition.X * info.dwCursorPosition.Y, coord, &written);
    gotoxy(info.dwCursorPosition.X, info.dwCursorPosition.Y);
}

void SetColor(WORD color)
{
    HANDLE hConsoleOutput;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

    WORD wAttributes = screen_buffer_info.wAttributes;
    color &= 0x000f;
    wAttributes &= 0xfff0;
    wAttributes |= color;

    SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
void SetBGColor(WORD color)
{
    HANDLE hConsoleOutput;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

    WORD wAttributes = screen_buffer_info.wAttributes;
    color &= 0x000f;
    color <<= 4;
    wAttributes &= 0xff0f;
    wAttributes |= color;

    SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
void clrscr() {
    system("cls");
}
void Normal() {
	SetColor(22);
	SetBGColor(0);
}
void Highlight() {
	SetColor(14);
	SetBGColor(18);
}
void thongbao_Highlight() {
	SetColor(5);
	SetBGColor(30);
}
void suadoi_Highlight() {	
	SetColor(18);
	SetBGColor(30);
}
