#pragma once
#include "muontra.h"
struct thedocgia{
	int maThe;
	char ho[10];
	char ten[50];
	char gioiTinh[6];
	char trangThai[6];//0: the bi khoa,1 :the duoc hoat dong
	LISTMTra listMTra;
};
typedef struct thedocgia TheDG;
struct nodeTheDG{
	TheDG info;
	struct nodeTheDG *left;
	struct nodeTheDG *right;
};
typedef struct nodeTheDG *NODEPTR;

void Initalize_TheDG(NODEPTR &root){
	root=NULL;
}
void Insert_TheDG(NODEPTR &p,TheDG info){
	if(p==NULL){
		p= new nodeTheDG;
		p->info.maThe = info.maThe;
		p->info = info;
		p->left=NULL;
		p->right=NULL;
	} 
	else{
		if(info.maThe < p->info.maThe)
			Insert_TheDG(p,p->left->info);
		else if(info.maThe > p->info.maThe)
			Insert_TheDG(p,p->right->info);
	}
}
