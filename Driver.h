#pragma once
#include"Avto.h"

struct Driver {
	int ID;
	bool request;
	int permission;
};

void create_driver(Driver* driver);
void create_driver(Driver* driver, int idv, bool req, int prmn);
