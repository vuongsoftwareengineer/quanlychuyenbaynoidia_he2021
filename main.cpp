#include "MayBay.h"
#include "ChuyenBay.h"
#include "HanhKhach.h"
#include "KiemTra.h"
#include "ThoiGian.h"
#include "GiaoDien.h"
#include "mylib.h"
#include "Windows.h"

using namespace std;
//==========================================giao dien======================================================//
void xoaKhung() {
	for (int i = 0; i < DONGVITRI_Y - 2; i++) {
		gotoxy(COT_L, DONGVITRI_X + i);
		cout << "                                                                                                                   ";
	}
}

void veKhungThongTin(int type, string title, string s1, string s2, string s3, string s4,
	string s5, string s6, string s7, string s8, string s9) {
	Normal();
	gotoxy(COT, input1);
	cout << "                                    ";
	gotoxy(COT, input2);
	cout << "                                    ";
	gotoxy(COT, input3);
	cout << "                                    ";
	gotoxy(COT, input4);
	cout << "                                    ";
	gotoxy(COT, input5);
	cout << "                                    ";
	gotoxy(COT + 1, input1 + 2);
	cout << "                                    ";
	gotoxy(COT + 1, input1 + 2);
	cout << "                                    ";
	gotoxy(COT + 1, input2 + 2);
	cout << "                                    ";
	gotoxy(COT + 1, input3 + 2);
	cout << "                                    ";
	gotoxy(COT + 1, input4 + 2);
	cout << "  ";
	gotoxy(COT + KHUNG_M + 1, input4 + 2);
	cout << "  ";
	gotoxy(COT + KHUNG_M * 2 + 1, input4 + 2);
	cout << "    ";
	gotoxy(COT + 1, input5 + 2);
	cout << "  ";
	gotoxy(COT + KHUNG_M + 1, input5 + 2);
	cout << "  ";
	
	
	if (type == TIMKIEMMA) {
		gotoxy(COT + 25, DONG_TITLE);
		cout << title;
		gotoxy(COT, input1);
		cout << "NHAP MA CAN TIM: ";
		veKhungNhap(KHUNG_L, KHUNG_R, COT, input1 + 1);
		return;
	}
	else if (type == TIMKIEMNOIDEN) {
		gotoxy(COT + 25, DONG_TITLE);
		cout << title;
		gotoxy(COT, input1);
		cout << "NHAP SAN BAY DEN MUON TIM: ";
		veKhungNhap(KHUNG_L, KHUNG_R, COT, input1 + 1);
		return;
	}
	else if (type == TIMKIEMCB_NGAY) {
		gotoxy(COT + 25, DONG_TITLE);
		cout << "                                    ";
		gotoxy(COT + 25, DONG_TITLE);
		cout << title;
		gotoxy(COT, input1);
		cout << s1;
		veKhungNhap(KHUNG_M, KHUNG_R, COT, input1 + 1);

		gotoxy(COT + KHUNG_M, input1);
		veKhungNhap(KHUNG_M + KHUNG_M, KHUNG_R, COT, input1 + 1);

		gotoxy(COT + KHUNG_M + KHUNG_M, input1);
		veKhungNhap(KHUNG_M + KHUNG_M * 2, KHUNG_R, COT, input1 + 1);

		gotoxy(COT, input2);
		cout << s2;
		veKhungNhap(KHUNG_L, KHUNG_R, COT, input2 + 1);
		return;
	}
	else {

		gotoxy(COT + 25, DONG_TITLE);
		cout << title;
		gotoxy(COT, input1);
		cout << "                      ";
		gotoxy(COT, input1);
		cout << s1;
		veKhungNhap(KHUNG_L, KHUNG_R, COT, input1 + 1);

		gotoxy(COT, input2);
		cout << s2;
		veKhungNhap(KHUNG_L, KHUNG_R, COT, input2 + 1);

		gotoxy(COT, input3);
		cout << s3;
		veKhungNhap(KHUNG_L, KHUNG_R, COT, input3 + 1);

		if (type == UI_THEMCHUYENBAY) {
			
			gotoxy(COT, input4);
			cout << s4;
			veKhungNhap(KHUNG_M, KHUNG_R, COT, input4 + 1);

			gotoxy(COT + KHUNG_M, input4);
			veKhungNhap(KHUNG_M + KHUNG_M, KHUNG_R, COT, input4 + 1);

			gotoxy(COT + KHUNG_M + KHUNG_M, input4);
			veKhungNhap(KHUNG_M + KHUNG_M * 2, KHUNG_R, COT, input4 + 1);

			gotoxy(COT, input5);
			cout << s5;
			veKhungNhap(KHUNG_M, KHUNG_R, COT, input5 + 1);

			gotoxy(COT + KHUNG_M, input5);
			veKhungNhap(KHUNG_M + KHUNG_M, KHUNG_R, COT, input5 + 1);
		}
		else if (type == UI_THEMHANHKHACH) {

			
			gotoxy(COT, input4 + 1);
			cout << "                                    ";
			gotoxy(COT, input4 + 2);
			cout << "                                    ";
			gotoxy(COT, input4 + 3);
			cout << "                                    ";

			gotoxy(COT, input5 + 1);
			cout << "                                    ";
			gotoxy(COT, input5 + 2);
			cout << "                                    ";
			gotoxy(COT, input5 + 3);
			cout << "                                    ";

			gotoxy(COT, input4);
			cout << s4;
		}
		else {
			gotoxy(COT, input4);
			cout << s4;
		}

	}

}

char* UI_TimMa(int type, string title) {
	veKhungThongTin(type, title);

	char temp[20] = { '\0' };
	gotoxy(COT + 1, input1 + 2);
	cout << "                          ";
	gotoxy(COT + 1, input1 + 2);
	rewind(stdin);
	nhapMa(temp, 20);
	return temp;
}

void veKhungXuat(int type, int rong, int dai, int colump1, int colump2, int colump3, int colump4,
	int colump5, int posx, int posy) {
	if (posx == 0 || posy == 0)
	{
		posx = COT_L;
		posy = DONGVITRI_X;
	}
	veKhungNhap(dai, rong, posx, posy);
	for (int v = 0; v < dai - 1; v++)
	{
		gotoxy(posx + 1 + v, posy + 2);
		cout << char(196);
	}

	for (int v = 0; v < rong - 1; v++)
	{
		gotoxy(posx + colump1, posy + v + 1);
		cout << char(179);
	}
	gotoxy(posx + colump1, posy + 2);
	cout << char(197);
	for (int v = 0; v < rong - 1; v++)
	{
		gotoxy(posx + colump2, posy + v + 1);
		cout << char(179);
	}
	gotoxy(posx + colump2, posy + 2);
	cout << char(197);
	for (int v = 0; v < rong - 1; v++)
	{
		gotoxy(posx + colump3, posy + v + 1);
		cout << char(179);
	}
	gotoxy(posx + colump3, posy + 2);
	cout << char(197);
	for (int v = 0; v < rong - 1; v++)
	{
		gotoxy(posx + colump4, posy + v + 1);
		cout << char(179);
	}
	gotoxy(posx + colump4, posy + 2);
	cout << char(197);
	if (colump5 != 0)
	{
		for (int v = 0; v < rong - 1; v++)
		{
			gotoxy(posx + colump5, posy + v + 1);
			cout << char(179);
		}
		gotoxy(posx + colump5, posy + 2);
		cout << char(197);
	}
	if (type == XUATMAYBAY) {
		gotoxy(COT_L + 1, DONGVITRI_X + 1);
		cout << "STT";
		gotoxy(COT_L + 6, DONGVITRI_X + 1);
		cout << "SO HIEU MAY BAY";
		gotoxy(COT_L + 42, DONGVITRI_X + 1);
		cout << "LOAI MAY BAY";
		gotoxy(COT_L + 93, DONGVITRI_X + 1);
		cout << "SO CHO";
	}
	else if (type == XUATCHUYENBAY) {
		
		gotoxy(COT_L + 1, DONGVITRI_X + 1);
		cout << "STT";
		gotoxy(COT_L + 6, DONGVITRI_X + 1);
		cout << "MA CHUYEN BAY";
		gotoxy(COT_L + 26, DONGVITRI_X + 1);
		cout << "SO HIEU MAY BAY";
		gotoxy(COT_L + 46, DONGVITRI_X + 1);
		cout << "SAN BAY DEN";
		gotoxy(COT_L + 81, DONGVITRI_X + 1);
		cout << "NGAY GIO KHOI HANH";
		gotoxy(COT_L + 101, DONGVITRI_X + 1);
		cout << "TRANG THAI";
	}
	else if (type == XUATHANHKHACH) {
		//5, 15, 30, 50
		gotoxy(COT_L + 1+135, DONGVITRI_X + 21);
		cout << "STT";
		gotoxy(COT_L + 6+135, DONGVITRI_X + 21);
		cout << "SO VE";
		gotoxy(COT_L + 16+135, DONGVITRI_X + 21);
		cout << "SO CMND";
		gotoxy(COT_L + 31+135, DONGVITRI_X + 21);
		cout << "HO TEN";
		gotoxy(COT_L + 51+135, DONGVITRI_X + 21);
		cout << "PHAI";
	}
	else if (type == THONGKE)
	{
		
		gotoxy(COT_L + 1, DONGVITRI_X + 1);
		cout << "STT";
		gotoxy(COT_L + 6, DONGVITRI_X + 1);
		cout << "SO HIEU MAY BAY";
		gotoxy(COT_L + 26, DONGVITRI_X + 1);
		cout << "LOAI MAY BAY";
		gotoxy(COT_L + 71, DONGVITRI_X + 1);
		cout << "SO LUOT THUC HIEN BAY";
	}
	
	else if (type == TIMKIEMCB_NGAY) {
		// 5, 25, 45, 80, 100
		gotoxy(COT_L + 1, DONGVITRI_X + 1);
		cout << "STT";
		gotoxy(COT_L + 6, DONGVITRI_X + 1);
		cout << "MA CHUYEN BAY";
		gotoxy(COT_L + 26, DONGVITRI_X + 1);
		cout << "SO HIEU MAY BAY";
		gotoxy(COT_L + 46, DONGVITRI_X + 1);
		cout << "SAN BAY DEN";
		gotoxy(COT_L + 81, DONGVITRI_X + 1);
		cout << "NGAY GIO KHOI HANH";
		gotoxy(COT_L + 101, DONGVITRI_X + 1);
		cout << "SO VE CON LAI";
	}
}

void hienThiHuongDan(int type) {
	if (type == DATVE) {
		gotoxy(COT+25, DONG);
		cout << "DIEP KHANH VUONG - N17DCCN191";
		gotoxy(COT+25, DONG + 1);
		cout << "CAU TRUC DU LIEU VA GIAI THUAT";
		gotoxy(COT, DONG);
		cout << "ENTER: CHAP NHAN";
		gotoxy(COT, DONG + 1);
		cout << "ESC: TRO VE/THOAT";
		gotoxy(COT, DONG + 2);
		cout << "PAGE UP: TRANG TRUOC";
		gotoxy(COT, DONG + 3);
		cout << "PAGE DOWN: TRANG SAU";
		gotoxy(COT, DONG + 4);
		cout << "HOME: TIM KIEM";
	}
	else {
		gotoxy(COT+25, DONG);
		cout << "DIEP KHANH VUONG - N17DCCN191";
		gotoxy(COT+25, DONG + 1);
		cout << "CAU TRUC DU LIEU VA GIAI THUAT";
		gotoxy(COT, DONG + 2);
		gotoxy(COT, DONG);
		cout << "INSERT: THEM";
		gotoxy(COT, DONG + 1);
		cout << "HOME: TIM KIEM";
		gotoxy(COT, DONG + 2);
		cout << "ENTER: CHAP NHAN";
		gotoxy(COT, DONG + 3);
		cout << "DELETE: XOA";
		gotoxy(COT, DONG + 4);
		cout << "ESC: TRO VE/HUY";
		gotoxy(COT, DONG + 5);
		cout << "PAGE UP: TRANG TRUOC";
		gotoxy(COT, DONG + 6);
		cout << "PAGE DOWN: TRANG SAU";
	
	}

}
char itemChinh[soDongMenu][100] = {  "1. MAY BAY                                     ",
										 "2. CHUYEN BAY                                  ",
										 "3. DAT/HUY VE                                  ",
										 "4. DANH SACH HANH KHACH THUOC CHUYEN BAY       ",
										 "5. DANH SACH VE CON TRONG CUA CHUYEN BAY X     ",
										 "6. DANH SACH CHUYEN BAY KHOI HANH TRONG NGAY   ",
										 "7. THONG KE SO LUOT THUC HIEN CHUYEN BAY       ",
										 "8. TIM KIEM SAN BAY DEN DE DAT/HUY VE          "
										 };
void toanManHinh()
{
	keybd_event(VK_MENU,0x38,0,0);
	keybd_event(VK_RETURN,0x1c,0,0);
	keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
	keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}

void khungGiaoDien() {
}
void veKhungNhap(int dai, int rong, int posx, int posy, string source)
{
	int doDai = source.length();
	if (dai == 0)
		dai = doDai + 2;
	for (int i = 0; i < dai; i++) 
	{
		gotoxy(posx + i, posy);
		cout << char(196);
	}
	gotoxy(posx, posy);
	cout << char(218); 
	gotoxy(posx + dai, posy);
	cout << char(191); 
	for (int i = 1; i <= rong; i++) 
	{
		gotoxy(posx + dai, posy + i);
		cout << char(179);
	}
	for (int i = 0; i < dai; i++) 
	{
		gotoxy(posx + i, posy + rong);
		cout << char(196);
	}
	gotoxy(posx + dai, posy + rong);
	cout << char(217);
	for (int i = 1; i <= rong; i++) 
	{
		gotoxy(posx, posy + i);
		cout << char(179);
	}
	gotoxy(posx, posy + rong);
	cout << char(192);
	cout << source;
}

void veKhungThongbao() {
	gotoxy(COT, DONGVITRI_Y - 2);
	cout << "Thong bao";
	veKhungNhap(KHUNG_L, KHUNG_R + 2, COT, DONGVITRI_Y - 1, "");
}

void hienThiThongBao(string notif, string notif2, string notif3, string NoiDen) {
	gotoxy(COT + 1, DONGVITRI_Y);
	cout << notif;

	if (notif2 != "") {
		gotoxy(COT + 1, DONGVITRI_Y + 1);
		cout << notif2;
	}
	if (NoiDen != "") {
		gotoxy(COT + 1, DONGVITRI_Y + 2);
		cout << NoiDen;
	}
	if (notif3 != "") {
		gotoxy(COT + 10, DONGVITRI_Y + 2);
		cout << notif3;
	}
	Sleep(1000);
	Normal();
	gotoxy(COT + 1, DONGVITRI_Y);
	cout << "                                                           ";
	gotoxy(COT + 1, DONGVITRI_Y + 1);
	cout << "                                                           ";
	gotoxy(COT + 1, DONGVITRI_Y + 2);
	cout << "                                                           ";
}

int menuChinh(char tieude[soDongMenu][100]) {
	Normal();
	system("cls");
	
		for (int i = 1; i <= 100; i++)
	{
		gotoxy(i+65, 1+7);  cout << char(205);
		gotoxy(i+65, 28+7); cout << char(205);
		gotoxy(COT+25, DONG);
		cout << "DIEP KHANH VUONG - N17DCCN191";
		gotoxy(COT+25, DONG + 1);
		cout << "CAU TRUC DU LIEU VA GIAI THUAT";
		gotoxy(COT, DONG + 2);		
	}
	
	for (int i = 1; i <= 27; i++)
	{
		gotoxy(1+65,1+7); cout<< char(201);
		gotoxy(1+65,4+7); cout<<char(204);
		gotoxy(1+65,25+7); cout << char(204);
		gotoxy(1+65, i+7); cout << char(186);
		gotoxy(100+65,1+7); cout<<char(187);
		gotoxy(100+65,4+7); cout<<char(185);
		gotoxy(100+65,25+7); cout<<char(185);
		gotoxy(100+65, i+7); cout << char(186);
	}

	int chon = 0;
	int i;
	for (int i = 0; i < soDongMenu; i++) {
		gotoxy(COT-50, DONG + i +16);
		cout << tieude[i];
	}
	Highlight();
	gotoxy(COT-50, DONG + chon+16);
	cout << tieude[chon];
	char kytu;
	do {
		kytu = getch();
		if (kytu == -32)
			kytu = getch();
		switch (kytu) {
		case UP:
			if (chon > 0) {
				Normal();
				gotoxy(COT-50, DONG + chon +16); cout << tieude[chon];
				chon--;
				Highlight();
				gotoxy(COT-50, DONG + chon+16); 	cout << tieude[chon];
			}
			break;
		case DOWN:
			if (chon + 1 < soDongMenu) {
				Normal();
				gotoxy(COT-50, DONG + chon+16);	cout << tieude[chon];
				chon++;
				Highlight();
				gotoxy(COT-50, DONG + chon +16); 	cout << tieude[chon];
			}
			break;
		case ENTER:
			return chon + 1;
		case ESC:
			return 0;
		}
	} while (TRUE);
}


void xoaThongTin(int type) {
	if (type == XOAMAYBAY) {
		for (int i = 0; i < MAXTRANG; i++) {
	
			gotoxy(COT_L + 1, DONGVITRI_X + 3 + i);
			cout << "    ";
			gotoxy(COT_L + 5, DONGVITRI_X + 3 + i);
			cout << char(DOC);
			gotoxy(COT_L + 6, DONGVITRI_X + 3 + i);
			cout << "                   ";
			gotoxy(COT_L + 25, DONGVITRI_X + 3 + i);
			cout << char(DOC);
			gotoxy(COT_L + 26, DONGVITRI_X + 3 + i);
			cout << "                                            ";
			gotoxy(COT_L + 70, DONGVITRI_X + 3 + i);
			cout << char(DOC);
			gotoxy(COT_L + 71, DONGVITRI_X + 3 + i);
			cout << "                      ";
			gotoxy(COT_L + 93, DONGVITRI_X + 3 + i);
			cout << char(DOC);
			gotoxy(COT_L + 94, DONGVITRI_X + 3 + i);
			cout << "                    ";
		}
	}
	else if (type == XOACHUYENBAY_L) {
		for (int i = 0; i < MAXTRANG; i++) {
			gotoxy(COT_L + 1, DONGVITRI_X + 3 + i);
			cout << "    ";
			gotoxy(COT_L + 5, DONGVITRI_X + 3 + i);
			cout << char(DOC);
			gotoxy(COT_L + 6, DONGVITRI_X + 3 + i);
			cout << "                   ";
			gotoxy(COT_L + 25, DONGVITRI_X + 3 + i);
			cout << char(DOC);
			gotoxy(COT_L + 26, DONGVITRI_X + 3 + i);
			cout << "                   ";
			gotoxy(COT_L + 45, DONGVITRI_X + 3 + i);
			cout << char(DOC);
			gotoxy(COT_L + 46, DONGVITRI_X + 3 + i);
			cout << "                                  ";
			gotoxy(COT_L + 80, DONGVITRI_X + 3 + i);
			cout << char(DOC);
			gotoxy(COT_L + 81, DONGVITRI_X + 3 + i);
			cout << "                   ";
			gotoxy(COT_L + 100, DONGVITRI_X + 3 + i);
			cout << char(DOC);
			gotoxy(COT_L + 101, DONGVITRI_X + 3 + i);
			cout << "             ";
		}
	}
	else if (type == XOACHUYENBAY) {
		for (int i = 0; i < MAXTRANG_HK; i++) {
			
			gotoxy(COT_L + 1, DONGVITRI_X + 3 + i);
			cout << "    ";
			gotoxy(COT_L + 5, DONGVITRI_X + 3 + i);
			cout << char(DOC);
			gotoxy(COT_L + 6, DONGVITRI_X + 3 + i);
			cout << "                   ";
			gotoxy(COT_L + 25, DONGVITRI_X + 3 + i);
			cout << char(DOC);
			gotoxy(COT_L + 26, DONGVITRI_X + 3 + i);
			cout << "                   ";
			gotoxy(COT_L + 45, DONGVITRI_X + 3 + i);
			cout << char(DOC);
			gotoxy(COT_L + 46, DONGVITRI_X + 3 + i);
			cout << "                                  ";
			gotoxy(COT_L + 80, DONGVITRI_X + 3 + i);
			cout << char(DOC);
			gotoxy(COT_L + 81, DONGVITRI_X + 3 + i);
			cout << "                   ";
			gotoxy(COT_L + 100, DONGVITRI_X + 3 + i);
			cout << char(DOC);
			gotoxy(COT_L + 101, DONGVITRI_X + 3 + i);
			cout << "             ";
		}
		
	}
	
}

