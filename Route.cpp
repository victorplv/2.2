#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include "Route.h"

void create_route(Route* route)
{
	route->ready = false;
	route->end = 0;

	create_car(&route->avto);
	create_driver(&route->driver);
	create_disp(&route->disp);
	printf("\nБыл вызван констурктор без параметров\n");
}
void create_route(Route* route, bool ready, int end, int status, bool operbil, int look, char mark[16], char type[16], int idv, bool req, int prmn, int id, int statusd)
{
	route->ready = true;
	route->end = end;

	create_car(&route->avto, status, operbil, look, mark, type);
	create_driver(&route->driver, idv, req, prmn);
	create_disp(&route->disp, id, statusd);
	printf("\nБыл вызван констурктор c параметрamи\n");
}
void information(Route* route)
{
	if (route->ready && !route->end)
	{
		printf("Рейс в процeссе выполнения или окончен\n");
	}
	else printf("Рейс не создан или поля не инициализированы\n");
}
void repaire_avto(Route* route)
{
	if (route->driver.permission && route->driver.request && route->avto.status)
	{
		route->avto.av.operability = false;
		printf("Машина нуждается в ремонте\n");
	}
	else printf("Ошибка в отправке запроса на ремонт");
}
void ban_driver(Route* route)
{
	printf("Была вызвана функция отстранения водителя\n");
	if (route->disp.statusd == route->driver.permission)
	{
		route->driver.permission = false;
		printf("Теперь водитель отстранен\n");
	}
	else printf("У диспетчера нет доступа или водитель уже отстранен");
}
void quality_of_car(Route* route)
{
	int a;
	if (route->disp.statusd == route->avto.status)
	{
		printf("Введите оценку внешенего состояния автомобиля: 0 or 1.\n");
		do
		{
			scanf("%d", &a);
		} while (a != 1 || a != 0);
		route->avto.av.operability = a;
		printf("Статус машины изменен\n");
	}
}