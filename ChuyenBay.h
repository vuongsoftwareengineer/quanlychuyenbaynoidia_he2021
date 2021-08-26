#pragma once
#include <iostream>
#include <string>
#include "MayBay.h"
#include "KiemTra.h"
#include "HanhKhach.h"
#include "ThoiGian.h"

#define HUYCHUYEN 0
#define CONVE 1
#define HETVE 2
#define HOANTAT 3
#define SODONG 15

const int KC_TGIANBAY = 2;

using namespace std;

struct chuyenbay {
	char maChuyenBay[15];
	ThoiGian tgianKhoiHanh;
	char sanBayDen[40];
	int trangThai;
	char soHieuMayBay[15];
	string* listVe;
	int soluongVe;
};
typedef struct chuyenbay ChuyenBay; 

typedef struct nodechuyenbay {
	ChuyenBay data;		//truong info
	struct nodechuyenbay* next;   //truong diachi
};
typedef struct nodechuyenbay NodeChuyenBay;
typedef struct nodechuyenbay* PTRChuyenBay;

//==============================Chuyen bay==================================//
void Cau2ChuyenBay(PTRChuyenBay& dsCB, ListMayBay& dsMB);
PTRChuyenBay chonSuaChuyenBay(PTRChuyenBay dsCB, ListMayBay dsMB, int& chonCB);
void hienThiDS_ChuyenBay(PTRChuyenBay dsCB);
void khoiTaoChuyenBay(PTRChuyenBay& dsCB);
int emptyChuyenBay(PTRChuyenBay dsCB);
PTRChuyenBay timKiemMaChuyenBay(PTRChuyenBay dsCB, char ma[]);
int insertNodeChuyenBay(PTRChuyenBay& dsCB, ChuyenBay cb);
void themMoiChuyenBay(PTRChuyenBay& dsCB, ChuyenBay cb);
ChuyenBay taoChuyenBay(PTRChuyenBay dsCB, ListMayBay dsMB);
int huyChuyenBay(PTRChuyenBay& dsCB, PTRChuyenBay p);
int xoaChuyenBay(PTRChuyenBay& dsCB, char ma[]);
int kiemtraTG_ChuyenBay(ChuyenBay cb, PTRChuyenBay dsCB);
void hienThiChuyenBay(ChuyenBay* cb, int chon);
PTRChuyenBay timKiemChuyenBay(PTRChuyenBay dsCB, char ma[]);
int kiemtraCB_HoanTat(PTRChuyenBay& dsCB);
int suaChuyenBay(PTRChuyenBay& dsCB, PTRChuyenBay p, ListMayBay dsMB);
int kiemtraTrangThai(ChuyenBay cb);
void chuyenMang(PTRChuyenBay dsCB, ChuyenBay* cb[], int& n, ListMayBay dsMB, int trangThai);

//========================doc,ghi file Chuyen bay====================================//
int docFileChuyenBay(PTRChuyenBay& dsCB, ListMayBay dsMB);
int ghiFileChuyenBay(PTRChuyenBay dsCB);

//===============================May Bay thuoc chuyen bay============================//
void Cau1MayBay(ListMayBay& dsMB, PTRChuyenBay dsCB);
void Cau7ThongKeSoLuot(PTRChuyenBay dsCB, ListMayBay dsMB);
int kiemtraMayBayCoCB(MayBay mb, PTRChuyenBay dsCB);
int xoaMayBay(ListMayBay& ListMayBay, int i, PTRChuyenBay dsCB);
PTRChuyenBay ChonChuyenBayTrongNgay(PTRChuyenBay dsCB, int& chonCB, ListMayBay ListMayBay);
int kiemtraMayBayCoCB(MayBay mb, PTRChuyenBay dsCB);
int xoaMayBay(ListMayBay& ListMayBay, int i, PTRChuyenBay dsCB);
PTRChuyenBay chonChuyenBay_VeTrong(PTRChuyenBay dsCB, ListMayBay dsMB, int& chonCB);
void hienThi_VeTrong(PTRChuyenBay p);

//===============================Ve may bay thuoc chuyen bay=============================================//
void Cau3DatHuyVe(PTRChuyenBay& dsCB, ListMayBay dsMB, NODEPTR_TreeHK& dsHK);
void Cau5DSVeTrong(PTRChuyenBay dsCB, ListMayBay dsMB);
PTRChuyenBay ChonChuyenBay_DatHuyVe(PTRChuyenBay dsCB, int& chonCB, ListMayBay dsMB);
void hienThiChuyenBay_DatVe(PTRChuyenBay dsCB);
int kiemtraVeDaMua(string listVe[], int soluongVe);
int taoDanhSachVe(MayBay mb, string* lstVe);
int demSoLuongVe(string listVe[], int soluongVe);
void themVe(string listVe[], int vitri, char cmnd[]);
int kiemtraVe_ChuyenBay(PTRChuyenBay p, HanhKhach hKhach);
PTRChuyenBay kiemtraTG_DatVeChuyenBay(PTRChuyenBay dsCB, PTRChuyenBay p, HanhKhach hKhach);
int kiemtraHanhKhach_HuyVe(PTRChuyenBay p, HanhKhach& hKhach);
void hienThi1ChuyenBay_DatVe(ChuyenBay* cb, int chon);

//==============================Hanh khach thuoc chuyen bay=============================//
void Cau4DSHanhKhach(PTRChuyenBay dsCB, NODEPTR_TreeHK dsHK, ListMayBay dsMB);
void Cau6DSChuyenBayTrongNgay(PTRChuyenBay dsCB, ListMayBay dsMB);
HanhKhach taoHanhKhach(NODEPTR_TreeHK& dsHK, PTRChuyenBay& dsCB);
int suaHanhKhach(NODEPTR_TreeHK& dsHK, NODEPTR_TreeHK t, PTRChuyenBay& dsCB);
PTRChuyenBay ChonCB_Xuat_DSHK(PTRChuyenBay dsCB, int& chonCB, ListMayBay dsMB, NODEPTR_TreeHK dsHK);
void xuatHanhKhach_ChuyenBay(ChuyenBay* cb, NODEPTR_TreeHK dsHK, int page);
void xuatDSHanhKhach_ChuyenBay(ChuyenBay* cb, NODEPTR_TreeHK dsHK);

