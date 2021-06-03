#define pragma once

class Asmuo {

    protected:
    	string var, pav;

    public:
	virtual ~Asmuo() = 0;
    	string getname() const {return var;}
	string getsurname() const {return pav;}
    	void setname(string vardas) {var = vardas;}
	void setsurname(string pavarde) {pav = pavarde;}

}

inline Asmuo::~Asmuo() {}
