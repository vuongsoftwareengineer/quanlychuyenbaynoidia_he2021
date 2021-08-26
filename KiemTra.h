#pragma once
#include <iostream>
#include <string>

#define MAX_KITU 255
using namespace std;
//struct cua cac ham xu li chuoi
struct nhapchuoi {
	int n = 0;
	char* data[MAX_KITU];
};
typedef struct nhapchuoi NhapChuoi;


void nhapMa(char var[], int doDai);
void nhapChuoiKiTu(char var[], int doDai);

void nhapMa(char var[], int doDai);
void nhapChuoiKiTu(char var[], int doDai);
void nhapKiTuSo(char var[], int doDai);

void nhapNumber(int& var, int doDai);
void nhapDay(int& var, int doDai);
void nhapMonth(int& var, int doDai);
void nhapYear(int& var, int doDai);
void nhapHour(int& var, int doDai);

void nhapMinute(int& var, int doDai);
char* kiemtraNhapChuoi(bool nhapMa, int DongInfo);
int kiemtraNhapSo(int DongInfo);
char* kiemtraNhapCMND(int DongInfo);

