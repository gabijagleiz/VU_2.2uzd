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
#include "person.h"

using namespace std;
using namespace std::chrono;



class Studentas : public Asmuo {
	private:
		int nkiek;          //nd kiekis
		vector <int> nd;  	//namu darbu rezultatas
		int egz;			//egzamino rezultatas
		double vid, med, gr;
	public:    
		Studentas() {Asmuo::var = "", Asmuo::pav = "", nkiek = 0, egz = 0, vid = 0, med = 0, gr = 0;}

		int getnumber() const{return nkiek;}
		int getExam() const {return egz;}
		int getFinal() const {return gr;}
		vector <int> gethomework() const {return nd;}

		void setnumber(int kiekis) {nkiek = kiekis;}
		void setexam(int egzaminas) {egz = egzaminas;}
		void setfinal(double galutinisrez) {gr = galutinisrez;}
		void sethomework(vector <int> namudarbas) {nd = namudarbas;}
	

		~Studentas(){} //Destructor

		// Copy Constructor
		Studentas(const Studentas& that):
			nkiek(that.nkiek),
			nd(that.nd), egz(that.egz), gr(that.gr) {}
		

		// copy assignment Operator
		Studentas& operator= (const Studentas& that){
			
			var = that.var;
			pav = that.pav;
			nkiek = that.nkiek;
			nd = that.nd;
			egz = that.egz;
			gr = that.gr;
		return *this;
	}
};




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