//===================================kiem tra nhap lieu=============================================//

int kiemtraThoiGian(ThoiGian tg) {
	int sumyear = 0;
	int summonth = 0;
	for (int i = 1900; i < tg.nam; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			sumyear = sumyear + 366;
		}
		else
		{
			sumyear = sumyear + 365;
		}
	}
	for (int j = 1; j < tg.thang; j++)
	{
		if (j == 2)
		{
			if ((tg.nam % 4 == 0 && tg.nam % 100 != 0) || tg.nam % 400 == 0)
			{
				summonth = summonth + 29;
			}
			else
			{
				summonth = summonth + 28;
			}
		}
		if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
		{
			summonth = summonth + 31;
		}
		if (j == 4 || j == 6 || j == 9 || j == 11)
		{
			summonth = summonth + 30;
		}
	}
	return sumyear + summonth + tg.ngay;
}

int kiemtraTG_ChuyenBay(ChuyenBay cb, PTRChuyenBay dsCB) {
	for (PTRChuyenBay p = dsCB; p != NULL; p = p->next) {
		if (stricmp(p->data.soHieuMayBay, cb.soHieuMayBay) == 0) {
			if (!kiemtraKC_GioBay(cb.tgianKhoiHanh, p->data.tgianKhoiHanh)) {
				return 1;
			}
		}
	}
	return 0;
}

int kiemtraKC_GioBay(ThoiGian tg1, ThoiGian tg2) {
	if (kiemtraThoiGian(tg1) - kiemtraThoiGian(tg2) == 0) {
		if (abs(tg1.gio - tg2.gio) >= KC_TGIANBAY) {
			if (abs(tg1.gio - tg2.gio) == KC_TGIANBAY) {
				if (tg1.phut - tg2.phut >= 0)
					return 1;
				else
					return 0;
			}
			return 1;
		}
		return 0;
	}

	// truong hop cach nhau 1 ngay (0h==24h)
	if (abs(kiemtraThoiGian(tg1) - kiemtraThoiGian(tg2)) == 1) {

		// truong hop chuyen bay cach nhau giua moc 0h
		if (0 + tg1.gio <= KC_TGIANBAY && 24 - tg2.gio <= KC_TGIANBAY) {
			if (abs(tg1.gio - tg2.gio) <= KC_TGIAN_AM) {
				if (abs(tg1.gio - tg2.gio) == KC_TGIAN_AM) {
					if (tg1.phut - tg2.phut >= 0)
						return 1;
					else
						return 0;
				}
				return 1;
			}
			return 0;
		}
		if (24 - tg1.gio <= KC_TGIANBAY && 0 + tg2.gio <= KC_TGIANBAY) {
			if (abs(tg1.gio - tg2.gio) >= KC_TGIANBAY) {
				if (abs(tg1.gio - tg2.gio) == KC_TGIANBAY) {
					if (tg1.phut - tg2.phut >= 0)
						return 1;
					else
						return 0;
				}
				return 1;
			}
			return 0;
		}
		return 1;
	}
	// truong hop cach nhau nhieu ngay
	if (abs(kiemtraThoiGian(tg1) - kiemtraThoiGian(tg2)) > 1) {

		return 1;
	}

	return 0;
}

char* kiemtraNhapCMND(int DongInfo) {
	char info[50] = { '\0' };
	do
	{
		rewind(stdin);
		gotoxy(COT + 1, DongInfo + 2);
		cout << "                                ";
		gotoxy(COT + 1, DongInfo + 2);
		nhapKiTuSo(info, 50);
		if (info[0] == '\0') {
			thongbao_Highlight();
			hienThiThongBao("CHUA NHAP THONG TIN!");
		}
		// kiem tra nguoi nhap co nhan phim ESC de huy hay khong
		else if (info[0] == ESC) {
			int exit = isXacNhan("HUY BO", "NHAP LAI", false);
			if (exit == YES) {
				return info;
			}
			else
				continue;
		}
		else {
			return info;
		}

	} while (true);
}

void nhapMa(char var[], int doDai) {
	int maxKiTu = doDai;
	if (maxKiTu == 0)
		maxKiTu = MAX_KITU;
	rewind(stdin);
	NhapChuoi nhap;

	nhap.n = 0;

	while (true) {
		if (kbhit()) {
			char c = getch();
			if (!(!((int)c >= A && (int)c <= Z) && !((int)c >= a && (int)c <= z)
				&& !((int)c >= num0 && (int)c <= num9)) && nhap.n < maxKiTu) {
				if (nhap.n > 0 && *nhap.data[nhap.n - 1] == ' ' && c == ' ')
					continue;
				if (!(nhap.n == 0 && (int)c >= num0 && (int)c <= num9)) {
					c = toupper(c);
					nhap.data[nhap.n] = new char;
					cout << c;
					*nhap.data[nhap.n] = c;
					nhap.n++;
				}
			}
			if (c == '\r') {
				if (nhap.n > 0 && *nhap.data[nhap.n - 1] == ' ') {
					gotoxy(wherex() - 1, wherey());
					cout << " ";
					gotoxy(wherex() - 1, wherey());
					if (nhap.n > 0)
						nhap.n--;
				}

				break;
			}
			if (c == BACKSPACE && nhap.n > 0) {
				gotoxy(wherex() - 1, wherey());
				cout << " ";
				gotoxy(wherex() - 1, wherey());
				nhap.n--;
			}
			if (c == ESC) {
				var[0] = ESC;
				return;
			}
		}
	}
	for (int i = 0; i < nhap.n; i++) {
		var[i] = *nhap.data[i];
	}
	var[nhap.n] = '\0';
}

void nhapChuoiKiTu(char var[], int doDai) {
	int maxKiTu = doDai;
	if (maxKiTu == 0)
		maxKiTu = MAX_KITU;
	rewind(stdin);
	NhapChuoi nhap;

	nhap.n = 0;

	while (true) {
		if (kbhit()) {
			char c = getch();

			if (!(!((int)c >= A && (int)c <= Z) && !((int)c >= a && (int)c <= z)
				&& c != ' ') && nhap.n < maxKiTu) {
				if (nhap.n > 0 && *nhap.data[nhap.n - 1] == ' ' && c == ' ')
					continue;
				if (!(nhap.n == 0 && c == ' ')) {
					if (nhap.n == 0)
						c = toupper(c);
					else {
						if (*nhap.data[nhap.n - 1] == ' ')
							c = toupper(c);
						else
							c = tolower(c);
					}
					nhap.data[nhap.n] = new char;
					cout << c;
					*nhap.data[nhap.n] = c;
					nhap.n++;
				}
			}
			if (c == '\r') {
				if (nhap.n > 0 && *nhap.data[nhap.n - 1] == ' ') {
					gotoxy(wherex() - 1, wherey());
					cout << " ";
					gotoxy(wherex() - 1, wherey());
					if (nhap.n > 0)
						nhap.n--;
				}

				break;
			}
			if (c == BACKSPACE && nhap.n > 0) {
				gotoxy(wherex() - 1, wherey());
				cout << " ";
				gotoxy(wherex() - 1, wherey());
				nhap.n--;
			}
			if (c == ESC) {
				var[0] = ESC;
				return;
			}
		}
	}
	for (int i = 0; i < nhap.n; i++) {
		var[i] = *nhap.data[i];
	}
	var[nhap.n] = '\0';
}

void nhapKiTuSo(char var[], int doDai) {

	int maxKiTu = doDai;
	if (maxKiTu == 0)
		maxKiTu = MAX_KITU;
	rewind(stdin);
	NhapChuoi nhap;

	nhap.n = 0;

	while (true) {
		if (kbhit()) {
			char c = getch();
			if (!(!((int)c >= 65 && (int)c <= 90) && !((int)c >= 97 && (int)c <= 122)
				&& !((int)c >= 48 && (int)c <= 57) && c != ' ') && nhap.n < maxKiTu) {
				if (nhap.n > 0 && *nhap.data[nhap.n - 1] == ' ' && c == ' ')
					continue;
				if (!(nhap.n == 0 && c == ' ')) {
					if (nhap.n == 0)
						c = toupper(c);
					else {
						if (*nhap.data[nhap.n - 1] == ' ')
							c = toupper(c);
						else
							c = tolower(c);
					}
					nhap.data[nhap.n] = new char;
					cout << c;
					*nhap.data[nhap.n] = c;
					nhap.n++;
				}
			}
			if (c == '\r') {
				if (nhap.n > 0 && *nhap.data[nhap.n - 1] == ' ') {
					gotoxy(wherex() - 1, wherey());
					cout << " ";
					gotoxy(wherex() - 1, wherey());
					if (nhap.n > 0)
						nhap.n--;
				}

				break;
			}
			if (c == BACKSPACE && nhap.n > 0) {
				gotoxy(wherex() - 1, wherey());
				cout << " ";
				gotoxy(wherex() - 1, wherey());
				nhap.n--;
			}
			if (c == ESC) {
				var[0] = ESC;
				return;
			}
		}
	}
	for (int i = 0; i < nhap.n; i++) {
		var[i] = *nhap.data[i];
	}
	var[nhap.n] = '\0';
}

void nhapNumber(int& var, int doDai) {
	char num[12] = { '\0' };
	int maxKiTu = doDai;
	if (maxKiTu == 0)
		maxKiTu = MAX_KITU;

	rewind(stdin);
	NhapChuoi nhap;
	nhap.n = strlen(num);

	while (true) {
		if (kbhit()) {
			char c = getch();
			if (nhap.n < 11) {
				if ((int)c >= num0 && (int)c <= num9 && nhap.n < maxKiTu) {

					nhap.data[nhap.n] = new char;
					cout << c;
					*nhap.data[nhap.n] = c;
					nhap.n++;
				}
			}
			if (c == '\r') {
				if (nhap.n > 0 && *nhap.data[nhap.n - 1] == ' ') {
					gotoxy(wherex() - 1, wherey());
					cout << " ";
					gotoxy(wherex() - 1, wherey());
					if (nhap.n > 0)
						nhap.n--;
				}

				break;
			}
			if (c == BACKSPACE && nhap.n > 0) {
				gotoxy(wherex() - 1, wherey());
				cout << " ";
				gotoxy(wherex() - 1, wherey());
				nhap.n--;
			}
			if (c == ESC) {
				var = -1;
				return;
			}

		}
	}
	for (int i = 0; i < nhap.n; i++) {
		num[i] = *nhap.data[i];
	}
	num[nhap.n] = '\0';
	var = atoi(num);
}

void nhapDay(int& var, int doDai) {
	char num[12] = { '\0' };
	int maxKiTu = doDai;
	if (maxKiTu == 0)
		maxKiTu = MAX_KITU;

	rewind(stdin);
	NhapChuoi nhap;
	nhap.n = strlen(num);

	while (true) {
		if (kbhit()) {
			char c = getch();
			if (nhap.n < 2) {
				if ((int)c >= num0 && (int)c <= num9 && nhap.n < maxKiTu) {
					if ((nhap.n > 0 && (int)*nhap.data[nhap.n - 1] == num3 && (int)c >= num2)
						|| (nhap.n > 0 && (int)*nhap.data[nhap.n - 1] >= 52 && c >= num0)
						|| (nhap.n == 0 && (int)c == num0)) {
						continue;
					}
					nhap.data[nhap.n] = new char;
					cout << c;
					*nhap.data[nhap.n] = c;
					nhap.n++;
				}
			}
			if (c == '\r') {
				if (nhap.n > 0 && *nhap.data[nhap.n - 1] == ' ') {
					gotoxy(wherex() - 1, wherey());
					cout << " ";
					gotoxy(wherex() - 1, wherey());
					if (nhap.n > 0)
						nhap.n--;
				}

				break;
			}
			if (c == BACKSPACE && nhap.n > 0) {
				gotoxy(wherex() - 1, wherey());
				cout << " ";
				gotoxy(wherex() - 1, wherey());
				nhap.n--;
			}
			if (c == ESC) {
				var = -1;
				return;
			}

		}
	}
	for (int i = 0; i < nhap.n; i++) {
		num[i] = *nhap.data[i];
	}
	num[nhap.n] = '\0';
	var = atoi(num);
}

void nhapMonth(int& var, int doDai) {
	char num[12] = { '\0' };
	int maxKiTu = doDai;
	if (maxKiTu == 0)
		maxKiTu = MAX_KITU;

	rewind(stdin);
	NhapChuoi nhap;
	nhap.n = strlen(num);

	while (true) {
		if (kbhit()) {
			char c = getch();
			if (nhap.n < 2) {
				if ((int)c >= num0 && (int)c <= num9 && nhap.n < maxKiTu) {
					if ((nhap.n > 0 && (int)*nhap.data[nhap.n - 1] == num1 && (int)c >= num3)
						|| (nhap.n > 0 && (int)*nhap.data[nhap.n - 1] >= num2 && c >= num0)
						|| (nhap.n == 0 && (int)c == num0)) {
						continue;
					}
					nhap.data[nhap.n] = new char;
					cout << c;
					*nhap.data[nhap.n] = c;
					nhap.n++;
				}
			}
			if (c == '\r') {
				if (nhap.n > 0 && *nhap.data[nhap.n - 1] == ' ') {
					gotoxy(wherex() - 1, wherey());
					cout << " ";
					gotoxy(wherex() - 1, wherey());
					if (nhap.n > 0)
						nhap.n--;
				}

				break;
			}
			if (c == BACKSPACE && nhap.n > 0) {
				gotoxy(wherex() - 1, wherey());
				cout << " ";
				gotoxy(wherex() - 1, wherey());
				nhap.n--;
			}
			if (c == ESC) {
				var = -1;
				return;
			}

		}
	}
	for (int i = 0; i < nhap.n; i++) {
		num[i] = *nhap.data[i];
	}
	num[nhap.n] = '\0';
	var = atoi(num);
}

void nhapYear(int& var, int doDai) {
	char num[12] = { '\0' };
	int maxKiTu = doDai;
	if (maxKiTu == 0)
		maxKiTu = MAX_KITU;

	rewind(stdin);
	NhapChuoi nhap;
	nhap.n = strlen(num);

	while (true) {
		if (kbhit()) {
			char c = getch();
			if (nhap.n < 4) {
				if ((int)c >= num0 && (int)c <= num9 && nhap.n < maxKiTu) {
					if ((nhap.n == 0 && (int)c == num0)) {
						continue;
					}
					nhap.data[nhap.n] = new char;
					cout << c;
					*nhap.data[nhap.n] = c;
					nhap.n++;
				}
			}
			if (c == '\r') {
				if (nhap.n > 0 && *nhap.data[nhap.n - 1] == ' ') {
					gotoxy(wherex() - 1, wherey());
					cout << " ";
					gotoxy(wherex() - 1, wherey());
					if (nhap.n > 0)
						nhap.n--;
				}

				break;
			}
			if (c == BACKSPACE && nhap.n > 0) {
				gotoxy(wherex() - 1, wherey());
				cout << " ";
				gotoxy(wherex() - 1, wherey());
				nhap.n--;
			}
			if (c == ESC) {
				var = -1;
				return;
			}
		}
	}
	for (int i = 0; i < nhap.n; i++) {
		num[i] = *nhap.data[i];
	}
	num[nhap.n] = '\0';
	var = atoi(num);

}

void nhapHour(int& var, int doDai) {
	char num[12] = { '\0' };
	int maxKiTu = doDai;
	if (maxKiTu == 0)
		maxKiTu = MAX_KITU;

	rewind(stdin);
	NhapChuoi nhap;
	nhap.n = strlen(num);

	while (true) {
		if (kbhit()) {
			char c = getch();
			if (nhap.n < 2) {
				if ((int)c >= num0 && (int)c <= num9 && nhap.n < maxKiTu) {
					if ((nhap.n > 0 && (int)*nhap.data[nhap.n - 1] >= num2 && (int)c >= num4)) {
						continue;
					}
					nhap.data[nhap.n] = new char;
					cout << c;
					*nhap.data[nhap.n] = c;
					nhap.n++;
				}
			}
			if (c == '\r') {
				if (nhap.n > 0 && *nhap.data[nhap.n - 1] == ' ') {
					gotoxy(wherex() - 1, wherey());
					cout << " ";
					gotoxy(wherex() - 1, wherey());
					if (nhap.n > 0)
						nhap.n--;
				}

				break;
			}
			if (c == BACKSPACE && nhap.n > 0) {
				gotoxy(wherex() - 1, wherey());
				cout << " ";
				gotoxy(wherex() - 1, wherey());
				nhap.n--;
			}
			if (c == ESC) {
				var = -1;
				return;
			}

		}
	}
	for (int i = 0; i < nhap.n; i++) {
		num[i] = *nhap.data[i];
	}
	num[nhap.n] = '\0';
	var = atoi(num);
}

void nhapMinute(int& var, int doDai) {
	char num[12] = { '\0' };
	int maxKiTu = doDai;
	if (maxKiTu == 0)
		maxKiTu = MAX_KITU;

	rewind(stdin);
	NhapChuoi nhap;
	nhap.n = strlen(num);

	while (true) {
		if (kbhit()) {
			char c = getch();
			if (nhap.n < 2) {
				if ((int)c >= num0 && (int)c <= num9 && nhap.n < maxKiTu) {
					if ((nhap.n > 0 && (int)*nhap.data[nhap.n - 1] >= num6 && (int)c >= num0)) {
						continue;
					}
					nhap.data[nhap.n] = new char;
					cout << c;
					*nhap.data[nhap.n] = c;
					nhap.n++;
				}
			}
			if (c == '\r') {
				if (nhap.n > 0 && *nhap.data[nhap.n - 1] == ' ') {
					gotoxy(wherex() - 1, wherey());
					cout << " ";
					gotoxy(wherex() - 1, wherey());
					if (nhap.n > 0)
						nhap.n--;
				}

				break;
			}
			if (c == BACKSPACE && nhap.n > 0) {
				gotoxy(wherex() - 1, wherey());
				cout << " ";
				gotoxy(wherex() - 1, wherey());
				nhap.n--;
			}
			if (c == ESC) {
				var = -1;
				return;
			}

		}
	}
	for (int i = 0; i < nhap.n; i++) {
		num[i] = *nhap.data[i];
	}
	num[nhap.n] = '\0';
	var = atoi(num);
}

