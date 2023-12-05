#pragma once

struct CarCard {
	bool operability;
	int look;
	char type[16];
};

struct Avto {
	int status;
	char mark[16];
	struct CarCard av;
};

void create_car(Avto* avto);
void create_car(Avto* avto, int status, bool operbil, int look, char mark[16], char type[16]);