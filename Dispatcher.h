#pragma once
#include"Avto.h"
#include"Driver.h"


struct Disp {
	int ID;
	int statusd;
};

void create_disp(Disp* desp);
void create_disp(Disp* desp, int id, int statusd);

