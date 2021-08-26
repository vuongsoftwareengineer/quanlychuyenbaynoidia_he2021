#pragma once
#include <iostream>
#include <string>

#define MAXLIST 300
#define MIN_SOCHO 20

using namespace std;

//struct may bay
struct maybay {
	char soHieuMayBay[15];
	char loaiMayBay[40];
	int soCho;
	//them so luot cho cau cuoi
	int soLuot = 0;
};
typedef struct maybay MayBay;

struct listmaybay {
	int n = 0;
	MayBay *MB[MAXLIST];
}; 
typedef struct listmaybay ListMayBay;

MayBay ChonMB_toChuyenBay(ListMayBay dsMB);
int emptyMayBay(ListMayBay dsMB);
int fullMayBay(ListMayBay dsMB);
int timkiemMayBay(ListMayBay dsMB, char maMB[]);
int insertMayBay(ListMayBay& dsMB, MayBay mb);
MayBay themMayBay(ListMayBay &dsMB);
void hienThiMayBay(ListMayBay dsMB, int chon, bool type, int dem);
void hienThi_DSMayBay(ListMayBay dsMB, int page);
int suaMayBay(ListMayBay& ListMayBay, int i);
int kiemtraThemSoCho(MayBay mbCu, MayBay mbMoi);
void quickSortThongKeLuot(MayBay *soLanBay, int left, int right);

//=================Doc ghi file==============
int docFileMayBay(ListMayBay& dsMB);
int ghiFileMayBay(ListMayBay dsMB);