int kiemtraTG_HoanTat(ThoiGian tg1, ThoiGian tg2) {
	if (kiemtraThoiGian(tg1) - kiemtraThoiGian(tg2) == 0) {

		if (abs(tg1.gio - tg2.gio) >= KC_TGIANBAY) {
			if (abs(tg1.gio - tg2.gio) == KC_TGIANBAY) {
				if (tg1.phut - tg2.phut >= 0)
					return 1;
				else
					return 0;
			}
			return 1;
		}
		return 0;
	}

	// truong hop cach nhau 1 ngay (0h==24h)
	if (kiemtraThoiGian(tg1) - kiemtraThoiGian(tg2) == -1) {

		// truong hop chuyen bay cach nhau giua moc 0h
		if (0 + tg1.gio <= KC_TGIANBAY && 24 - tg2.gio <= KC_TGIANBAY) {
			if (abs(tg1.gio - tg2.gio) <= KC_TGIAN_AM) {
				if (abs(tg1.gio - tg2.gio) == KC_TGIAN_AM) {
					if (tg1.phut - tg2.phut >= 0)
						return 1;
					else
						return 0;
				}
				return 1;
			}
			return 0;
		}
		if (24 - tg1.gio <= KC_TGIANBAY && 0 + tg2.gio <= KC_TGIANBAY) {
			if (abs(tg1.gio - tg2.gio) >= KC_TGIANBAY) {
				if (abs(tg1.gio - tg2.gio) == KC_TGIANBAY) {
					if (tg1.phut - tg2.phut >= 0)
						return 1;
					else
						return 0;
				}
				return 1;
			}
			return 0;
		}
		return 1;
	}
	if (kiemtraThoiGian(tg1) - kiemtraThoiGian(tg2) < -1) {
		return 1;
	}
}

int kiemtraCB_HoanTat(PTRChuyenBay& dsCB) {
	time_t baygio = time(0);
	tm* ltm = localtime(&baygio);
	ThoiGian tg;
	tg.ngay = ltm->tm_mday;
	tg.thang = ltm->tm_mon + 1;
	tg.nam = ltm->tm_year + 1900;
	tg.gio = ltm->tm_hour;
	tg.phut = ltm->tm_min;

	for (PTRChuyenBay p = dsCB; p != NULL; p = p->next) {

		if (kiemtraThoiGian(p->data.tgianKhoiHanh) - kiemtraThoiGian(tg) <= 0) {
			if (kiemtraTG_HoanTat(p->data.tgianKhoiHanh, tg)) {
				p->data.trangThai = HOANTAT;
			}
		}
	}

	return 1;
}


int kiemtraThemSoCho(MayBay mbCu, MayBay mbMoi) {
	if (mbMoi.soCho < mbCu.soCho) {
		thongbao_Highlight();
		hienThiThongBao("SO CHO MOI PHAI LON HON SO CHO CU");
		return 1;
	}
	return 0;
}

int kiemtraVeDaMua(string listVe[], int soluongVe) {
	for (int i = 0; i < soluongVe; i++) {
		if (listVe[i] != "") {
			return 1;
		}
	}
	return 0;
}

char* kiemtraNhapChuoi(bool Nhap_Ma, int DongInfo) { 
	char info[50] = { '\0' };
	do
	{
		rewind(stdin);
		gotoxy(COT + 1, DongInfo + 2);
		cout << "                                ";
		gotoxy(COT + 1, DongInfo + 2);
		if (Nhap_Ma == true)
			nhapMa(info, 50);
		else
			nhapChuoiKiTu(info, 50);
		if (info[0] == '\0') {
			thongbao_Highlight();
			hienThiThongBao("CHUA NHAP THONG TIN!");
		}
		// kiem tra nguoi nhap co nhan phim ESC de huy hay khong
		else if (info[0] == ESC) {
			int exit = isXacNhan("HUY BO", "NHAP LAI", false);
			if (exit == YES) {
				return info;
			}
			else
				continue;
		}
		else {
			return info;
		}

	} while (true);
}
int kiemtraTrangThai(ChuyenBay cb) {
	if (cb.trangThai == HOANTAT) {
		thongbao_Highlight();
		hienThiThongBao("CHUYEN BAY DA HOAN TAT!");
		return 1;
	}
	if (cb.trangThai == HUYCHUYEN) {
		thongbao_Highlight();
		hienThiThongBao("CHUYEN BAY DA BI HUY!");
		return 1;
	}
	if (cb.trangThai == HETVE) {
		thongbao_Highlight();
		hienThiThongBao("CHUYEN BAY DA HET VE!");
		return 1;
	}
	return 0;
}
int kiemtraNhapSo(int DongInfo) {
	int var;
	do
	{
		rewind(stdin);
		gotoxy(COT + 1, DongInfo + 2);
		cout << "                                ";
		gotoxy(COT + 1, DongInfo + 2);
		nhapNumber(var, 50);
		if (var == 0) {
			thongbao_Highlight();
			hienThiThongBao("CHUA NHAP THONG TIN!");
		}
		else if (var == -1) {
			int exit = isXacNhan("HUY BO", "NHAP LAI", false);
			if (exit == YES) {
				return var;
			}
			else
				continue;
		}
		else {
			return var;
		}

	} while (true);
}

int kiemtraTG_HeThong(ThoiGian tg) {
	time_t baygio = time(0);
	tm* ltm = localtime(&baygio);
	ThoiGian t;
	t.ngay = ltm->tm_mday;
	t.thang = ltm->tm_mon + 1;
	t.nam = ltm->tm_year + 1900;
	t.gio = ltm->tm_hour;
	t.phut = ltm->tm_min;

	if (kiemtraThoiGian(tg) - kiemtraThoiGian(t) == 0)
		return 1;
	return 0;
}
ThoiGian kiemtraNgayNhap(ThoiGian& tg, int DongInfo) {

	do
	{
	Ngay:
		gotoxy(COT + 1, DongInfo + 2);
		cout << "    ";
		gotoxy(COT + 1, DongInfo + 2);
		nhapDay(tg.ngay, 3);
		if (tg.ngay == 0 || tg.ngay == -1)
			goto Check;
	Thang:
		gotoxy(COT + KHUNG_M + 1, DongInfo + 2);
		cout << "   ";
		gotoxy(COT + KHUNG_M + 1, DongInfo + 2);
		nhapMonth(tg.thang, 3);
		if (tg.thang == 0 || tg.thang == -1)
			goto Check;
	Nam:
		gotoxy(COT + KHUNG_M * 2 + 1, DongInfo + 2);
		cout << "    ";
		gotoxy(COT + KHUNG_M * 2 + 1, DongInfo + 2);
		nhapYear(tg.nam, 5);
		if (tg.nam == 0 || tg.nam == -1)
			goto Check;

	Check:
		if (tg.ngay == 0 || tg.thang == 0 || tg.nam == 0) {
			thongbao_Highlight();
			hienThiThongBao("CHUA NHAP THONG TIN!");
			if (tg.ngay == 0)
				goto Ngay;
			if (tg.thang == 0)
				goto Thang;
			if (tg.nam == 0)
				goto Nam;
		}
		if (tg.ngay == -1 || tg.thang == -1 || tg.nam == -1) {
			int exit = isXacNhan("HUY BO", "NHAP LAI", false);
			if (exit == YES) {
				return tg;
			}
			else {
				if (tg.ngay == -1)
					goto Ngay;
				if (tg.thang == -1)
					goto Thang;
				if (tg.nam == -1)
					goto Nam;
			}
		}
		return tg;
	} while (true);
}

ThoiGian kiemtraThoiGianNhap(ThoiGian& tg, int DongInfo) {

	do
	{
	Gio:
		gotoxy(COT + 1, DongInfo + 2);
		cout << "    ";
		gotoxy(COT + 1, DongInfo + 2);
		nhapHour(tg.gio, 3);
		if (tg.gio == -1)
			goto Check;
	Phut:
		gotoxy(COT + KHUNG_M + 1, DongInfo + 2);
		cout << "   ";
		gotoxy(COT + KHUNG_M + 1, DongInfo + 2);
		nhapMinute(tg.phut, 3);
		if (tg.phut == -1)
			goto Check;

	Check:
		if (tg.gio == -1 || tg.phut == -1) {
			int exit = isXacNhan("HUY BO", "NHAP LAI", false);
			if (exit == YES) {
				return tg;
			}
			else {
				if (tg.gio == -1)
					goto Gio;
				if (tg.phut == -1)
					goto Phut;
			}

		}
		return tg;

	} while (true);
}

int batLoiNhapThoiGian(ThoiGian tg) {

	time_t baygio = time(0);
	tm* ltm = localtime(&baygio);
	if (tg.ngay < ltm->tm_mday || tg.thang < 1 + ltm->tm_mon || tg.nam < 1900 + ltm->tm_year)
	{
		if (tg.thang <= 1 + ltm->tm_mon || tg.nam < 1900 + ltm->tm_year)
		{
			if (tg.nam <= 1900 + ltm->tm_year)
			{
				char nam[5];
				itoa(1900 + ltm->tm_year, nam, 10);
				char thang[3];
				itoa(ltm->tm_mon + 1, thang, 10);
				char ngay[50];
				itoa(ltm->tm_mday, ngay, 10);
				char thongbao[70] = "GIO HE THONG ";
				strcat(ngay, "/");
				strcat(ngay, thang);
				strcat(ngay, "/");
				strcat(ngay, nam);
				strcat(ngay, ". LAP CHUYEN BAY SAU NGAY HIEN TAI!");
				strcat(thongbao, ngay);
				thongbao_Highlight();
				hienThiThongBao(thongbao);
				return 1;
			}
		}
	}
	if (tg.ngay == 31 && (tg.thang == 4 || tg.thang == 6 || tg.thang == 9 || tg.thang == 11))
	{

		char month[50];
		itoa(tg.thang, month, 10);
		char thongbao[50] = "Thang ";
		strcat(month, "CHI CO 30 NGAY!");
		strcat(thongbao, month);
		thongbao_Highlight();
		hienThiThongBao(thongbao);
		return 1;
	}
	if ((tg.ngay == 30 || tg.ngay == 31) && tg.thang == 2)
	{

		char month[50];
		itoa(tg.thang, month, 10);
		char thongbao[50] = "Thang ";
		strcat(month, "CHI CO 29 NGAY!");
		strcat(thongbao, month);
		thongbao_Highlight();
		hienThiThongBao(thongbao);
		return 1;
	}
	if (!((tg.nam % 4 == 0 && tg.nam % 100 != 0) || tg.nam % 400 == 0) && tg.ngay == 29 && tg.thang == 2) // kiem tra nam nhuan
	{
		char year[100];
		itoa(tg.nam, year, 10);
		strcat(year, "NAM KHONG NHUAN NEN THANG 2 CHI CO 28 NGAY!");
		thongbao_Highlight();
		hienThiThongBao(year);

		return 1;
	}

	return -1;
}

int batLoiNhapGio(ThoiGian h)
{
	time_t baygio = time(0);
	tm* ltm = localtime(&baygio);
	ThoiGian t;
	t.ngay = ltm->tm_mday;
	t.thang = ltm->tm_mon + 1;
	t.nam = ltm->tm_year + 1900;
	t.gio = ltm->tm_hour;
	t.phut = ltm->tm_min;
	char thongbao[70] = "GIO HIEN TAI: ";
	char gio[4];
	char phut[4];
	if (kiemtraTG_HeThong(h) && h.gio < t.gio) {
		itoa(t.gio, gio, 10);
		strcat(gio, ":");
		itoa(t.phut, phut, 10);
		strcat(thongbao, gio);
		strcat(thongbao, phut);
		thongbao_Highlight();
		hienThiThongBao(thongbao);
		return 1;
	}
	if (kiemtraTG_HeThong(h) && h.gio == t.gio) {
		if (h.phut < t.phut) {
			itoa(t.gio, gio, 10);
			strcat(gio, ":");
			itoa(t.phut, phut, 10);
			strcat(thongbao, gio);
			strcat(thongbao, phut);
			thongbao_Highlight();
			hienThiThongBao(thongbao);
			return 1;
		}
	}
	if (h.gio > 23 || h.gio < 0)
	{
		thongbao_Highlight();
		hienThiThongBao("GIO BAT DAU TU 0 -> 23H !");
		return 1;
	}
	if (h.phut > 59 || h.phut < 0)
	{
		thongbao_Highlight();
		hienThiThongBao("PHUT PHAI TU 0 -> 59!");
		return 1;
	}
	return -1;
}

void tachChuoiNhap(string chuoi, char splitChar, int& vtri, char cmnd[]) {
	int doDai = chuoi.length();
	int k = 0;
	for (int i = 0; i < doDai; i++) {
		if (chuoi.at(i) == splitChar) {
			vtri = atoi(chuoi.substr(0, i).c_str());
			for (int j = i + 1; j < doDai; j++) {
				cmnd[k] = chuoi[j];
				k++;
			}
			cmnd[k + 1] = '\0';
			break;
		}
	}
}

int isXacNhan(string chose1, string chose2, bool huyCB) {
	char key;
	int chon = 3;

	Highlight();
	gotoxy(COT + 10, input7-2);
	cout << chose1;
	Normal();
	gotoxy(COT + KHUNG_M + 28, input7-2);
	cout << chose2;
	do
	{
		key = getch();
		if (key == -32)
			key = getch();
		switch (key)
		{
		case LEFT:
			Normal();
			gotoxy(COT + KHUNG_M + 28, input7-2);
			cout << chose2;
			Highlight();
			gotoxy(COT + 10, input7-2);
			cout << chose1;
			chon = YES;
			break;
		case RIGHT:
			Normal();
			gotoxy(COT + 10, input7-2);
			cout << chose1;
			Highlight();
			gotoxy(COT + KHUNG_M + 28, input7-2);
			cout << chose2;
			if (huyCB == true)
				chon = HUYCHUYENBAY;
			else
				chon = NO;
			break;
		case ENTER:
			Normal();
			gotoxy(COT + 10, input7-2);
			cout << "                                       ";
			return chon;
		case ESC:
			Normal();
			gotoxy(COT + 10, input7-2);
			cout << "                                       ";
			return CANCEL;
		}

	} while (true);
}

//==========================================may bay============================================//
int emptyMayBay(ListMayBay dsMB) {
	return dsMB.n == 0;
}

int fullMayBay(ListMayBay dsMB) {
	return dsMB.n == MAXLIST;
}

int timkiemMayBay(ListMayBay dsMB, char maMB[]) {
	for (int i = 0; i < dsMB.n; i++) {
		if (strcmp(dsMB.MB[i]->soHieuMayBay, maMB) == 0) return i;
	}
	return -1;
}

MayBay chonSuaMayBay(ListMayBay dsMB, int& chonMB) {
	xoaKhung();
	MayBay tmp;
	Normal();
	khungGiaoDien();
	hienThiHuongDan(1);
	int page = MAXTRANG - 1;
	int dem = 0;
	int chon = 0;
	int i;
	hienThi_DSMayBay(dsMB, 0);
	Highlight();
	char kytu;
	do
	{
		kytu = getch();
		if (kytu == -32)
			kytu = getch();
		if (kytu == 0)
			kytu = getch();
		switch (kytu)
		{
		case UP:
			if (chon > 0 && dem > 0) {
				Normal();
				hienThiMayBay(dsMB, chon, true, dem);

				chon--;
				dem--;
				Highlight();
				hienThiMayBay(dsMB, chon, true, dem);
			}
			break;
		case DOWN:
			if (chon + 1 < dsMB.n && dem + 1 < MAXTRANG) {
				Normal();
				hienThiMayBay(dsMB, chon, true, dem);

				chon++;
				dem++;
				Highlight();
				hienThiMayBay(dsMB, chon, true, dem);
			}
			break;
		case PAGEUP:
			if (page > MAXTRANG) {
				Normal();
				page -= MAXTRANG * 2;
				chon = page;
				dem = 0;
				xoaThongTin(XOAMAYBAY);
				for (page; page < dsMB.n; page++) {
					hienThiMayBay(dsMB, page, true, dem);
					if (dem == MAXTRANG - 1) {
						break;
					}
					dem++;
				}
				dem = 0;
				Highlight();
				hienThiMayBay(dsMB, chon, true, dem);
			}
			break;
		case PAGEDOWN:
			if (page < dsMB.n) {
				Normal();
				xoaThongTin(XOAMAYBAY);
				page++;
				chon = page;
				dem = 0;
				for (page; page < dsMB.n; page++) {
					hienThiMayBay(dsMB, page, true, dem);
					if (dem == MAXTRANG - 1) {
						break;
					}
					dem++;
				}
				page += MAXTRANG - dem;
				dem = 0;
				Highlight();
				hienThiMayBay(dsMB, chon, true, dem);
			}
			break;
		case INSERT:
			chonMB = THEMMAYBAY;
			tmp.soHieuMayBay[0] = '\0';
			return tmp;
		case DELETE:
		{
			int xacNhan = isXacNhan("DONG Y", "HUY BO", false);
			if (xacNhan == YES) {
				chonMB = XOAMAYBAY;
				return *dsMB.MB[chon];
			}
			else
				break;
		}
		case HOME:
		{
			tmp.soHieuMayBay[0] = '\0';
			int tontai = -1;
			do
			{
				strcpy(tmp.soHieuMayBay, UI_TimMa(0, "TIM MAY BAY"));
				if (tmp.soHieuMayBay[0] == ESC)
				{
					thongbao_Highlight();
					hienThiThongBao("DA HUY TIM KIEM!");
					return tmp;
				}
				tontai = timkiemMayBay(dsMB, tmp.soHieuMayBay);
				if (tontai == -1) {
					thongbao_Highlight();
					hienThiThongBao("KHONG TIM THAY SO HIEU MAY BAY!");

				}
				else break;
			} while (true);
			chonMB = isXacNhan("SUA", "XOA", false);
			if (chonMB == XOAMAYBAY) {
				int xacNhan = isXacNhan("DONG Y", "HUY", false);
				if (xacNhan == YES) {
					chonMB = XOAMAYBAY;
					return tmp;
				}
				else
					break;
			}
			else if (chonMB == CANCEL)
				break;
			Normal();
			return tmp;
		}
		case ESC:
		{
			Normal();
			tmp.soHieuMayBay[0] = '\0';
			chonMB = soDongMayBay;
			return tmp;
		}
		case ENTER:
		{
			Normal();
			chonMB = isXacNhan("SUA", "XOA", false);
			if (chonMB == NO) {
				int xacNhan = isXacNhan("DONG Y", "HUY", false);
				if (xacNhan == YES) {
					chonMB = XOAMAYBAY;
					return *dsMB.MB[chon];
				}
				else
					break;
			}
			else if (chonMB == CANCEL)
				break;
			return *dsMB.MB[chon];
		}
		}
	} while (true);
}

