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
		string var, pav;    //vardas, pavarde
		int nkiek;          //nd kiekis
		vector <int> nd;  	//namu darbu rezultatas
		int egz;			//egzamino rezultatas
		double vid, med, gr;
	public:    
		Studentas() {var = "", pav = "", nkiek = 0, egz = 0, vid = 0, med = 0, gr = 0;}

		void setStudentas(string, string, int, vector <int>, int, double, double, double);
		string getname() const {return var;}
		string getlastname() const {return pav;}
		int getnumber() const{return nkiek;}
		int getExam() const {return egz;}
		int getFinal() const {return gr;}
		vector <int> gethomework() const {return nd;}

		~Studentas(){} 

		Studentas(const Studentas& other){
			var = other.var;
			pav = other.pav;
			nk = other.nk;
			nd = other.nd;
			egz = other.egz;
			vid = other.vid;
			med = other.med;
			gr = other.gr;
		}

		Studentas& operator= (const Studentas& other){
			
			if(this != &other){
			this.var = other.var;
			this.pav = other.pav;
			this.nk = other.nk;
			this.nd = other.nd;
			this.egz = other.egz;
			this.vid = other.vid;
			this.med = other.med;
			this.gr = other.gr;
		}
		return *this;
	}
}

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

