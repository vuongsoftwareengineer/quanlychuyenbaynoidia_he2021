#pragma once
#include <iostream>
#include <string>
const int MAX_NAM = 2100;
const int MIN_NAM = 1900;
using namespace std;
//struc thoi gian chuyen bay 
struct thoigian
{
	int gio;
	int phut;
	int ngay;
	int thang;
	int nam;
};
typedef struct thoigian ThoiGian;

ThoiGian kiemtraNgayNhap(ThoiGian& tg, int DongInfo);
ThoiGian kiemtraThoiGianNhap(ThoiGian& tg, int DongInfo);

int batLoiNhapThoiGian(ThoiGian tg);
int batLoiNhapGio(ThoiGian h);
int kiemtraThoiGian(ThoiGian tg); //kiem tra ngay thang nam  
int kiemtraKC_GioBay(ThoiGian tg1, ThoiGian tg2);
int kiemtraTG_HoanTat(ThoiGian tg1, ThoiGian tg2);
int kiemtraTG_HeThong(ThoiGian tg);

