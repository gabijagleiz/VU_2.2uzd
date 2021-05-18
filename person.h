#define pragma once

class Asmuo {

    protected:
    string var, pav;

    public:
    string getname() const {return var;}
	string getsurname() const {return pav;}
    void setname(string vardas) {var = vardas;}
	void setsurname(string pavarde) {pav = pavarde;}

}
