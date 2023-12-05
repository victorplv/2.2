// 2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include"Avto.h"
#include"Driver.h"
#include"Dispatcher.h"
#include"Route.h"

int main()
{
	setlocale(LC_ALL, "rus");
	printf("Статическая переменная\n");
	Route p;
	Driver d1;
	Avto a1;
	printf("\nОбычный конструктор с параметрами: \n");
	bool r1 = 1, oper1 = 1, req1 = 1;
	int end1 = 0, sta1 = 123, look1 = 10, idd1 = 999, prmn1 = 123, stdesp1 = 123;
	char mark1[16] = "лада", type1[16] = "седан";
	create_route(&p, r1, end1, sta1, oper1, look1, mark1, type1, idd1, req1, prmn1, idd1, stdesp1);
	information(&p);
	ban_driver(&p);
	printf("\nДинамическая переменная\n");
	Route* r2;
	r2 = (Route*)malloc(sizeof(struct Route));
	create_route(r2);
	information(r2);
	free(r2);




    return 0;
}


