#define pragma once
#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <time.h>
#include <chrono>
#include <cmath>
#include <stdio.h>
#include <vector>
#include <list>
#include <deque>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <studentas.h>


using namespace std;
using namespace std::chrono;
//const int k = 100;
const char DFV[] = "failas1000.txt";


void sort (vector <Studentas> S, int k);
/*bool CompareLastNames(Studentas& a, Studentas& b);

template <class T>
void rikiavimas(T& );*/

double vidurkis(vector <Studentas> S, int k);
double mediana (vector <Studentas> S, int k);


template <class T>
void skirstymas(T&, T&, T&);

template <class T>
void skirstymas(T&, T&);


template <class T>
void spausdinimas(T&, T&, T&);

template <class T>
void ivedimas(T&, T&, T&);

template <class T>
void skaitymas(T&, T&, T&);

template <class T>
void generavimas(T&);

template <class T>
void genskaitymas(T&, T&, T&);

template <class T>
void duomenys(T&, T&, T&);

void galutinis(char);

