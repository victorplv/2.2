#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include"Dispatcher.h"
#include"Driver.h"
#include"Avto.h"
#include"Route.h"

void create_disp(Disp* desp)
{
	desp->ID = 0;
	desp->statusd = false;
}
void create_disp(Disp* desp, int idd, int statusd)
{
	desp->ID = idd;
	desp->statusd = statusd;
}