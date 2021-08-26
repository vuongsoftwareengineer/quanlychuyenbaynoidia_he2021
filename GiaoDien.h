#pragma once
#include <iostream>
#include <string>

using namespace std;
const int KC_TGIAN_AM = 19;
const int soDongMenu = 8;
const int soDongMayBay = 4;
const int soDongChuyenBay = 5;
const int soDongDatVe = 3;
int menuChinh(char tieude[soDongMenu][100]);

//=========giao dien mau============//
void Normal();
void Highlight();
void thongbao_Highlight();
void suadoi_Highlight();

//=========giao dien chuong trinh//
void khungGiaoDien();
void veKhungThongbao();
void veKhungNhap(int dai, int rong, int posx, int posy, string source = "");
void hienThiThongBao(string notif, string notif2 = "", string notif3 = "", string NoiDen = "");
void xoaKhung();
void hienThiHuongDan(int type);
void veKhungThongTin(int type, string title = "", string s1 = "", string s2 = "", string s3 = "", string s4 = "",
	string s5 = "", string s6 = "", string s7 = "", string s8 = "", string s9 = "");
void veKhungXuat(int type, int rong, int dai, int colump1 = 0, int colump2 = 0, int colump3 = 0, int colump4 = 0,
	int colump5 = 0, int posx = 0, int posy = 0);
void xoaThongTin(int type);
char* UI_TimMa(int type, string title);

void tachChuoiNhap(string chuoi, char splitChar, int& vtri, char cmnd[]);
int isXacNhan(string chose1, string chose2, bool huyCB);


