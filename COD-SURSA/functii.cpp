#include "functii.h"
#include <iostream>
#include <string>
#include <windows.h> 
using namespace std;
string raspuns;
int nr = 0;
int r = 0;
int copie = 0;
int aux = 0;
void scifre()
{
	system("cls");
		cout << "Introduceti numarul pentru care doriti suma cifrelor: ";
		nr = 0;
	    r=0;
	cin >> nr;
	while(nr>0)
	{
		r = r+nr % 10;
		nr = nr / 10;
	}
	cout << "Rezultatul este " << r << ".\n";
	cout << "Doresti sa reutilizezi functia? in caz contrar revii la meniul principal (da/nu) \n";
	cin >> raspuns;
	if (raspuns == "da")
		scifre();
		
}
void pcifre()
{
	system("cls");
	cout << "Introduceti numarul pentru care doriti produsul cifrelor: ";
	nr=0;
	r = 1;
	cin >> nr;
	while (nr > 0)
	{
		r = r * (nr % 10);
		nr = nr/ 10;
	}
	cout << "Rezultatul este " << r << ".\n";
	cout << "Doresti sa reutilizezi functia? in caz contrar revii la meniul principal (da/nu) \n";
	cin >> raspuns;
	if (raspuns == "da")
		pcifre();
}
void oglindit()
{
	system("cls");
	cout << "Introduceti numarul pentru care doriti oglinditul cifrelor: ";
	nr = 0;
	r = 0;
	cin >> nr;
	copie = nr;
	aux = 0;
	while(nr>0)
	{
	nr = nr/10;
	aux=aux+1;
	}
	while(aux>0)
	{
		r = r*10+copie%10;
		copie =copie/10;
		aux = aux - 1;
	}
	cout << "Rezultatul este " << r << ".\n";
	cout << "Doresti sa reutilizezi functia? in caz contrar revii la meniul principal (da/nu) \n";
	cin >> raspuns;
	if (raspuns == "da")
		oglindit();	
}
void cmmdc()
{
	system("cls");
	cout << "Introduceti doua numere cu spatiu intre ele pentru a calcula cmmdcul lor: ";
	nr = 0;
	copie = 0;
	cin >> nr >> copie;
	while (nr != copie) {
		if (nr > copie) 
			nr = nr - copie;
		else 
			copie = copie - nr;
	}
	cout << "Cel mai mare divizor comun este " << nr<<".\n";
	cout << "Doresti sa reutilizezi functia? in caz contrar revii la meniul principal (da/nu) \n";
	cin >> raspuns;
	if (raspuns == "da")
		cmmdc();

}
void cmmmc()
{
	system("cls");
	cout << "Introduceti doua numere cu spatiu intre ele pentru a calcula cmmmcul lor: ";
	nr = 0;
	copie = 0;
	r = 0;
	aux = 0;
	cin >> nr >> copie;
	r = nr % copie; aux = nr * copie;
	while (r != 0)
	{
		nr = copie;
		copie = r;
		r = nr % copie;
	}
	r = aux / copie;
	cout<< "Cel mai mic multiplu comun este " << r<<".\n";
	cout << "Doresti sa reutilizezi functia? in caz contrar revii la meniul principal (da/nu) \n";
	cin >> raspuns;
	if (raspuns == "da")
		cmmmc();
}
void div()
{
	system("cls");
	cout << "Introduceti numarul pentru care doriti sa aflati divizorii lui: ";
	nr = 0;
	cin >> nr;
	cout << "Divizorii lui sunt: ";
	for (int i = 1; i <= nr; i++)
	{
		if (nr % i == 0)
			cout << i << "  ";

	}
	cout << "\n";
	cout << "Doresti sa reutilizezi functia? in caz contrar revii la meniul principal (da/nu) \n";
	cin >> raspuns;
	if (raspuns == "da")
		div();
}