int insertMayBay(ListMayBay& dsMB, MayBay mb) {

	int empty = emptyMayBay(dsMB);
	int full = fullMayBay(dsMB);
	if (empty == 1)
	{
		//tao may bay dau tien 
		dsMB.MB[0] = new MayBay;
 		strcpy(dsMB.MB[0]->soHieuMayBay, mb.soHieuMayBay);
		strcpy(dsMB.MB[0]->loaiMayBay , mb.loaiMayBay);
		dsMB.MB[0]->soCho = mb.soCho;
		dsMB.n = 1;
		return 1;
	}
	else if (full)
	{
		cout << "DANH SACH MAY BAY DA FULL";
		return -1;
	}
	else
	{
		dsMB.MB[dsMB.n] = new MayBay;
		strcpy(dsMB.MB[dsMB.n]->soHieuMayBay, mb.soHieuMayBay);
		strcpy(dsMB.MB[dsMB.n]->loaiMayBay , mb.loaiMayBay);
		dsMB.MB[dsMB.n]->soCho = mb.soCho;
		dsMB.n++;
		return 1;
	}
	/*hoac cach khac
	int i, int j;
	if(i<0||i>dsMB.n||full(dsMB)) return 0;
	for (j = dsMB.n-1; j>=i; j--) {
		dsMB.MB[j+1] = dsMB.MB[j]; 
		}
	dsMB.MB[i] = new MayBay;
	*dsMB.MB[i] = mb;
	dsMB.n++;
	return 1;
	*/
}

void Cau1MayBay(ListMayBay& dsMB, PTRChuyenBay dsCB) {
	int chonMB;
	int exit1 = 1;
	Normal();
	system("cls");
	MayBay tmp;
	while (exit1) {
		hienThi_DSMayBay(dsMB, 0);
		chonMB = 0;
		tmp = chonSuaMayBay(dsMB, chonMB);
		switch (chonMB)
		{
			case THEMMAYBAY:
			{
				MayBay mb = themMayBay(dsMB);
				if (mb.soHieuMayBay[0] == ESC)
				{
					thongbao_Highlight();
					hienThiThongBao("DA HUY NHAP!");
					break;
				}
				int themMayBay = insertMayBay(dsMB, mb);
				if (themMayBay == 1) {
					suadoi_Highlight();
					hienThiThongBao("THEM THANH CONG!");
					int save = ghiFileMayBay(dsMB);
				}
				else {
					thongbao_Highlight();
					hienThiThongBao("THEM THAT BAI!");
				}
				Normal();
				system("cls");
				break;

			}
			case SUAMAYBAY:
			{
				int tontai = -1;
				tontai = timkiemMayBay(dsMB, tmp.soHieuMayBay);
				int sua = suaMayBay(dsMB, tontai);
				if (sua == 1) {
					suadoi_Highlight();
					hienThiThongBao("SUA MAY BAY THANH CONG!");
					int save = ghiFileMayBay(dsMB);
				}
				else {
					thongbao_Highlight();
					hienThiThongBao("DA HUY BO!");
				}
				Normal();
				system("cls");
				break;

			}
			case XOAMAYBAY:
			{
				int tontai = -1;
				tontai = timkiemMayBay(dsMB, tmp.soHieuMayBay);
				int xoa = xoaMayBay(dsMB, tontai, dsCB);
				if (xoa == 1) {
					suadoi_Highlight();
					hienThiThongBao("XOA MAY BAY THANH CONG!");
					int save = ghiFileMayBay(dsMB);
				}
				else {
					thongbao_Highlight();
					hienThiThongBao("MAY BAY DA CO CHUYEN BAY!");
				}
				Normal();
				system("cls");
				break;

			}
			case soDongMayBay:
			{
				exit1 = 0;
				break;
			}
		}
	}
}

MayBay getMB(ListMayBay dsMB, char ma[]) {
	MayBay maybay;

	for (int i = 0; i < dsMB.n; i++) {
		if (stricmp(dsMB.MB[i]->soHieuMayBay, ma) == 0) {
			strcpy(maybay.soHieuMayBay, dsMB.MB[i]->soHieuMayBay);
			strcpy(maybay.loaiMayBay, dsMB.MB[i]->loaiMayBay);
			maybay.soCho = dsMB.MB[i]->soCho;
			return maybay;
		}
	}
	maybay.soHieuMayBay[0] = '\0';
	return maybay;
}

MayBay themMayBay(ListMayBay &dsMB){
	veKhungThongTin(THEMMAYBAY, "THEM MAY BAY", "So hieu may bay:", "Loai may bay:", "So cho:");
	MayBay mb;
	do {
		strcpy(mb.soHieuMayBay, kiemtraNhapChuoi(true, input1));
		// kiem tra so hieu may bay da co chua
		int tontai = timkiemMayBay(dsMB, mb.soHieuMayBay);
		if (tontai != -1) {
			thongbao_Highlight();
			hienThiThongBao("SO HIEU MAY BAY DA TON TAI!");
		}
		else {
			if (mb.soHieuMayBay[0] == ESC) {
				return mb;
			}
			else break;
		}
	} while (true);
	
	do {
		strcpy(mb.loaiMayBay, kiemtraNhapChuoi(false, input2));

		if (mb.loaiMayBay[0] == ESC) {
			mb.soHieuMayBay[0] = ESC;
			return mb;
		}
		else break;
	} while (true);

	do
	{
		mb.soCho = kiemtraNhapSo(input3);
		if (mb.soCho == -1) {
			mb.soHieuMayBay[0] = ESC;
			return mb;
		}
		else if (mb.soCho < MIN_SOCHO) {
			thongbao_Highlight();
			hienThiThongBao("SO CHO PHAI LON HON HOAC BANG 20 !");
		}
		else break;
	} while (true);
	return mb;
}

void hienThiMayBay(ListMayBay dsMB, int chon, bool type, int dem) {
	gotoxy(COT_L + 1, DONGVITRI_X + 3 + dem);
	cout << "                                                                                                                 ";
	gotoxy(COT_L + 1, DONGVITRI_X + 3 + dem);
	cout << chon + 1;

	gotoxy(COT_L + 6, DONGVITRI_X + 3 + dem);
	cout << dsMB.MB[chon]->soHieuMayBay;
	gotoxy(COT_L + 5, DONGVITRI_X + 3 + dem);
	cout << char(DOC);

	gotoxy(COT_L + 26, DONGVITRI_X + 3 + dem);
	cout << dsMB.MB[chon]->loaiMayBay;
	gotoxy(COT_L + 25, DONGVITRI_X + 3 + dem);
	cout << char(DOC);

	gotoxy(COT_L + 71, DONGVITRI_X + 3 + dem);
	cout << dsMB.MB[chon]->soCho;
	gotoxy(COT_L + 70, DONGVITRI_X + 3 + dem);
	cout << char(DOC);

	Normal();

}

MayBay ChonMB_toChuyenBay(ListMayBay dsMB) {
	xoaKhung();
	MayBay tmp;
	Normal();
	int page = MAXTRANG - 1;
	if (dsMB.n < MAXTRANG)
		page = dsMB.n;
	int dem = 0;
	int chon = 0;
	int i;
	hienThi_DSMayBay(dsMB, 0);
	Highlight();
	hienThiMayBay(dsMB, chon, false, dem);
	char kytu;
	do
	{
		kytu = getch();
		if (kytu == -32)
			kytu = getch();
		switch (kytu)
		{
			case UP:
				if (chon > 0 && dem > 0) {
					Normal();
					hienThiMayBay(dsMB, chon, false, dem);

					chon--;
					dem--;
					Highlight();
					hienThiMayBay(dsMB, chon, false, dem);
				}
				break;
			case DOWN:
				if (chon + 1 < dsMB.n && dem + 1 < MAXTRANG) {
					Normal();
					hienThiMayBay(dsMB, chon, false, dem);
					chon++;
					dem++;
					Highlight();
					hienThiMayBay(dsMB, chon, false, dem);
				}
				break;
			case PAGEUP:
				if (page > MAXTRANG) {
					Normal();
					page -= MAXTRANG * 2;
					chon = page;
					dem = 0;
					xoaThongTin(XOAMAYBAY);
					for (page; page < dsMB.n; page++) {
						hienThiMayBay(dsMB, page, true, dem);
						if (dem == MAXTRANG - 1) {
							break;
						}
						dem++;
					}
					dem = 0;
					Highlight();
					hienThiMayBay(dsMB, chon, true, dem);
				}

				break;
			case PAGEDOWN:
				if (page < dsMB.n) {
					Normal();
					xoaThongTin(XOAMAYBAY);
					page++;
					chon = page;
					dem = 0;
					for (page; page < dsMB.n; page++) {
						hienThiMayBay(dsMB, page, true, dem);
						if (dem == MAXTRANG - 1) {
							break;
						}
						dem++;
					}
					page += MAXTRANG - dem;
					dem = 0;
					Highlight();
					hienThiMayBay(dsMB, chon, true, dem);
				}
				break;
			case ESC: {
				Normal();
				tmp.soHieuMayBay[0] = '\0';
				return tmp;
			}
			case ENTER:
			{
				Normal();
				MayBay maybay;
				strcpy(maybay.soHieuMayBay, dsMB.MB[chon]->soHieuMayBay);
				strcpy(maybay.loaiMayBay, dsMB.MB[chon]->loaiMayBay);
				maybay.soCho = dsMB.MB[chon]->soCho;
				return maybay;
			}
		}
	} while (true);
}

void hienThi_DSMayBay(ListMayBay dsMB, int page) {
	veKhungXuat(XUATMAYBAY, DONGVITRI_Y - DONGVITRI_X, COT_R - COT_L, 5, 25, 70);
	int i = page, pageMB = page, dem = 0;
	for (i, pageMB; pageMB < dsMB.n; pageMB++, i++) {
		gotoxy(COT_L + 1, DONGVITRI_X + 3 + i);
		cout << i + 1;
		gotoxy(COT_L + 6, DONGVITRI_X + 3 + i);
		cout << dsMB.MB[i]->soHieuMayBay;
		gotoxy(COT_L + 26, DONGVITRI_X + 3 + i);
		cout << dsMB.MB[i]->loaiMayBay;
		gotoxy(COT_L + 71, DONGVITRI_X + 3 + i);
		cout << dsMB.MB[i]->soCho;
		dem++;
		if (dem == MAXTRANG) {
			break;
		}
	}
}

int kiemtraMayBayCoCB(MayBay mb, PTRChuyenBay dsCB) {
	for (PTRChuyenBay p = dsCB; p != NULL; p = p->next) {
		if (stricmp(mb.soHieuMayBay, p->data.soHieuMayBay) == 0) {
			return 1;
		}
	}
}

int xoaMayBay(ListMayBay& dsMB, int i, PTRChuyenBay dsCB) {
	int j;
	MayBay mb = getMB(dsMB, dsMB.MB[i]->soHieuMayBay);

	if (emptyMayBay(dsMB)) {
		return 0;
	}
	if (i == -1)
		return 0;
	if (kiemtraMayBayCoCB(mb, dsCB) == 1) {
		return 0;
	}
	for (j = i + 1; j < dsMB.n; j++) {
		dsMB.MB[j - 1] = dsMB.MB[j];
	}
	dsMB.n--;
	return 1;
}

int suaMayBay(ListMayBay& dsMB, int i) {
	veKhungThongTin(SUAMAYBAY, "SUA MAY BAY", "So hieu may bay:", "Sua loai may bay:", "Sua so cho");
	MayBay mb;
	if (i == -1)
		return 0;

	gotoxy(COT + 1, input1 + 2);
	rewind(stdin);
	cout << dsMB.MB[i]->soHieuMayBay;
	strcpy(mb.soHieuMayBay, dsMB.MB[i]->soHieuMayBay);

    do
	{
	    gotoxy(COT + 1, input2 + 2);
	    strcpy(mb.loaiMayBay, kiemtraNhapChuoi(false, input2));
		if (stricmp(mb.loaiMayBay, "") == 0) {
			thongbao_Highlight();
			hienThiThongBao("KHONG THE BO TRONG LOAI MAY BAY! ");
		}
		else if (mb.loaiMayBay[0] == ESC) {
					return 0;
				}
		else break;

	} while (true);

	do
	{
		
		mb.soCho = kiemtraNhapSo(input3);
		if (mb.soCho == -1) {
			return CANCEL;
		}
		else if (mb.soCho < dsMB.MB[i]->soCho) {
			thongbao_Highlight();
			hienThiThongBao("SO CHO MOI PHAI LON HON SO CHO CU! ");
		}
		else if (mb.soCho < MIN_SOCHO) {
			thongbao_Highlight();
			hienThiThongBao("SO CHO LON HON HOAC BANG 20! ");
		}
		else break;

	} while (true);


		*dsMB.MB[i] = mb;

	return 1;
}
//===========================quicksort sap xep so luot giam dan=========================================//
void quickSortThongKeLuot(MayBay *soLanBay, int left, int right)
{
	int i, j, x;
	i = left;
	j = right;
	x = soLanBay[(left + right) / 2].soLuot; //x chon pivot(diem trong tam) 
	MayBay temp;

	do
	{
		while (soLanBay[i].soLuot > x)
		{
			i++;
		}
		while (soLanBay[j].soLuot < x)
		{
			j--;
		}
		if (i <= j)
		{
			temp = soLanBay[i];
			soLanBay[i] = soLanBay[j];
			soLanBay[j] = temp;

			i++;
			j--;
		}
	} while (i <= j);

	if (left < j)
	{
		quickSortThongKeLuot(soLanBay, left, j);
	}

	if (i < right)
	{
		quickSortThongKeLuot(soLanBay, i, right);
	}
}

void Cau7ThongKeSoLuot(PTRChuyenBay listCB, ListMayBay dsMB) {
	Normal();
	system("cls");
	MayBay *soLanBay = new MayBay[dsMB.n];
	int k = 0;
	for (int i = 0; i < dsMB.n; i++)
	{
		for (PTRChuyenBay p = listCB; p != NULL; p = p->next)
		{
			if (stricmp(dsMB.MB[i]->soHieuMayBay, p->data.soHieuMayBay) == 0 && p->data.trangThai == HOANTAT)
			{
				soLanBay[k].soLuot++;
			}
		}
		soLanBay[k].soLuot = i;
		k++;
	}
	
	quickSortThongKeLuot(soLanBay, 0, dsMB.n - 1);
	
	Normal();
	xoaKhung();
	veKhungXuat(THONGKE, DONGVITRI_Y - DONGVITRI_X, COT_R - COT_L, 5, 25, 70);
	
	int j = 0;
	for (int i = 0; i < dsMB.n; i++) {
		gotoxy(COT_L + 1, DONGVITRI_X + 3 + i);
		cout << i + 1;
		gotoxy(COT_L + 6, DONGVITRI_X + 3 + i);
		cout << dsMB.MB[soLanBay[j].soLuot]->soHieuMayBay;
		gotoxy(COT_L + 26, DONGVITRI_X + 3 + i);
		cout << dsMB.MB[soLanBay[j].soLuot]->loaiMayBay;
		gotoxy(COT_L + 71, DONGVITRI_X + 3 + i);
		cout << soLanBay[j].soLuot;
		j++;
	}
	char key;
	do
	{
		key = getch();
		if (key == ESC)
			return;
	} while (true);
}

//===============================================chuyen bay===================================================//
void themMoiChuyenBay(PTRChuyenBay& dsCB, ChuyenBay cb) {
	PTRChuyenBay p, t, s;
	p = new NodeChuyenBay;
	p->data = cb;
	t = new NodeChuyenBay;
	for (s = dsCB; s != NULL && stricmp(s->data.maChuyenBay, cb.maChuyenBay) < 0; t = s, s = s->next);
	if (s == dsCB) {
		p->next = dsCB;
		dsCB = p;
	}
	else {
		p->next = s;
		t->next = p;
	}
}

int insertNodeChuyenBay(PTRChuyenBay& dsCB, ChuyenBay cb) {
	PTRChuyenBay p = new NodeChuyenBay;
	p->data = cb;
	p->next = NULL;
	if (dsCB == NULL)
		dsCB = p;
	else {
		PTRChuyenBay last;
		for (last = dsCB; last->next != NULL; last = last->next);
		last->next = p;
	}
	return 1;
}

ChuyenBay taoChuyenBay(PTRChuyenBay dsCB, ListMayBay dsMB) {
	veKhungThongTin(UI_THEMCHUYENBAY, "THEM CHUYEN BAY", "Ma chuyen bay:", "So hieu may bay:", "San bay den:", "Ngay khoi hanh:", "Gio khoi hanh:");
	ChuyenBay cb;
	PTRChuyenBay p;

	do
	{
		strcpy(cb.maChuyenBay, kiemtraNhapChuoi(true, input1));
		p = timKiemMaChuyenBay(dsCB, cb.maChuyenBay);
		if (p != NULL) {
			thongbao_Highlight();
			hienThiThongBao("MA CHUYEN BAY DA TON TAI!");
		}
		else {
			if (cb.maChuyenBay[0] == ESC) {
				return cb;
			}
			else break;
		}
	} while (true);

ChonMayBay:
	MayBay chonMB;
	do
	{
		// chon may bay tren giao dien
		chonMB = ChonMB_toChuyenBay(dsMB);
		strcpy(cb.soHieuMayBay, chonMB.soHieuMayBay);
		// tim may bay bang cach nhap
		if (chonMB.soHieuMayBay[0] == '\0') {
			strcpy(cb.soHieuMayBay, kiemtraNhapChuoi(true, input2));
			if (cb.soHieuMayBay[0] == ESC) {
				cb.maChuyenBay[0] = ESC;
				return cb;
			}
			int tontai = timkiemMayBay(dsMB, cb.soHieuMayBay);
			if (tontai == -1) {
				thongbao_Highlight();
				hienThiThongBao("KHONG CO MAY BAY NAY!");
				continue;
			}
			else
				break;

		}
		else {
			gotoxy(COT + 1, input2 + 2);
			cout << cb.soHieuMayBay;
			break;
		}

	} while (true);

	do
	{
		strcpy(cb.sanBayDen, kiemtraNhapChuoi(false, input3));
		if (cb.sanBayDen[0] == ESC) {
			cb.maChuyenBay[0] = ESC;
			return cb;
		}
		else
			break;
	} while (true);

	do
	{

		cb.tgianKhoiHanh = kiemtraNgayNhap(cb.tgianKhoiHanh, input4);

		if (cb.tgianKhoiHanh.ngay == -1 || cb.tgianKhoiHanh.thang == -1 || cb.tgianKhoiHanh.nam == -1) {
			cb.maChuyenBay[0] = ESC;
			return cb;
		}
		if (batLoiNhapThoiGian(cb.tgianKhoiHanh) == -1)
		{
			break;
		}
		else
		{
			gotoxy(COT + 1, input4 + 2);
			cout << "  ";
			gotoxy(COT + KHUNG_M + 1, input4 + 2);
			cout << "  ";
			gotoxy(COT + KHUNG_M * 2 + 1, input4 + 2);
			cout << "    ";
		}
	} while (true);

	do
	{
		cb.tgianKhoiHanh = kiemtraThoiGianNhap(cb.tgianKhoiHanh, input5);
		if (cb.tgianKhoiHanh.gio == -1 || cb.tgianKhoiHanh.phut == -1) {
			cb.maChuyenBay[0] = ESC;
			return cb;
		}
		if (batLoiNhapGio(cb.tgianKhoiHanh) == -1)
		{
			break;
		}
		else
		{
			gotoxy(COT + 1, input5 + 2);
			cout << "  ";
			gotoxy(COT + KHUNG_M + 1, input5 + 2);
			cout << "  ";
		}
	} while (true);
	// xet gio lap chuyen bay 
	if (kiemtraTG_ChuyenBay(cb, dsCB)) {
		thongbao_Highlight();
		hienThiThongBao("MAY BAY NAY SE CAT CANH SAU 2 TIENG");
		goto ChonMayBay;
	}
	cb.soluongVe = chonMB.soCho;
	cb.listVe = new string[cb.soluongVe];
	for (int i = 0; i < cb.soluongVe; i++)
	{
		cb.listVe[i] = "";
	}
	cb.trangThai = CONVE;

	return cb;
}

