#include <iostream>
#include <windows.h> 
#include <string.h>
#include <chrono> 
#include <thread>
#include "functii.h"
using namespace std;

int main()
{
    system("cls");
    int optiune = 0;
    cout << "Alegeti o functie pe baza numarului ei din paranteza: \n";
    cout << "-Suma cifrelor unui numar dat. (1)\n";
    cout << "-Produsul cifrelor unui numar dat. (2)\n";
    cout << "-Oglinditul unui numar. (3)\n";
    cout << "-Cel mai mare divizor comun a 2 numere. (4)\n";
    cout << "-Cel mai mic multiplu comun a 2 numere. (5)\n";
    cout << "-Divizorii unui numar. (6)\n";
    cout << "-Inchiderea programului. (7)\n";
    cout << "Introduceti numarul din paranteza: ";
    cin >> optiune;
    
        switch (optiune) {
        case 1:
        {
            scifre();
            main();
        }
        case 2: 
        {
            pcifre();
            main();

        }
        case 3:
        {
            oglindit();
            main();
        }
        case 4:
        {
            cmmdc();
            main();
        }
        case 5: 
        {
            cmmmc();
            main();
        }
        case 6:
        {
            div();
            main();
        }
        case 7:
        {
            abort();
        }
        default: {
            system("cls");
            cout << "OPTIUNEA INTRODUSA NU EXISTA!!\n";
            cout << "VA TREBUI SA REINTRODUCETI OBTIUNEA DUPA 5 SECUNDE!!\n";
            const auto start = chrono::high_resolution_clock::now();
            this_thread::sleep_for(6000ms);
            const auto end = chrono::high_resolution_clock::now();
            const std::chrono::duration<double, std::milli> elapsed = end - start;
            system("cls");
            main();
        }
       

        }
   
    

    }
