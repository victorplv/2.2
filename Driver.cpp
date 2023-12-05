#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include "Driver.h"
#include "Avto.h"

void create_driver(Driver* driver)
{
	driver->ID = 0;
	driver->permission = 0;
	driver->request = false;
}

void create_driver(Driver* driver, int idv, bool req, int prmn)
{
	driver->ID = idv;
	driver->permission = prmn;
	driver->request = req;
}