int xoaChuyenBay(PTRChuyenBay& dsCB, char ma[]) {
	PTRChuyenBay p = dsCB;
	if (emptyChuyenBay(dsCB))
		return 0;
	//xoa truoc delete first
	if (stricmp(dsCB->data.maChuyenBay, ma) == 0) {
		p = dsCB;
		p = p->next;
		delete p;
		return 1;
	}
	//xoa sau delete after
	else {
		for (p = p; p->next != NULL && stricmp(p->next->data.maChuyenBay, ma) != 0; p = p->next);
		if (p->next != NULL) {
			PTRChuyenBay q = p->next;
			p->next = q->next;
			delete q;
			return 1;
		}
		else return 0;
	}

}
//=====================Doc ghi file============
int docFileMayBay(ListMayBay& dsMB) {
	fstream inFile;
	inFile.open("dsmb.txt", ios::in);
	string temp;
	if (inFile.is_open()) {
		while (!inFile.eof()) {
			dsMB.MB[dsMB.n] = new MayBay;
			getline(inFile, temp);
			inFile.getline(dsMB.MB[dsMB.n]->soHieuMayBay, 20);
			inFile.getline(dsMB.MB[dsMB.n]->loaiMayBay, 45);
			inFile >> dsMB.MB[dsMB.n]->soCho;
			dsMB.n++;
		}
	}
	else {
		return 0;
	}
	inFile.close();
	return 1;
}

int ghiFileMayBay(ListMayBay dsMB) {
	fstream outFile;
	outFile.open("dsmb.txt", ios::out);
	int i = 0;
	if (outFile.is_open()) {
		while (i < dsMB.n) {
			outFile << endl << dsMB.MB[i]->soHieuMayBay;
			outFile << endl << dsMB.MB[i]->loaiMayBay;
			outFile << endl << dsMB.MB[i]->soCho;
			i++;
		}
	}
	else {
		return 0;
	}
	outFile.close();
	return 1;
}

int docFileChuyenBay(PTRChuyenBay& dsCB, ListMayBay dsMB) {

	fstream inFile;
	inFile.open("dscb.txt", ios::in);
	string temp;
	string temp1 = "";
	string ve;
	int slCB;
	if (inFile.is_open()) {
		while (!inFile.eof()) {
			getline(inFile, temp);
			if (temp == "") {
				ChuyenBay cb;
				inFile.getline(cb.maChuyenBay, 20);
				inFile.getline(cb.soHieuMayBay, 20);
				inFile.getline(cb.sanBayDen, 50);
				inFile >> cb.tgianKhoiHanh.ngay;
				inFile >> cb.tgianKhoiHanh.thang;
				inFile >> cb.tgianKhoiHanh.nam;
				inFile >> cb.tgianKhoiHanh.gio;
				inFile >> cb.tgianKhoiHanh.phut;
				inFile >> cb.trangThai;
				inFile >> cb.soluongVe;
				cb.listVe = new string[cb.soluongVe];
				for (int i = 0; i < cb.soluongVe; i++) {
					cb.listVe[i] = "";
				}

				getline(inFile, temp1);
				getline(inFile, temp1);
				while (temp1 != "") {

					int vitri = 0;
					char cmnd[21] = "";

					tachChuoiNhap(temp1, '-', vitri, cmnd);
					cb.listVe[vitri] = cmnd;

					getline(inFile, temp1);
				}
				insertNodeChuyenBay(dsCB, cb);
			}
		}
	}
	else {
		return 0;
	}

	inFile.close();
	return 1;
}

int ghiFileChuyenBay(PTRChuyenBay dsCB) {
	ChuyenBay cb;
	fstream outFile;
	outFile.open("dscb.txt", ios::out);

	if (outFile.is_open()) {
		for (PTRChuyenBay p = dsCB; p != NULL; p = p->next) {
			outFile << endl << p->data.maChuyenBay;
			outFile << endl << p->data.soHieuMayBay;
			outFile << endl << p->data.sanBayDen;
			outFile << endl << p->data.tgianKhoiHanh.ngay;
			outFile << endl << p->data.tgianKhoiHanh.thang;
			outFile << endl << p->data.tgianKhoiHanh.nam;
			outFile << endl << p->data.tgianKhoiHanh.gio;
			outFile << endl << p->data.tgianKhoiHanh.phut;
			outFile << endl << p->data.trangThai;
			outFile << endl << p->data.soluongVe;
				
			
			for (int i = 0; i < p->data.soluongVe; i++) {
				if (p->data.listVe[i] != "")
					outFile << endl<< i << "-" << p->data.listVe[i];
			}
			if (p->next == NULL)
				outFile << endl;
			if (p->next != NULL) {
				outFile << endl;
				outFile << endl;
			}

		}
	}
	else
		return 0;
	outFile.close();
	return 1;
}

void duyetCay(NODEPTR_TreeHK dsHK, fstream& file) {
	if (dsHK != NULL) {
		file << endl << dsHK->data.CMND;
		file << endl << dsHK->data.ho;
		file << endl << dsHK->data.ten;
		if (dsHK->data.phai == NAM)
			file << endl << "Nam";
		else if (dsHK->data.phai == NU)
			file << endl << "Nu";
		file << endl;
		//Dung de qui tim het nut
		duyetCay(dsHK->left, file);
		duyetCay(dsHK->right, file);
	}
}

int docFileHanhKhach(NODEPTR_TreeHK& dsHK) {
	fstream inFile;
	inFile.open("dshk.txt", ios::in);
	HanhKhach hKhach;
	string temp;
	char phai[4];
	if (!inFile.fail()) {
		while (!inFile.eof())
		{
			getline(inFile, temp);
			inFile.getline(hKhach.CMND, 21);
			inFile.getline(hKhach.ho, 31);
			inFile.getline(hKhach.ten, 11);
			inFile.getline(phai, 4);
			if (stricmp(phai, "Nam") == 0) {
				hKhach.phai = NAM;
			}
			else if (stricmp(phai, "Nu") == 0) {
				hKhach.phai = NU;
			}
			themNodeHanhKhach(dsHK, hKhach);
		}
	}
	else {
		return 0;
	}
	inFile.close();
	return 1;
}

int ghiFileHK(NODEPTR_TreeHK dsHK) {
	fstream outFile;
	outFile.open("dshk.txt", ios::out);
	if (!outFile.fail()) {
		duyetCay(dsHK, outFile);
	}
	else
		return 0;
	outFile.close();
	return 1;
}
//=======================================chuyen bay========================================//

void khoiTaoChuyenBay(PTRChuyenBay& dsCB) {
	dsCB = NULL;
}

PTRChuyenBay timKiemMaChuyenBay(PTRChuyenBay dsCB, char ma[]) {
	PTRChuyenBay p;
	for (p = dsCB; p != NULL; p = p->next) {
		if (stricmp(p->data.maChuyenBay, ma) == 0)
			return p;
	}
	return NULL;
}

void hienThiDS_ChuyenBay(PTRChuyenBay dsCB) {
	veKhungXuat(XUATCHUYENBAY, DONGVITRI_Y - DONGVITRI_X, COT_R - COT_L, 5, 25, 45, 80, 100);

	int i = 0;
	for (PTRChuyenBay p = dsCB; p != NULL; p = p->next) {
		gotoxy(COT_L + 1, DONGVITRI_X + 3 + i);
		cout << i + 1;
		gotoxy(COT_L + 6, DONGVITRI_X + 3 + i);
		cout << p->data.maChuyenBay;
		gotoxy(COT_L + 26, DONGVITRI_X + 3 + i);
		cout << p->data.soHieuMayBay;
		gotoxy(COT_L + 46, DONGVITRI_X + 3 + i);
		cout << p->data.sanBayDen;
		gotoxy(COT_L + 81, DONGVITRI_X + 3 + i);
		cout << p->data.tgianKhoiHanh.ngay << "/" << p->data.tgianKhoiHanh.thang << "/" << p->data.tgianKhoiHanh.nam
			<< " " << p->data.tgianKhoiHanh.gio << ":" << p->data.tgianKhoiHanh.phut;
		gotoxy(COT_L + 101, DONGVITRI_X + 3 + i);
		if (p->data.trangThai == 0)
			cout << "Da huy";
		else if (p->data.trangThai == 1)
			cout << "Con ve";
		else if (p->data.trangThai == 2)
			cout << "Het ve";
		else if (p->data.trangThai == 3)
			cout << "Hoan tat";
		i++;
		if (i == MAXTRANG)
			break;
	}

}
int emptyChuyenBay(PTRChuyenBay dsCB) {
	return (dsCB == NULL);
}

PTRChuyenBay chonSuaChuyenBay(PTRChuyenBay dsCB, ListMayBay dsMB, int& chonCB) {

	Normal();
	khungGiaoDien();
	hienThiHuongDan(1);
	int chon = 0;
	int page = MAXTRANG - 1;
	int dem = 0;
	hienThiDS_ChuyenBay(dsCB);

	ChuyenBay* tmpCB[300];
	int i = 0;
	chuyenMang(dsCB, tmpCB, i, dsMB, 0);

	PTRChuyenBay q = new NodeChuyenBay;
	Highlight();
	char tmp[20];
	char kytu;
	do
	{
		kytu = getch();
		if (kytu == -32)
			kytu = getch();
		if (kytu == 0)
			kytu = getch();
		switch (kytu)
		{
		case UP:
			if (chon > 0 && dem > 0) {
				Normal();
				hienThiChuyenBay(tmpCB[chon], dem);

				chon--;
				dem--;
				Highlight();
				hienThiChuyenBay(tmpCB[chon], dem);
			}
			break;
		case DOWN:
			if (chon + 1 < i && dem + 1 < MAXTRANG) {
				Normal();
				hienThiChuyenBay(tmpCB[chon], dem);

				chon++;
				dem++;
				Highlight();
				hienThiChuyenBay(tmpCB[chon], dem);
			}
			break;
		case PAGEUP:
			if (page > MAXTRANG) {
				Normal();
				page -= MAXTRANG * 2;
				chon = page;
				dem = 0;
				xoaThongTin(XOACHUYENBAY_L);
				for (page; page < i; page++) {
					hienThiChuyenBay(tmpCB[page], dem);
					if (dem == MAXTRANG - 1) {
						break;
					}
					dem++;
				}
				dem = 0;
				Highlight();
				hienThiChuyenBay(tmpCB[chon], dem);
			}
			break;
		case PAGEDOWN:
			if (page < i) {
				Normal();
				xoaThongTin(XOACHUYENBAY_L);
				page++;
				chon = page;
				dem = 0;
				for (page; page < i; page++) {
					hienThiChuyenBay(tmpCB[page], dem);
					if (dem == MAXTRANG - 1) {
						break;
					}
					dem++;
				}
				page += MAXTRANG - dem;
				dem = 0;
				Highlight();
				hienThiChuyenBay(tmpCB[chon], dem);
			}
			break;
		case INSERT:
			chonCB = THEMCHUYENBAY;
			tmp[0] = '\0';
			strcpy(q->data.maChuyenBay, tmp);
			return q;
		case HOME:
		{
			tmp[0] = '\0';
			do
			{
				strcpy(tmp, UI_TimMa(0, "TIM CHUYEN BAY"));
				q = timKiemChuyenBay(dsCB, tmp);
				if (q == NULL) {
					thongbao_Highlight();
					hienThiThongBao("KHONG TIM THAY CHUYEN BAY!");
				}
				else break;
			} while (true);
			chonCB = isXacNhan("SUA CHUYEN BAY", "HUY CHUYEN BAY", true);
			if (chonCB == CANCEL)
				break;
			Normal();
			return q;
		}
		case DELETE:
		{
			q = timKiemChuyenBay(dsCB, tmpCB[chon]->maChuyenBay);
			if (q != NULL) {
				int chon = isXacNhan("CO", "KHONG", false);
				if (chon == YES) {
					chonCB = XOACHUYENBAY;
					Normal();
					return q;
				}
				else
					break;
			}
		}
		case ESC:
		{
			Normal();
			chonCB = soDongChuyenBay;
			return NULL;
		}

		case ENTER:
			chonCB = isXacNhan("SUA", "HUY CHUYEN", true);
			if (chonCB == CANCEL) {
				Normal();
				break;
			}

			q = timKiemChuyenBay(dsCB, tmpCB[chon]->maChuyenBay);
			Normal();
			return q;
		}
	} while (true);
}

void Cau2ChuyenBay(PTRChuyenBay& dsCB, ListMayBay& dsMB) {
	int chonCB;
	int exit2 = 1;
	Normal();
	system("cls");
	PTRChuyenBay p = dsCB;
	while (exit2)
	{
		chonCB = THEMCHUYENBAY;
		if (!emptyChuyenBay(dsCB))
			p = chonSuaChuyenBay(dsCB, dsMB, chonCB);
		switch (chonCB)
		{
		case THEMCHUYENBAY:
		{
			ChuyenBay cb;
			cb = taoChuyenBay(dsCB, dsMB);
			if (cb.maChuyenBay[0] != ESC) {
				themMoiChuyenBay(dsCB, cb);
				hienThiThongBao("THEM THANH CONG!");
				int save = ghiFileChuyenBay(dsCB);
			}
			else {
				suadoi_Highlight();
				hienThiThongBao("DA HUY THANH CONG!");
			}
			Normal();
			system("cls");

			break;
		}
		case SUACHUYENBAY:
		{
			if (kiemtraTrangThai(p->data)) {
				Normal();
				system("cls");
				break;
			}
			int fix = suaChuyenBay(dsCB, p, dsMB);

			if (fix == 1)
			{
				suadoi_Highlight();
				hienThiThongBao("SUA THANH CONG!");
				int save = ghiFileChuyenBay(dsCB);
			}
			else if(fix == -1)
			{
				thongbao_Highlight();
				hienThiThongBao("DA CO HANH KHACH DAT VE!");
			}
			else {
				suadoi_Highlight();
				hienThiThongBao("DA HUY THANH CONG!");
			}
			Normal();
			system("cls");
			break;
		}
		case XOACHUYENBAY:
		{
		//kiem tra trang thai de xoa chuyen bay
			if (kiemtraTrangThai(p->data)) {
				Normal();
				system("cls");
				break;
			}
			if (demSoLuongVe(p->data.listVe, p->data.soluongVe) != 0) {
				int huy = huyChuyenBay(dsCB, p);
				if (huy) {
					int save = ghiFileChuyenBay(dsCB);
					suadoi_Highlight();
					hienThiThongBao("DA HUY CHUYEN BAY THANH CONG!");
				}
				Normal();
				system("cls");
				break;
			}
			int xoa = xoaChuyenBay(dsCB, p->data.maChuyenBay);
			if (xoa == 1) {
				suadoi_Highlight();
				hienThiThongBao("XOA THANH CONG!");
				int save = ghiFileChuyenBay(dsCB);
			}
			else {
				thongbao_Highlight();
				hienThiThongBao("XOA THAT BAI!");
			}
			Normal();
			system("cls");
			break;
		}
		case HUYCHUYENBAY:
		{
			int huy = huyChuyenBay(dsCB, p);
			if (huy) {
				int save = ghiFileChuyenBay(dsCB);
				suadoi_Highlight();
				hienThiThongBao("Huy chuyen thanh cong!");
			}
			else {
				thongbao_Highlight();
				hienThiThongBao("KHONG THE HUY CHUYEN BAY NAY!");
			}
			Normal();
			system("cls");
			break;
		}
		case soDongChuyenBay:
		{
			exit2 = 0;
			break;
		}
		}
	}
}

int suaChuyenBay(PTRChuyenBay& dsCB, PTRChuyenBay p, ListMayBay dsMB) {
	veKhungThongTin(UI_THEMCHUYENBAY, "SUA CHUYEN BAY", "Ma chuyen bay:", "So hieu may bay:", "San bay den:", "Ngay khoi hanh:", "Gio khoi hanh:");
	ChuyenBay cb;
	if (p == NULL)
	{
		return 0;
	}
	if (kiemtraVeDaMua(p->data.listVe, p->data.soluongVe)) {
		return -1;
	}
	MayBay mbCu = getMB(dsMB, p->data.soHieuMayBay);
	gotoxy(COT + 1, input1 + 2);

	rewind(stdin);
	cout << p->data.maChuyenBay;
	strcpy(cb.maChuyenBay, p->data.maChuyenBay);
	gotoxy(COT + 1, input3 + 2);
	cout << p->data.sanBayDen;
	strcpy(cb.sanBayDen, p->data.sanBayDen);
	cb.trangThai = p->data.trangThai;

	do {
		do
		{
			MayBay chonMB;
			if (cb.soHieuMayBay[0] == ESC) {
					cb.maChuyenBay[0] = ESC;
					return 0;
				}
			chonMB = ChonMB_toChuyenBay(dsMB);
			strcpy(cb.soHieuMayBay, chonMB.soHieuMayBay);
			
			//home de tim kiem may bay
			if (chonMB.soHieuMayBay[0] == '\0') {
				strcpy(cb.soHieuMayBay, kiemtraNhapChuoi(true, input2));
				chonMB = getMB(dsMB, cb.soHieuMayBay);
			 if (chonMB.soHieuMayBay[0] == '\0') {
					thongbao_Highlight();
					hienThiThongBao("KHONG TIM THAY MAY BAY!");
					continue;
				}
				else {
					if (!kiemtraThemSoCho(mbCu, chonMB)) {
						cb.soluongVe = chonMB.soCho;
						cb.listVe = new string[cb.soluongVe];
						for (int i = 0; i < cb.soluongVe; i++) {
							cb.listVe[i] = "";
						}
						break;
					}

				}

			}
			else {
				if (!kiemtraThemSoCho(mbCu, chonMB)) {
					gotoxy(COT + 1, input2 + 2);
					cout << cb.soHieuMayBay;
					cb.soluongVe = chonMB.soCho;
					cb.listVe = new string[cb.soluongVe];
					for (int i = 0; i < cb.soluongVe; i++) {
						cb.listVe[i] = "";
					}
					break;
				}
			}

		} while (true);

		if (!kiemtraVeDaMua(p->data.listVe, p->data.soluongVe)) {
			do
			{
				strcpy(cb.sanBayDen, kiemtraNhapChuoi(false, input3));
				if (cb.sanBayDen[0] == ESC) {
					return 0;
				}
				else
					break;
			} while (true);
		}

		do
		{
			cb.tgianKhoiHanh = kiemtraNgayNhap(cb.tgianKhoiHanh, input4);
			if (cb.tgianKhoiHanh.ngay == -1 || cb.tgianKhoiHanh.thang == -1 || cb.tgianKhoiHanh.nam == -1) {

				return 0;
			}
			if (batLoiNhapThoiGian(cb.tgianKhoiHanh) == -1)
			{
				break;
			}
			else
			{
				gotoxy(COT + 1, input4 + 2);
				cout << "  ";
				gotoxy(COT + KHUNG_M + 1, input4 + 2);
				cout << "  ";
				gotoxy(COT + KHUNG_M * 2 + 1, input4 + 2);
				cout << "    ";
			}
		} while (true);

		do
		{
			cb.tgianKhoiHanh = kiemtraThoiGianNhap(cb.tgianKhoiHanh, input5);
			if (cb.tgianKhoiHanh.gio == -1 || cb.tgianKhoiHanh.phut == -1) {

				return 0;
			}
			if (batLoiNhapGio(cb.tgianKhoiHanh) == -1)
			{
				break;
			}
			else
			{
				gotoxy(COT + 1, input5 + 2);
				cout << "  ";
				gotoxy(COT + KHUNG_M + 1, input5 + 2);
				cout << "  ";
			}
		} while (true);

		if (kiemtraTG_ChuyenBay(cb, dsCB)) {
			thongbao_Highlight();
			hienThiThongBao("MAY BAY NAY SE CAT CANH SAU 2 TIENG !");

		}
		else break;
	} while (true);

	p->data = cb;

	return 1;
}


