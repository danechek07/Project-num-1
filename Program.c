#include <locale.h>

#include <stdio.h>

void first()
{
	puts("Моя программа: Задание 4");
}
void name()
{
	puts(" ");
	puts(" ");
	puts(" ");
	puts("		* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *");
	puts("		*                                                                                   *");
	puts("		*  тема:Написание и компиляция консольного приложения в среде разработки MVS 2022   *");
	puts("		*                                                                                   *");
	puts("		*   выполнил: бИЦ-251 Петрукович Д.П.                                               *");
	puts("		*                                                                                   *");
	puts("		* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *");
}

void date()
{
	puts("   _   _   _    _  _");
	puts("| |_  | | |_|  | |  |");
	puts("| |_|.|_|. _|. |_|  |");
}
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	first();
	name();
	date();
}