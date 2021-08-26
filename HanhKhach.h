#pragma once
#include <iostream>
#include <string>
#include "ChuyenBay.h"
#include "KiemTra.h"

#define NAM 0
#define NU 1
using namespace std;
//struct hanh khach
struct hanhkhach {
	char CMND[12];		//khoa cua cay nhi phan tim kiem 
	char ho[30];
	char ten[12];
	int phai;
};
typedef struct hanhkhach HanhKhach;

struct nodeHanhKhach {
	HanhKhach data;
	struct nodeHanhKhach* left;
	struct nodeHanhKhach* right;
};
typedef struct nodeHanhKhach NodeHanhKhach;
typedef struct nodeHanhKhach* NODEPTR_TreeHK;
NODEPTR_TreeHK dsHK=NULL;

void khoiTaoHanhKhach(NODEPTR_TreeHK& dsHK);
int emptyHanhKhach(NODEPTR_TreeHK dsHK);
NODEPTR_TreeHK timkiemHanhKhach(NODEPTR_TreeHK dsHK, char cmnd[]);
void hienThiHanhKhach(NODEPTR_TreeHK dsHK);
int kiemtraTonTaiCMND(NODEPTR_TreeHK dsHK, char soCMND[]);
void themNodeHanhKhach(NODEPTR_TreeHK& dsHK, HanhKhach p);
void duyetCay(NODEPTR_TreeHK dsHK, fstream& file);

//=================doc file hanh khach=======================//
int docFileHanhKhach(NODEPTR_TreeHK& dsHK);
