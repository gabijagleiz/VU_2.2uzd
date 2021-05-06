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


using namespace std;
using namespace std::chrono;
//const int k = 100;
const char DFV[] = "failas1000.txt";

class Studentas {
	private:
		string vardas, pavarde;    //vardas, pavarde
		int nk;          //nd kiekis
		vector <int> nd;  	//namu darbu rezultatas
		int egz;			//egzamino rezultatas
		double vid, med, gr;
	public:    
		Studentas() {vardas = "", pavarde = "", ndkiekis = 0, egzaminas = 0, Vidurkis = 0, Mediana = 0, Galutinis = 0};
		Studentas(string vardas, string pavarde, int ndkiekis, vector <int> nd, int egzaminas, double Vidurkis, double Mediana
		double Galutinis);
		
		void setStudent(string, string, int);
		string getname() const {return var;}
		string getLastname() const {return pav;}
		int getExam() const {return egz;}
		int getFinal() const {return gr;}
		vector <int> gethomework() const {return nd;}
	
};

void sort (vector <Studentas> S, int k);
/*bool CompareLastNames(Studentas& a, Studentas& b);

template <class T>
void rikiavimas(T& );*/

bool yra_protingas(Studentas& S);
double vidurkis(vector <Studentas> S, int k);
double mediana (vector <Studentas> S, int k);


template <class T>
void skirstymas(T&, T&, T&);

template <class T>
void skirstymas(T&, T&);


template <class T>
void spausdinimas(T&, T&, T&);

//void skirstymas(vector <Studentas> &S, vector <Studentas> &protingi, vector <Studentas> &nevykeliai, int k)
//void spausdinimas(vector <Studentas> S, int k);

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