int huyChuyenBay(PTRChuyenBay& dsCB, PTRChuyenBay p) {

	if (emptyChuyenBay(dsCB))
		return 0;
	else {
		if (p->data.trangThai == HOANTAT
			|| p->data.trangThai == HUYCHUYEN) {
			return 0;
		}
		else {
			p->data.trangThai = HUYCHUYEN;
			return 1;
		}
	}
}

PTRChuyenBay ChonChuyenBay_DatHuyVe(PTRChuyenBay dsCB, int& chonCB, ListMayBay dsMB) {

	Normal();
	khungGiaoDien();
	hienThiHuongDan(DATVE);
	int chon = 0;
	int page = MAXTRANG - 1;
	int dem = 0;
	hienThiChuyenBay_DatVe(dsCB);
	ChuyenBay* tmpCB[300];
	int i = 0; // so phan tu mang tam
	chuyenMang(dsCB, tmpCB, i, dsMB, CONVE);
	PTRChuyenBay q = new NodeChuyenBay;

	char tmp[20];
	char kytu;
	do
	{
		kytu = getch();
		if (kytu == -32)
			kytu = getch();
		if (kytu == 0)
			kytu = getch();
		switch (kytu)
		{
		case UP:
			if (chon > 0 && dem > 0) {
				Normal();
				hienThi1ChuyenBay_DatVe(tmpCB[chon], dem);

				chon--;
				dem--;
				Highlight();
				hienThi1ChuyenBay_DatVe(tmpCB[chon], dem);
			}
			break;
		case DOWN:
			if (chon + 1 < i && dem + 1 < MAXTRANG) {
				Normal();
				hienThi1ChuyenBay_DatVe(tmpCB[chon], dem);

				chon++;
				dem++;
				Highlight();
				hienThi1ChuyenBay_DatVe(tmpCB[chon], dem);
			}
			break;
		case PAGEUP:
		{
			if (page > MAXTRANG) {
				Normal();
				page -= MAXTRANG * 2;
				chon = page;
				dem = 0;
				xoaThongTin(XOACHUYENBAY_L);
				for (page; page < i; page++) {
					hienThiChuyenBay(tmpCB[page], dem);
					if (dem == MAXTRANG - 1) {
						break;
					}
					dem++;
				}
				dem = 0;
				Highlight();
				hienThiChuyenBay(tmpCB[chon], dem);
			}
			break;
		}
		case PAGEDOWN:
		{
			if (page < i) {
				Normal();
				xoaThongTin(XOACHUYENBAY_L);
				page++;
				chon = page;
				dem = 0;
				for (page; page < i; page++) {
					hienThiChuyenBay(tmpCB[page], dem);
					if (dem == MAXTRANG - 1) {
						break;
					}
					dem++;
				}
				page += MAXTRANG - dem;
				dem = 0;
				Highlight();
				hienThiChuyenBay(tmpCB[chon], dem);
			}
			break;
		}
		case HOME:
		{
			tmp[0] = '\0';
			do
			{
				strcpy(tmp, UI_TimMa(TIMKIEMMA, "TIM CHUYEN BAY"));
				if (tmp[0] == ESC) {
					return NULL;
				}
				q = timKiemChuyenBay(dsCB, tmp);
				if (q == NULL) {
					thongbao_Highlight();
					hienThiThongBao("KHONG TIM THAY CHUYEN BAY NAY!");
				}
				else break;
			} while (true);
			chonCB = isXacNhan("DAT VE", "TRO VE", false);
			if (chonCB == CANCEL)
				break;
			Normal();
			return q;
		}
		case ESC:
		{
			Normal();
			chonCB = soDongChuyenBay;
			return NULL;
		}

		case ENTER:
		{
			Normal();
			int luachon = isXacNhan("DAT VE", "HUY VE", false);
			if (luachon == YES)
				chonCB = DATVE;
			else if (luachon == NO)
				chonCB = HUYVE;
			else if (luachon == CANCEL)
				break;
			q = timKiemChuyenBay(dsCB, tmpCB[chon]->maChuyenBay);
			Normal();
			return q;
		}
		}
	} while (true);
}

void hienThiChuyenBay(ChuyenBay* cb, int chon) {

	gotoxy(COT_L + 1, DONGVITRI_X + 3 + chon);
	cout << "                                                                                                                 ";
	gotoxy(COT_L + 1, DONGVITRI_X + 3 + chon);
	cout << chon + 1;
	gotoxy(COT_L + 5, DONGVITRI_X + 3 + chon);
	cout << char(DOC);
	gotoxy(COT_L + 6, DONGVITRI_X + 3 + chon);
	cout << cb->maChuyenBay;
	gotoxy(COT_L + 25, DONGVITRI_X + 3 + chon);
	cout << char(DOC);
	gotoxy(COT_L + 26, DONGVITRI_X + 3 + chon);
	cout << cb->soHieuMayBay;
	gotoxy(COT_L + 45, DONGVITRI_X + 3 + chon);
	cout << char(DOC);
	gotoxy(COT_L + 46, DONGVITRI_X + 3 + chon);
	cout << cb->sanBayDen;
	gotoxy(COT_L + 80, DONGVITRI_X + 3 + chon);
	cout << char(DOC);
	gotoxy(COT_L + 81, DONGVITRI_X + 3 + chon);
	cout << cb->tgianKhoiHanh.ngay << "/" << cb->tgianKhoiHanh.thang << "/" << cb->tgianKhoiHanh.nam
		<< " " << cb->tgianKhoiHanh.gio << ":" << cb->tgianKhoiHanh.phut;
	gotoxy(COT_L + 100, DONGVITRI_X + 3 + chon);
	cout << char(DOC);
	gotoxy(COT_L + 101, DONGVITRI_X + 3 + chon);
	if (cb->trangThai == 0)
		cout << "Da huy";
	else if (cb->trangThai == 1)
		cout << "Con ve";
	else if (cb->trangThai == 2)
		cout << "Het ve";
	else if (cb->trangThai == 3)
		cout << "Hoan tat";
}

PTRChuyenBay timKiemChuyenBay(PTRChuyenBay dsCB, char ma[]) {
	PTRChuyenBay p;
	for (p = dsCB; p != NULL; p = p->next) {
		if (stricmp(p->data.maChuyenBay, ma) == 0)
			return p;
	}
	return NULL;

}

//=====================================ve may bay=================================================//
int demSoLuongVe(string listVe[], int soluongVe) {
	int dem = 0;
	for (int i = 0; i < soluongVe; i++) {
		if (listVe[i] != "")
			dem++;
	}
	return dem;
}

void hienThiChuyenBay_DatVe(PTRChuyenBay dsCB) {
	veKhungXuat(XUATCHUYENBAY, DONGVITRI_Y - DONGVITRI_X, COT_R - COT_L, 5, 25, 45, 80, 100);

	int i = 0;
	for (PTRChuyenBay p = dsCB; p != NULL; p = p->next) {
		if (p->data.trangThai == CONVE) {
			gotoxy(COT_L + 1, DONGVITRI_X + 3 + i);
			cout << i + 1;
			gotoxy(COT_L + 6, DONGVITRI_X + 3 + i);
			cout << p->data.maChuyenBay;
			gotoxy(COT_L + 26, DONGVITRI_X + 3 + i);
			cout << p->data.soHieuMayBay;
			gotoxy(COT_L + 46, DONGVITRI_X + 3 + i);
			cout << p->data.sanBayDen;
			gotoxy(COT_L + 81, DONGVITRI_X + 3 + i);
			cout << p->data.tgianKhoiHanh.ngay << "/" << p->data.tgianKhoiHanh.thang << "/" << p->data.tgianKhoiHanh.nam
				<< " " << p->data.tgianKhoiHanh.gio << ":" << p->data.tgianKhoiHanh.phut;

			int veTrong = p->data.soluongVe - demSoLuongVe(p->data.listVe, p->data.soluongVe);
			gotoxy(COT_L + 101, DONGVITRI_X + 3 + i);
			cout << "Con " << veTrong << " ve";
			i++;
		}

	}

}

int taoDanhSachVe(MayBay mb, string *lstVe) {
	lstVe = new string[mb.soCho];
	for (int i = 0; i < mb.soCho; i++) {
		lstVe[i] = "";
	}
	return 1;
}

void chuyenMang(PTRChuyenBay dsCB, ChuyenBay* cb[], int& n, ListMayBay dsMB, int trangThai) {
	PTRChuyenBay p = dsCB;
	if (trangThai == 0) {
		for (p; p != NULL; p = p->next) {
			cb[n] = new ChuyenBay;
			strcpy(cb[n]->maChuyenBay, p->data.maChuyenBay);
			strcpy(cb[n]->soHieuMayBay, p->data.soHieuMayBay);
			strcpy(cb[n]->sanBayDen, p->data.sanBayDen);
			cb[n]->tgianKhoiHanh.ngay = p->data.tgianKhoiHanh.ngay;
			cb[n]->tgianKhoiHanh.thang = p->data.tgianKhoiHanh.thang;
			cb[n]->tgianKhoiHanh.nam = p->data.tgianKhoiHanh.nam;
			cb[n]->tgianKhoiHanh.gio = p->data.tgianKhoiHanh.gio;
			cb[n]->tgianKhoiHanh.phut = p->data.tgianKhoiHanh.phut;
			cb[n]->trangThai = p->data.trangThai;
			cb[n]->listVe = p->data.listVe;
			cb[n]->soluongVe = p->data.soluongVe;
			for (int k = 0; k < cb[n]->soluongVe; k++) {
				if (p->data.listVe[k] != "") {
					cb[n]->listVe[k] = p->data.listVe[k];
				}

			}

			n++;
		}
	}
	else if (trangThai == CONVE) {
		for (p; p != NULL; p = p->next) {
			if (p->data.trangThai == CONVE) {
				cb[n] = new ChuyenBay;
				strcpy(cb[n]->maChuyenBay, p->data.maChuyenBay);
				strcpy(cb[n]->soHieuMayBay, p->data.soHieuMayBay);
				strcpy(cb[n]->sanBayDen, p->data.sanBayDen);
				cb[n]->tgianKhoiHanh.ngay = p->data.tgianKhoiHanh.ngay;
				cb[n]->tgianKhoiHanh.thang = p->data.tgianKhoiHanh.thang;
				cb[n]->tgianKhoiHanh.nam = p->data.tgianKhoiHanh.nam;
				cb[n]->tgianKhoiHanh.gio = p->data.tgianKhoiHanh.gio;
			 	cb[n]->tgianKhoiHanh.phut = p->data.tgianKhoiHanh.phut;
				cb[n]->trangThai = p->data.trangThai;
				cb[n]->listVe = p->data.listVe;
				cb[n]->soluongVe = p->data.soluongVe;
				for (int k = 0; k < cb[n]->soluongVe; k++) {
					if (p->data.listVe[k] == "") {
						cb[n]->listVe[k] = p->data.listVe[k];
					}
				}
				n++;
			}
		}
	}
}
void hienThiSanBayConVe(ChuyenBay* p, int chon) {
veKhungXuat(TIMKIEMCB_NGAY, DONGVITRI_Y - DONGVITRI_X, COT_R - COT_L, 5, 25, 45, 80, 100);

	gotoxy(COT_L + 1, DONGVITRI_X + 3 + chon);
	cout << chon + 1;
	gotoxy(COT_L + 6, DONGVITRI_X + 3 + chon);
	cout << p->maChuyenBay;
	gotoxy(COT_L + 26, DONGVITRI_X + 3 + chon);
	cout << p->soHieuMayBay;
	gotoxy(COT_L + 46, DONGVITRI_X + 3 + chon);
	cout << p->sanBayDen;
	gotoxy(COT_L + 81, DONGVITRI_X + 3 + chon);
	cout << p->tgianKhoiHanh.ngay << "/" << p->tgianKhoiHanh.thang << "/" << p->tgianKhoiHanh.nam
		<< " " << p->tgianKhoiHanh.gio << ":" << p->tgianKhoiHanh.phut;
		
	int veTrong = p->soluongVe - demSoLuongVe(p->listVe, p->soluongVe);
	gotoxy(COT_L + 101, DONGVITRI_X + 3 + chon);
	cout << "Con " << veTrong << " ve";
	}
void hienThiCB_ConVe(ChuyenBay* p, int &i) {
	veKhungXuat(TIMKIEMCB_NGAY, DONGVITRI_Y - DONGVITRI_X, COT_R - COT_L, 5, 25, 45, 80, 100);

	gotoxy(COT_L + 1, DONGVITRI_X + 3+ i);
	cout << i + 1;
	gotoxy(COT_L + 6, DONGVITRI_X + 3+ i);
	cout << p->maChuyenBay;
	gotoxy(COT_L + 26, DONGVITRI_X + 3+ i);
	cout << p->soHieuMayBay;
	gotoxy(COT_L + 46, DONGVITRI_X + 3+ i);
	cout << p->sanBayDen;
	gotoxy(COT_L + 81, DONGVITRI_X + 3+ i);
	cout << p->tgianKhoiHanh.ngay << "/" << p->tgianKhoiHanh.thang << "/" << p->tgianKhoiHanh.nam
		<< " " << p->tgianKhoiHanh.gio << ":" << p->tgianKhoiHanh.phut;
		
	int veTrong = p->soluongVe - demSoLuongVe(p->listVe, p->soluongVe);
	gotoxy(COT_L + 101, DONGVITRI_X + 3 + i);
	cout << "Con " << veTrong << " ve";
	
	
}


void hienThi1ChuyenBay_DatVe(ChuyenBay* cb, int chon) {
	gotoxy(COT_L + 1, DONGVITRI_X + 3 + chon);
	cout << "                                                                                                                 ";
	gotoxy(COT_L + 1, DONGVITRI_X + 3 + chon);
	cout << chon + 1;
	gotoxy(COT_L + 5, DONGVITRI_X + 3 + chon);
	cout << char(DOC);
	gotoxy(COT_L + 6, DONGVITRI_X + 3 + chon);
	cout << cb->maChuyenBay;
	gotoxy(COT_L + 25, DONGVITRI_X + 3 + chon);
	cout << char(DOC);
	gotoxy(COT_L + 26, DONGVITRI_X + 3 + chon);
	cout << cb->soHieuMayBay;
	gotoxy(COT_L + 45, DONGVITRI_X + 3 + chon);
	cout << char(DOC);
	gotoxy(COT_L + 46, DONGVITRI_X + 3 + chon);
	cout << cb->sanBayDen;
	gotoxy(COT_L + 80, DONGVITRI_X + 3 + chon);
	cout << char(DOC);
	gotoxy(COT_L + 81, DONGVITRI_X + 3 + chon);
	cout << cb->tgianKhoiHanh.ngay << "/" << cb->tgianKhoiHanh.thang << "/" << cb->tgianKhoiHanh.nam
		<< " " << cb->tgianKhoiHanh.gio << ":" << cb->tgianKhoiHanh.phut;
	gotoxy(COT_L + 100, DONGVITRI_X + 3 + chon);
	cout << char(DOC);
	int veTrong = cb->soluongVe - demSoLuongVe(cb->listVe, cb->soluongVe);
	gotoxy(COT_L + 101, DONGVITRI_X + 3 + chon);
	cout << "Con " << veTrong << " ve";
}
PTRChuyenBay ChonChuyenBayTrongNgay(PTRChuyenBay dsCB, int& chonCB, ListMayBay dsMB) {
	Normal();
	system("cls");

	veKhungThongTin(TIMKIEMCB_NGAY, "NHAP THONG TIN CAN TIM", "Ngay khoi hanh:", "Noi den:");
	hienThiHuongDan(DATVE);
	int dem = 0;
	Nhap:
		ThoiGian tg = kiemtraNgayNhap(tg, input1);
		if (tg.ngay == -1 || tg.thang == -1 || tg.nam == -1) {
			chonCB = ENTER;
			return NULL;
		}
		
		char *noiDen = new char[50];
		strcpy(noiDen, kiemtraNhapChuoi(false, input2));
		if (noiDen[0] == ESC) {
			chonCB = ENTER;
			return NULL;
		}
		
	
	PTRChuyenBay p; // dang sach tam luu cac chuyen bay co noi den X
	khoiTaoChuyenBay(p);
	for (PTRChuyenBay q = dsCB; q != NULL; q = q->next) {
		
		if (q->data.tgianKhoiHanh.ngay == tg.ngay && q->data.tgianKhoiHanh.thang == tg.thang
			&& q->data.tgianKhoiHanh.nam == tg.nam && stricmp(q->data.sanBayDen, noiDen) == 0 && q->data.trangThai == CONVE) {
			themMoiChuyenBay(p, q->data);
		}
	}
	
	if (p == NULL)
	{
		hienThiThongBao("CHUYEN BAY DA HOAN TAT HOAC KHONG CO!");
		chonCB = soDongChuyenBay;
		return p;
	}
	
	ChuyenBay* tmpCB[300];
	int i = 0;
	chuyenMang(p, tmpCB, i, dsMB, 0);
	int pageCB = 0;
	for (pageCB; pageCB < i; pageCB++) {
		hienThiCB_ConVe(tmpCB[pageCB], pageCB);

		if (dem == MAXTRANG - 1) {
			break;
		}
		dem++;
	}
	dem = 0;
	int chon = 0;
	char kytu;
	char tmp[20];
	do
	{
		kytu = getch();
		if (kytu == -32)
			kytu = getch();
		if (kytu == 0)
			kytu = getch();
		switch (kytu)
		{
		case PAGEUP:
			if (pageCB > MAXTRANG) {
				xoaThongTin(XOACHUYENBAY_L);
				pageCB -= MAXTRANG * 2;
				dem = 0;
				for (pageCB; pageCB < i; pageCB++) {
					hienThiCB_ConVe(tmpCB[pageCB], dem);

					if (dem == MAXTRANG - 1) {
						break;
					}
					dem++;
				}
				dem = 0;
			}
			break;
		case PAGEDOWN:
			if (pageCB < i) {
				xoaThongTin(XOACHUYENBAY_L);
				pageCB++;
				dem = 0;
				for (pageCB; pageCB < i; pageCB++) {
					hienThiCB_ConVe(tmpCB[pageCB], dem);

					if (dem == MAXTRANG - 1) {

						break;
					}
					dem++;
				}
				pageCB += MAXTRANG - dem;
				dem = 0;
			}
			break;
		case ESC:
		{
			Normal();
			chonCB = soDongChuyenBay;
			return NULL;
		}
			
		case ENTER:
			Normal();
			goto Nhap;
			chonCB = 1;
			break;
		}
	} while (true);
	
}

