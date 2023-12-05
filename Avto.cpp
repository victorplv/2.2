#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include "Avto.h"


void create_car(Avto* avto)
{
	avto->status = false;
	avto->mark[16] = '0';
	avto->av.look = 0;
	avto->av.operability = false;
	avto->av.type[16] = '0';
}
void create_car(Avto* avto, int status, bool operbil, int look, char mark[16], char type[16])
{
	avto->status = true;
	avto->av.operability = true;
	strcpy(avto->mark, mark);
	strcpy(avto->av.type, type);
	avto->av.look = look;
}