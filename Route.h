#pragma once
#include"Avto.h"
#include"Driver.h"
#include"Dispatcher.h"

struct Route {
	bool ready;
	int end;
	struct Avto avto;
	struct Driver driver;
	struct Disp disp;
};

void create_route(Route* route);
void create_route(Route* route, bool ready, int end, int status, bool operbil, int look, char mark[16], char type[16], int idv, bool req, int prmn, int id, int statusd);
void information(Route* route);
void repaire_avto(Route* route);
void ban_driver(Route* route);
void quality_of_car(Route* route);