PTRChuyenBay chonChuyenBay_VeTrong(PTRChuyenBay dsCB, ListMayBay dsMB, int& chonCB) {

	Normal();
	khungGiaoDien();
	hienThiHuongDan(DATVE);
	int page = MAXTRANG - 1;
	int dem = 0;
	int chon = 0;


	hienThiChuyenBay_DatVe(dsCB);
	ChuyenBay* tmpCB[300];
	int i = 0;
	chuyenMang(dsCB, tmpCB, i, dsMB, CONVE);
	PTRChuyenBay q = new NodeChuyenBay;

	Highlight();
	char tmp[20];
	char kytu;

	do
	{
		kytu = getch();
		if (kytu == -32)
			kytu = getch();
		if (kytu == 0)
			kytu = getch();
		switch (kytu)
		{
		case UP:
			if (chon > 0 && dem > 0) {
				Normal();
				hienThi1ChuyenBay_DatVe(tmpCB[chon], dem);

				chon--;
				dem--;
				Highlight();
				hienThi1ChuyenBay_DatVe(tmpCB[chon], dem);
			}
			break;
		case DOWN:
			if (chon + 1 < i && dem + 1 < MAXTRANG) {
				Normal();
				hienThi1ChuyenBay_DatVe(tmpCB[chon], dem);

				chon++;
				dem++;
				Highlight();
				hienThi1ChuyenBay_DatVe(tmpCB[chon], dem);
			}
			break;
		case PAGEUP:
			if (page > MAXTRANG) {
				page -= MAXTRANG * 2;
				chon = page;
				dem = 0;
				Normal();
				xoaThongTin(XOACHUYENBAY_L);
				for (page; page < i; page++) {
					hienThiChuyenBay(tmpCB[page], dem);
					if (dem == MAXTRANG - 1) {
						break;
					}
					dem++;
				}
				dem = 0;
				Highlight();
				hienThiChuyenBay(tmpCB[chon], dem);
			}
			break;
		case PAGEDOWN:
			if (page < i) {
				Normal();
				xoaThongTin(XOACHUYENBAY_L);
				page++;
				chon = page;
				dem = 0;
				for (page; page < i; page++) {
					hienThiChuyenBay(tmpCB[page], dem);
					if (dem == MAXTRANG - 1) {
						break;
					}
					dem++;
				}
				page += MAXTRANG - dem;
				dem = 0;
				Highlight();
				hienThiChuyenBay(tmpCB[chon], dem);
			}
			break;
		case HOME:
		{
			tmp[0] = '\0';
			do
			{
				strcpy(tmp, UI_TimMa(0, "TIM CHUYEN BAY"));
				q = timKiemChuyenBay(dsCB, tmp);
				if (q == NULL) {
					thongbao_Highlight();
					hienThiThongBao("KHONG TIM THAY MAY BAY NAY!");
				}
				else break;
			} while (true);

			Normal();
			return q;
		}
		case ESC:
		{
			Normal();
			strcpy(q->data.maChuyenBay, { "" });
			chonCB = soDongChuyenBay;
			return q;
		}
		case ENTER:
			Normal();
			q = timKiemChuyenBay(dsCB, tmpCB[chon]->maChuyenBay);
			chonCB = 1;
			return q;
		}
	} while (true);
}

void hienThi_Ve(int listVe[], int cot, int dong, int chon, int kc) {
	gotoxy(COT_L + cot + kc+22, DONGVITRI_X + dong+12);
	cout << listVe[chon];
}

void hienThi_VeTrong(PTRChuyenBay p) {
	int chon = 0;
	int kc = 5;
	int n = 0;
	int* tempSoVe = new int[p->data.soluongVe];
	for (int k = 0; k < p->data.soluongVe; k++) {
		tempSoVe[k] = k + 1;
	}
	int dong = 0;
	int cot = 0;
	for (int j = 0; j < p->data.soluongVe; j++) {
		if (p->data.listVe[n] != "")
			thongbao_Highlight();

		hienThi_Ve(tempSoVe, cot, dong, n, kc);
		Normal();
		dong++;
		n++;
		if (dong == SODONG) {
			dong = 0;
			cot++;
			kc += 5;
		}
	}
	char kytu;
	do
	{
		kytu = getch();
		if (kytu == ESC) {
			return;
		}
	} while (true);

}

void Cau5DSVeTrong(PTRChuyenBay dsCB, ListMayBay dsMB) {
	Normal();
	system("cls");

	int chon;
	int exit = 1;

	while (exit)
	{
		chon = 0;
		PTRChuyenBay p = chonChuyenBay_VeTrong(dsCB, dsMB, chon);
		switch (chon)
		{
		case 1:
		{
			xoaKhung();
			hienThi_VeTrong(p);
			xoaKhung();
			break;
		}
		case soDongChuyenBay:
			exit = 0;
			break;
		}
	}
}

int chonVe(PTRChuyenBay& dsCB) {
	int chon = 0;
	int kc = 5;
	int n = 0;
	int* tempSoVe = new int[dsCB->data.soluongVe];
	for (int k = 0; k < dsCB->data.soluongVe; k++) {
		tempSoVe[k] = k + 1;
	}
	int dong = 0;
	int cot = 0;
	for (int j = 0; j < dsCB->data.soluongVe; j++) {
		if (dsCB->data.listVe[n] != "")
			thongbao_Highlight();
		
		hienThi_Ve(tempSoVe, cot, dong, n, kc);
		Normal();
		dong++;
		n++;
		if (dong == SODONG) {
			dong = 0;
			cot++;
			kc += 5;
		}
	}
	int soDong = SODONG;
	int soCot = cot;
	if (dsCB->data.soluongVe % soDong != 0) {
		soCot++;
	}
	cot = 0;
	dong = 0;
	kc = 5;
	if (dsCB->data.listVe[chon] != "")
		thongbao_Highlight();
	Highlight();
	hienThi_Ve(tempSoVe, cot, dong, chon, kc);
	char kytu;
	do
	{
		kytu = getch();
		if (kytu == -32)
			kytu = getch();
		if (kytu == 0)
			kytu = getch();
		switch (kytu)
		{
		case UP:
		{
			if (dong > 0) {
				Normal();
				if (dsCB->data.listVe[chon] != "") {
					thongbao_Highlight();
				}
				hienThi_Ve(tempSoVe, cot, dong, chon, kc);
				chon--;
				dong--;
				Highlight();
				hienThi_Ve(tempSoVe, cot, dong, chon, kc);
			}
			break;
		}
		case DOWN:
		{
			if (dong + 1 < soDong) {
				Normal();
				if (dsCB->data.listVe[chon] != "") {
					thongbao_Highlight();
				}
				hienThi_Ve(tempSoVe, cot, dong, chon, kc);
				if (chon < dsCB->data.soluongVe - 1) {
					chon++;
					dong++;
				}
				Highlight();
				hienThi_Ve(tempSoVe, cot, dong, chon, kc);
			}
			break;
		}
		case LEFT:
		{
			if (cot > 0) {
				Normal();
				if (dsCB->data.listVe[chon] != "") {
					thongbao_Highlight();
				}
				hienThi_Ve(tempSoVe, cot, dong, chon, kc);
				chon -= SODONG;
				cot--;
				kc -= 5;
				Highlight();
				hienThi_Ve(tempSoVe, cot, dong, chon, kc);
			}
			break;
		}
		case RIGHT:
		{
			if (cot + 1 < soCot) {
				Normal();
				if (dsCB->data.listVe[chon] != "") {
					thongbao_Highlight();
				}
				hienThi_Ve(tempSoVe, cot, dong, chon, kc);
				if ((chon + SODONG) < dsCB->data.soluongVe)
				{
					chon += SODONG;
					cot++;
					kc += 5;
				}
				Highlight();
				hienThi_Ve(tempSoVe, cot, dong, chon, kc);
			}
			break;
		}
		case ESC:
		{
			Normal();
			xoaKhung();
			delete []tempSoVe;
			return -1;
		}
		case ENTER:
		{
			Normal();
			if (dsCB->data.listVe[chon] != "") {
				thongbao_Highlight();
				hienThiThongBao("VE NAY DA CO NGUOI DAT!");
				break;
			}
			xoaKhung();
			delete []tempSoVe;
			return chon;
		}
		}
	} while (true);
	delete []tempSoVe;
	return -1;
}

int chonVeDeHuy(PTRChuyenBay& dsCB, HanhKhach hKhach) {
	int chon = 0;
	int kc = 5;
	int n = 0;
	int* tempSoVe = new int[dsCB->data.soluongVe];
	for (int k = 0; k < dsCB->data.soluongVe; k++) {
		tempSoVe[k] = k + 1;
	}
	int dong = 0;
	int cot = 0;
	for (int j = 0; j < dsCB->data.soluongVe; j++) {
		if (dsCB->data.listVe[n] != "")
			thongbao_Highlight();

		hienThi_Ve(tempSoVe, cot, dong, n, kc);
		Normal();
		dong++;
		n++;
		if (dong == SODONG) {
			dong = 0;
			cot++;
			kc += 5;
		}
	}
	int soDong = SODONG;
	int soCot = cot;
	cot = 0;
	dong = 0;
	kc = 5;
	if (dsCB->data.listVe[chon] != "")
		thongbao_Highlight();
	Highlight();
	hienThi_Ve(tempSoVe, cot, dong, chon, kc);
	char kytu;
	do
	{
		kytu = getch();
		if (kytu == -32)
			kytu = getch();
		if (kytu == 0)
			kytu = getch();
		switch (kytu)
		{
		case UP:
		{
			if (dong > 0) {
				Normal();
				if (dsCB->data.listVe[chon] != "") {
					thongbao_Highlight();
				}
				hienThi_Ve(tempSoVe, cot, dong, chon, kc);
				chon--;
				dong--;
				Highlight();
				hienThi_Ve(tempSoVe, cot, dong, chon, kc);
			}
			break;
		}
		case DOWN:
		{
			if (dong + 1 < soDong) {
				Normal();
				if (dsCB->data.listVe[chon] != "") {
					thongbao_Highlight();
				}
				hienThi_Ve(tempSoVe, cot, dong, chon, kc);
				chon++;
				dong++;
				Highlight();
				hienThi_Ve(tempSoVe, cot, dong, chon, kc);
			}
			break;
		}
		case LEFT:
		{
			if (cot > 0) {
				Normal();
				if (dsCB->data.listVe[chon] != "") {
					thongbao_Highlight();
				}
				hienThi_Ve(tempSoVe, cot, dong, chon, kc);
				chon -= SODONG;
				cot--;
				kc -= 5;
				Highlight();
				hienThi_Ve(tempSoVe, cot, dong, chon, kc);
			}
			break;
		}
		case RIGHT:
		{
			if (cot + 1 < soCot) {
				Normal();
				if (dsCB->data.listVe[chon] != "") {
					thongbao_Highlight();
				}
				hienThi_Ve(tempSoVe, cot, dong, chon, kc);
				chon += SODONG;
				cot++;
				kc += 5;
				Highlight();
				hienThi_Ve(tempSoVe, cot, dong, chon, kc);
			}
			break;
		}
		case ESC:
		{
			Normal();
			xoaKhung();
			delete[]tempSoVe;
			return -1;
		}
		case ENTER:
			Normal();
			if (dsCB->data.listVe[chon] == ""
				|| dsCB->data.listVe[chon] !=  hKhach.CMND) {
				thongbao_Highlight();
				hienThiThongBao("CHUA DAT VE, KHONG THE HUY!");
				break;
			}
			int xacNhan = isXacNhan("DONG Y", "TRO VE", false);
			if (xacNhan == 2 || xacNhan == 0)
				break;
			xoaKhung();
			return chon;
		}
	} while (true);
	return -1;
}

void themVe(string listVe[], int vitri, char cmnd[]) {
	listVe[vitri] = cmnd;
}

//kiem tra khong cho 1 hanh khach dat 2 ve tro len cung chuyen bay
int kiemtraVe_ChuyenBay(PTRChuyenBay p, HanhKhach hKhach) {
	for (int i = 0; i < p->data.soluongVe; i++) {
		if (hKhach.CMND == p->data.listVe[i]) {
			return 1;
		}
	}
	return 0;
}

PTRChuyenBay kiemtraTG_DatVeChuyenBay(PTRChuyenBay dsCB, PTRChuyenBay p, HanhKhach hKhach) {
	PTRChuyenBay q = dsCB;
	bool check = false;
	for (q; q != NULL; q = q->next) {
		//kiem tra thoi gian hoac trung ma chuyen bay
		if (stricmp(p->data.maChuyenBay, q->data.maChuyenBay) != 0
			&& kiemtraThoiGian(p->data.tgianKhoiHanh) - kiemtraThoiGian(q->data.tgianKhoiHanh) == 0
			&& !kiemtraKC_GioBay(p->data.tgianKhoiHanh, q->data.tgianKhoiHanh)) {
			if (!kiemtraVe_ChuyenBay(q, hKhach))
				return NULL;
			else return q;
		}
	}
	if (q == NULL)
		return NULL;
}

int kiemtraHanhKhach_HuyVe(PTRChuyenBay p, HanhKhach& hKhach) {
	veKhungThongTin(UI_THEMHANHKHACH, "HUY VE", "CMND", "Ho", "Ten", "Phai");
	do
	{
		strcpy(hKhach.CMND, kiemtraNhapCMND(input1));
		if (hKhach.CMND[0] != ESC) {
			if (kiemtraVe_ChuyenBay(p, hKhach)) {
				return 1;
			}
			else return 0;
		}
		else
			return 0;
	} while (true);
}

int cancelVe(string listVe[], int vitri) {
	listVe[vitri] = "";
	return 1;
}

void Cau3DatHuyVe(PTRChuyenBay& dsCB, ListMayBay dsMB, NODEPTR_TreeHK& dsHK) {
	int chon;
	int exit = 1;
	int vitri;
	Normal();
	system("cls");
	PTRChuyenBay ds;
	ListMayBay as;

	while (exit)
	{
		chon = 0;
		PTRChuyenBay p = ChonChuyenBay_DatHuyVe(dsCB, chon, dsMB);

		switch (chon)
		{
		case DATVE:
		{
			xoaKhung();
			HanhKhach hKhach = taoHanhKhach(dsHK, dsCB);
			if (hKhach.CMND[0] == ESC) {
				thongbao_Highlight();
				hienThiThongBao("DA HUY BO DAT VE!");
				Normal();
				break;
			}

			// truong hop dat ve tren cung 1 chuyen bay
			if (kiemtraVe_ChuyenBay(p, hKhach)) {
				thongbao_Highlight();
				hienThiThongBao("KHONG THE DAT VE 2 LAN TREN CHUYEN BAY NAY!");
				break;
			}
			
			//// truong hop dat ve cung thoi diem tren 2 chuyen khac nhau
			PTRChuyenBay tmp = kiemtraTG_DatVeChuyenBay(dsCB, p, hKhach);
			if (tmp != NULL) {
				thongbao_Highlight();
				hienThiThongBao("DA DAT VE TREN CHUYEN BAY: ", string(tmp->data.maChuyenBay), string(tmp->data.sanBayDen), "Den noi:");

				break;
			}
			vitri = chonVe(p);
			if (vitri == -1)
			break;

			//// them ve vao ds ve
			themNodeHanhKhach(dsHK, hKhach);
			themVe(p->data.listVe, vitri, hKhach.CMND);
			if (demSoLuongVe(p->data.listVe, p->data.soluongVe) == p->data.soluongVe) {
				p->data.trangThai = HETVE;
			}
			suadoi_Highlight();
			hienThiThongBao("DAT VE THANH CONG!");
			int savehk = ghiFileHK(dsHK);
			int savecb = ghiFileChuyenBay(dsCB);
			break;
		}
		case HUYVE:
		{
			xoaKhung();
			HanhKhach hKhach;
			if (kiemtraHanhKhach_HuyVe(p, hKhach)) {
				vitri = chonVeDeHuy(p, hKhach);
				if (vitri == -1)
					break;
				int cancel = cancelVe(p->data.listVe, vitri);
				if (cancel == 1) {
					if (demSoLuongVe(p->data.listVe, p->data.soluongVe) == p->data.soluongVe) {
						p->data.trangThai = HETVE;
					}
					suadoi_Highlight();
					hienThiThongBao("HUY VE THANH CONG!");
					int save = ghiFileChuyenBay(dsCB);
				}

			}
			else {
				thongbao_Highlight();
				hienThiThongBao("CHUA DAT VE NAY!");
			}
			break;
		}
		case soDongChuyenBay:
		{
			exit = 0;
			break;
		}
		}
	}
}
//============================================Hanh khach======================================//
void khoiTaoHanhKhach(NODEPTR_TreeHK& dsHK) {
	dsHK = NULL;
}

int emptyHanhKhach(NODEPTR_TreeHK dsHK) {
	return dsHK == NULL;
}
void themNodeHanhKhach(NODEPTR_TreeHK& dsHK, HanhKhach p) {

	if (dsHK == NULL) //dsHK la nut cua cay
	{
		dsHK = new NodeHanhKhach;
		dsHK->data = p;
		dsHK->left = NULL;
		dsHK->right = NULL;
	}
	else
	{
		
		if (stricmp(dsHK->data.CMND, p.CMND) > 0)
		{
			themNodeHanhKhach(dsHK->left, p);
		}
		else if (stricmp(dsHK->data.CMND, p.CMND) < 0)
		{
			themNodeHanhKhach(dsHK->right, p);
		}
	}
}

