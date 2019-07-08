#pragma once
#include"danhmucsach.h"
#define MAXLIST 500
struct dausach{
	char ISBN[6];
	char tenSach[50];
	int soTrang;
	char tacGia[30];
	int namXB;
	char theLoai[15];
	LISTDMS listDMS;
};
typedef struct dausach DauSach;

struct listDS{
	int n;
	DauSach *nodeDS[MAXLIST];
};
typedef struct listDS  LISTDS;
