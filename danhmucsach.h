#pragma once

struct danhmucsach{
	int maSach;
	char trangThai[10];//0: cho muon duoc,1: da co doc gia muon,2: sach da thanh ly
	int viTri;
};
typedef struct danhmucsach DMS;

struct nodeDMS{
	DMS info;
	struct nodeDMS *next;
};
typedef struct nodeDMS *NODEDMS;

struct listDMS{
	NODEDMS *head;
	NODEDMS *tail;
};
typedef struct listDMS LISTDMS;