NODEPTR_TreeHK timkiemHanhKhach(NODEPTR_TreeHK dsHK, char cmnd[]) {
	NODEPTR_TreeHK p;
	p = dsHK;

	while (p != NULL && stricmp(p->data.CMND, cmnd) != 0)
	{
		if (stricmp(p->data.CMND, cmnd) > 0)
		{
			p = p->left;
		}
		else if (stricmp(p->data.CMND, cmnd) < 0)
		{
			p = p->right;
		}
	}
	return p;
}

void hienThiHanhKhach(NODEPTR_TreeHK dsHK) {
	gotoxy(COT + 1, input1 + 2);
	cout << dsHK->data.CMND;
	gotoxy(COT + 1, input2 + 2);
	cout << dsHK->data.ho;
	gotoxy(COT + 1, input3 + 2);
	cout << dsHK->data.ten;
	gotoxy(COT + 1, input4 + 2);
	cout << (dsHK->data.phai == NAM ? "Nam" : "Nu");
}

int kiemtraTonTaiCMND(NODEPTR_TreeHK dsHK, char soCMND[]) {
	if (dsHK == NULL)
		return 0;
	if (dsHK != NULL)
	{
		if (stricmp(dsHK->data.CMND, soCMND) == 0)
		{
			return 1;
		}
		else if (stricmp(dsHK->data.CMND, soCMND) > 0)
		{
			kiemtraTonTaiCMND(dsHK->left, soCMND);
		}
		else if (stricmp(dsHK->data.CMND, soCMND) < 0)
		{
			kiemtraTonTaiCMND(dsHK->right, soCMND);
		}
	}
}

int suaHanhKhach(NODEPTR_TreeHK& dsHK, NODEPTR_TreeHK tree, PTRChuyenBay& dsCB) {
	HanhKhach hKhach;

	do
	{
		strcpy(hKhach.CMND, kiemtraNhapCMND(input1));

		if (kiemtraTonTaiCMND(dsHK, hKhach.CMND)) {
			thongbao_Highlight();
			hienThiThongBao("CMND NAY HIEN DA CO!");
		}
		else {
			if (hKhach.CMND[0] == ESC) {
				return 0;
			}
			else break;
		}
	} while (true);

	do
	{
		strcpy(hKhach.ho, kiemtraNhapChuoi(false, input2));

		if (hKhach.ho[0] == ESC) {
			hKhach.CMND[0] = ESC;
			return 0;
		}
		else
			break;
	} while (true);

	do
	{
		strcpy(hKhach.ten, kiemtraNhapChuoi(false, input3));

		if (hKhach.ten[0] == ESC) {
			hKhach.CMND[0] = ESC;
			return 0;
		}
		else
			break;
	} while (true);

	int chon = isXacNhan("NAM", "NU", false);
	if (chon == YES)
		hKhach.phai = NAM;
	if (chon == NO)
		hKhach.phai = NU; 

	// thay doi cmnd cho hanh khach
	for (PTRChuyenBay p = dsCB; p != NULL; p = p->next) {
		for (int i = 0; i < p->data.soluongVe; i++) {
			if (tree->data.CMND == p->data.listVe[i]) {
				p->data.listVe[i] = hKhach.CMND;
				break;
			}
		}
	}
	tree->data = hKhach;

	return 1;
}

HanhKhach taoHanhKhach(NODEPTR_TreeHK& dsHK, PTRChuyenBay& dsCB) {
	veKhungThongTin(UI_THEMHANHKHACH, "NHAP THONG TIN HANH KHACH", "Nhap CMND", "Nhap ho", "Nhap ten", "Chon phai");
	HanhKhach hKhach;

	do
	{
		strcpy(hKhach.CMND, kiemtraNhapCMND(input1));
		//kiem tra hanh khach da co hay chua
		NODEPTR_TreeHK tmp = timkiemHanhKhach(dsHK, hKhach.CMND);
		if (tmp != NULL) {
			hienThiHanhKhach(tmp);
		DatVe:
			int sua = isXacNhan("SUA THONG TIN", "DAT VE", false);
			if (sua == YES) {
				int hieuChinh = suaHanhKhach(dsHK, tmp, dsCB);
				if (hieuChinh) {
					suadoi_Highlight();
					hienThiThongBao("SUA HANH KHACH THANH CONG!");
					int datVe = isXacNhan("DAT VE", "TRO VE", false);
					if (datVe == YES) {
						return tmp->data;
					}
					else {
						tmp->data.CMND[0] = ESC;
						return tmp->data;
					}
				}
				else
					goto DatVe;
			}
			else if (sua == NO) {
				int datVe = isXacNhan("DONG Y", "TRO VE", false);
				if (datVe == YES) {

					return tmp->data;
				}
				else {
					tmp->data.CMND[0] = ESC;
					return tmp->data;
				}
			}

		}
		
		else {
			if (hKhach.CMND[0] == ESC) {
				return hKhach;
			}
			else break;
		}
	} while (true);

	do
	{
		strcpy(hKhach.ho, kiemtraNhapChuoi(false, input2));

		if (hKhach.ho[0] == ESC) {
			hKhach.CMND[0] = ESC;
			return hKhach;
		}
		else
			break;
	} while (true);

	do
	{
		strcpy(hKhach.ten, kiemtraNhapChuoi(false, input3));

		if (hKhach.ten[0] == ESC) {
			hKhach.CMND[0] = ESC;
			return hKhach;
		}
		else
			break;
	} while (true);

	int chon = isXacNhan("NAM", "NU", false);
	if (chon == YES)
		hKhach.phai = NAM;
	if (chon == NO)
		hKhach.phai = NU;
	return hKhach;
}

void Cau6DSChuyenBayTrongNgay(PTRChuyenBay listCB, ListMayBay dsMB) {
	Normal();
	system("cls");

	int chon;
	int exit = 1;
	while (exit)
	{
		chon = 0;
		PTRChuyenBay p = ChonChuyenBayTrongNgay(listCB, chon, dsMB);
		switch (chon)
		{
		case ENTER: {
			exit = 0;
			break;
		}
			
		case soDongChuyenBay:
			exit = 0;
			break;
		}
	}
}

PTRChuyenBay ChonSanBayDen(PTRChuyenBay dsCB, int& chonCB, ListMayBay dsMB) {
	Normal();
	veKhungThongTin(TIMKIEMNOIDEN, "");
	hienThiHuongDan(DATVE);
	int dem = 0;
	
	dem = 0;
	int chon = 0;
	char kytu;
	char tmp[20];
	Nhap:
		char *noiDen = new char[50];
		strcpy(noiDen, kiemtraNhapChuoi(false, input1));
		
	PTRChuyenBay p; // dang sach tam luu cac chuyen bay co noi den X
	khoiTaoChuyenBay(p);
	for (PTRChuyenBay q = dsCB; q != NULL; q = q->next) {
		
		if (stricmp(q->data.sanBayDen, noiDen) == 0 && q->data.trangThai == CONVE) {
			themMoiChuyenBay(p, q->data);
		}
	}
	
	if (p == NULL)
	{
		hienThiThongBao("CHUYEN BAY DA HOAN TAT HOAC KHONG CO!");
		chonCB = soDongChuyenBay;
		return p;
	}
	
	ChuyenBay* tmpCB[300];
	int i = 0;
	chuyenMang(p, tmpCB, i, dsMB, 0);
	int pageCB = 0;
	for (pageCB; pageCB < i; pageCB++) {
		hienThiSanBayConVe(tmpCB[pageCB], pageCB);

		if (dem == MAXTRANG - 1) {
			break;
		}
	}
	PTRChuyenBay q = new NodeChuyenBay;
	do
	{
		kytu = getch();
		if (kytu == -32)
			kytu = getch();
		if (kytu == 0)
			kytu = getch();
		switch (kytu)
		{
		case UP:
			if (chon > 0 && dem > 0) {
				Normal();
				hienThi1ChuyenBay_DatVe(tmpCB[chon], dem);

				chon--;
				dem--;
				Highlight();
				hienThi1ChuyenBay_DatVe(tmpCB[chon], dem);
			}
			break;
		case DOWN:
			if (chon + 1 < i && dem + 1 < MAXTRANG) {
				Normal();
				hienThi1ChuyenBay_DatVe(tmpCB[chon], dem);

				chon++;
				dem++;
				Highlight();
				hienThi1ChuyenBay_DatVe(tmpCB[chon], dem);
			}
			break;
		case HOME:
		{
			tmp[0] = '\0';
			do
			{
				strcpy(tmp, UI_TimMa(TIMKIEMMA, "TIM CHUYEN BAY"));
				if (tmp[0] == ESC) {
					return NULL;
				}
				q = timKiemChuyenBay(dsCB, tmp);
				if (q == NULL) {
					thongbao_Highlight();
					hienThiThongBao("KHON TIM THAY CHUYEN BAY NAY!");
				}
				else break;
			} while (true);
			chonCB = isXacNhan("DAT VE", "TRO VE", false);
			if (chonCB == CANCEL)
				break;
			Normal();
			return q;
		}
		
		case ESC:
		{
			Normal();
			chonCB = soDongChuyenBay;
			return NULL;
		}
      
		case ENTER:
		{
			Normal();
			int luachon = isXacNhan("DAT VE", "HUY VE", false);
			if (luachon == YES)
				chonCB = DATVE;
			else if (luachon == NO)
				chonCB = HUYVE;
			else if (luachon == CANCEL)
				break;
			q = timKiemChuyenBay(dsCB, tmpCB[chon]->maChuyenBay);
			Normal();
			return q;
		}
		
		}
	} while (true);

}



void TimKiemSanBay_DatHuyVe(PTRChuyenBay& dsCB, ListMayBay dsMB, NODEPTR_TreeHK& dsHK) {
int chon;
	int exit = 1;
	int vitri;
	Normal();
	system("cls");
	PTRChuyenBay ds;
	ListMayBay as;

	while (exit)
	{
		chon = 0;
		PTRChuyenBay p = ChonSanBayDen(dsCB, chon, dsMB);

		switch (chon)
		{
		case DATVE:
		{
			xoaKhung();
			HanhKhach hKhach = taoHanhKhach(dsHK, dsCB);
			if (hKhach.CMND[0] == ESC) {
				thongbao_Highlight();
				hienThiThongBao("DA HUY BO DAT VE!");
				Normal();
				break;
			}

			// truong hop dat ve tren cung 1 chuyen bay
			if (kiemtraVe_ChuyenBay(p, hKhach)) {
				thongbao_Highlight();
				hienThiThongBao("KHONG THE DAT VE 2 LAN TREN CHUYEN BAY NAY!");
				break;
			}
			
			//// truong hop dat ve cung thoi diem tren 2 chuyen khac nhau
			PTRChuyenBay tmp = kiemtraTG_DatVeChuyenBay(dsCB, p, hKhach);
			if (tmp != NULL) {
				thongbao_Highlight();
				hienThiThongBao("DA DAT VE TREN: ", string(tmp->data.maChuyenBay), string(tmp->data.sanBayDen), "Den noi:");

				break;
			}
			vitri = chonVe(p);
			if (vitri == -1)
			break;

			//// them ve vao ds ve
			themNodeHanhKhach(dsHK, hKhach);
			themVe(p->data.listVe, vitri, hKhach.CMND);
			if (demSoLuongVe(p->data.listVe, p->data.soluongVe) == p->data.soluongVe) {
				p->data.trangThai = HETVE;
			}
			suadoi_Highlight();
			hienThiThongBao("DAT VE THANH CONG!");
			xoaThongTin(XOAHANHKHACH);
			int savehk = ghiFileHK(dsHK);
			int savecb = ghiFileChuyenBay(dsCB);
			Normal();
		    system("cls");
			break;
		}
		case HUYVE:
		{
			xoaKhung();
			HanhKhach hKhach;
			if (kiemtraHanhKhach_HuyVe(p, hKhach)) {
				vitri = chonVeDeHuy(p, hKhach);
				if (vitri == -1)
					break;
				int cancel = cancelVe(p->data.listVe, vitri);
				if (cancel == 1) {
					if (demSoLuongVe(p->data.listVe, p->data.soluongVe) == p->data.soluongVe) {
						p->data.trangThai = HETVE;
					}
					suadoi_Highlight();
					hienThiThongBao("HUY VE THANH CONG!");
					int save = ghiFileChuyenBay(dsCB);
					Normal();
		            system("cls");
				}

			}
			else {
				thongbao_Highlight();
				hienThiThongBao("CHUA DAT VE NAY!");
			}
			break;
		}
	case soDongChuyenBay:
		{
			exit = 0;
			break;
		}
		}
		Normal();
		system("cls");
	}
}

		
void xuatHanhKhach_ChuyenBay(ChuyenBay* cb, NODEPTR_TreeHK dsHK, int page) {
	int j = page, pageHK = page, dem = 0;
	for (j, pageHK; pageHK < cb->soluongVe; pageHK++, j++) {
		if (cb->listVe[j] != "") {
			char CMND[12];
			strcpy(CMND, cb->listVe[j].c_str());
			NODEPTR_TreeHK tree = timkiemHanhKhach(dsHK, CMND);

			gotoxy(COT_L + 136, DONGVITRI_X + 24 + dem);
			cout << dem + 1;
			gotoxy(COT_L + 141, DONGVITRI_X + 24 + dem);
			cout << j+1;
			gotoxy(COT_L + 151, DONGVITRI_X + 24 + dem);
			cout << tree->data.CMND;
			gotoxy(COT_L + 166, DONGVITRI_X + 24 + dem);
			cout << tree->data.ho << " " << tree->data.ten;
			gotoxy(COT_L + 186, DONGVITRI_X + 24 + dem);
			cout << (tree->data.phai == NAM ? "Nam" : "Nu");
			dem++;
		}

		if (dem == MAXTRANG_HK) {
			break;
		}

	}
}

void xuatDSHanhKhach_ChuyenBay(ChuyenBay* cb, NODEPTR_TreeHK dsHK) {
	Normal();
	int page = 0;
	if (cb->soluongVe < MAXTRANG_HK)
		page = cb->soluongVe;
	int max_HK = demSoLuongVe(cb->listVe, cb->soluongVe);
	char kytu;
	bool max = false;
	xuatHanhKhach_ChuyenBay(cb, dsHK, page);
	do
	{
		kytu = getch();
		if (kytu == -32)
			kytu = getch();
		if (kytu == 0)
			kytu = getch();
		switch (kytu)
		{
		case PAGEUP:
			if (page >= MAXTRANG_HK) {

				page -= MAXTRANG_HK;

				xoaThongTin(XOAHANHKHACH);
				xuatHanhKhach_ChuyenBay(cb, dsHK, page);
			}
			break;
		case PAGEDOWN:
			if (page < max_HK) {

				page += MAXTRANG_HK;
				if (page >= max_HK) {
					page -= MAXTRANG_HK;
					break;
				}

				xoaThongTin(XOAHANHKHACH);
				xuatHanhKhach_ChuyenBay(cb, dsHK, page);

			}
			break;
		case ESC:
			return;
		}

	} while (true);
}

PTRChuyenBay ChonCB_Xuat_DSHK(PTRChuyenBay dsCB, int& chonCB, ListMayBay dsMB, NODEPTR_TreeHK dsHK) {

	Normal();
	khungGiaoDien();
	hienThiHuongDan(DATVE);
	int chon = 0;

	int pageCB = 0;
	int pageHK = 0;
	int dem = 0;
	ChuyenBay* tmpCB[300];
	int i = 0;
	chuyenMang(dsCB, tmpCB, i, dsMB, 0);
	PTRChuyenBay q = new NodeChuyenBay;
	hienThiDS_ChuyenBay(dsCB);
	
	dem = 0;
	char tmp[20];
	char kytu;
	do
	{
		kytu = getch();
		if (kytu == -32)
			kytu = getch();
		if (kytu == 0)
			kytu = getch();
		switch (kytu)
		{
		case HOME:
		{
			tmp[0] = '\0';
			do
			{
				strcpy(tmp, UI_TimMa(0, "TIM CHUYEN BAY"));
				if (tmp[0] == ESC) {
					return NULL;
				}
				q = timKiemChuyenBay(dsCB, tmp);
				if (q == NULL) {
					thongbao_Highlight();
					hienThiThongBao("KHONG TIM THAY CHUYEN BAY!");
				}
				else break;
			} while (true);
			xoaThongTin(XOAHANHKHACH);
			veKhungXuat(XUATHANHKHACH, DONGVITRI_Y - DONGVITRI_X - 20, COT_R - COT_L-50, 5, 15, 30, 50, 0, COT_L+135, DONGVITRI_X + 20);
			xuatDSHanhKhach_ChuyenBay(&q->data, dsHK);
			Normal();
			return q;
		}
		case ESC:
		{
			Normal();
			tmp[0] = '\0';
			strcpy(q->data.maChuyenBay, tmp);
			chonCB = soDongChuyenBay;
			return q;
		}

		case ENTER:
			Normal();
			xuatDSHanhKhach_ChuyenBay(tmpCB[chon], dsHK);
			break;
		}
	} while (true);
}

void Cau4DSHanhKhach(PTRChuyenBay dsCB, NODEPTR_TreeHK dsHK, ListMayBay dsMB) {
	Normal();
	system("cls");

	int chon;
	int exit = 1;


	while (exit)
	{
		chon = 0;
		PTRChuyenBay p = ChonCB_Xuat_DSHK(dsCB, chon, dsMB, dsHK);

		switch (chon)
		{
		case 1:
			break;
		case soDongChuyenBay:
			exit = 0;
			break;
		}
	}
}

int main()
{
	toanManHinh();
	ListMayBay dsMB;
	MayBay mb;
	int chon;
	NODEPTR_TreeHK dsHK;
	PTRChuyenBay dsCB;
	ChuyenBay cb;
	khoiTaoHanhKhach(dsHK);
	khoiTaoChuyenBay(dsCB);

	int docDSMB = docFileMayBay(dsMB);
	int docDSCB = docFileChuyenBay(dsCB, dsMB);
	int docDSHK = docFileHanhKhach(dsHK);

	int exit = 1;
	while (exit) {
		Normal();
		system("cls");
		chon = menuChinh(itemChinh);
		switch (chon) {
		case 1:
		{
			Cau1MayBay(dsMB, dsCB);
			break;
		}
		case 2:
		{
			int check = kiemtraCB_HoanTat(dsCB);
			Cau2ChuyenBay(dsCB, dsMB);
			int save = ghiFileChuyenBay(dsCB);
			break;
		}
		case 3:
		{
			Cau3DatHuyVe(dsCB, dsMB, dsHK);
			break;
		}
		case 4:
		{
			Cau4DSHanhKhach(dsCB, dsHK, dsMB);
			break;
		}
		case 5:
		{
			Cau5DSVeTrong(dsCB, dsMB);
			break;
		}
	
		case 6:
		{
			Cau6DSChuyenBayTrongNgay(dsCB, dsMB);
			break;
			
		}
//		case 7:
//		{
//			Cau7ThongKeSoLuot(dsCB, dsMB);
//			break;
//		}
		case 8:
		{
		    TimKiemSanBay_DatHuyVe(dsCB, dsMB, dsHK);
		    break;
		}
		case 0:
			return 0;
		}
	}
	exit=0;
	Normal();
	system("cls");
		return 0;
}
