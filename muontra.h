#pragma once

struct muontra{
	int maSach;
	char ngayMuon[11];
	char ngayTra[11];
	char trangThai[10];//0: dang muon,1: da tra,2: lam mat sach
};
typedef struct muontra MuonTra;

struct nodeMTra{
	MuonTra info;
	struct nodeMTra *left;
	struct nodeMTra *right;
};
typedef struct nodeMT *NODEMTra;

struct listMTra{
	NODEMTra *head;
	NODEMTra *tail;
};
typedef struct listMTra LISTMTra;


