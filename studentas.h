#define pragma once


class Studentas : Asmuo{
	private:
		int nkiek;          //nd kiekis
		vector <int> nd;  	//namu darbu rezultatas
		int egz;			//egzamino rezultatas
		double vid, med, gr;
	public:    
		Studentas() {var = "", pav = "", nkiek = 0, egz = 0, vid = 0, med = 0, gr = 0;}

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
			var(that.var), pav(that.pav), nkiek(that.nkiek),
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