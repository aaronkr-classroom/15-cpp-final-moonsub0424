#pragma once
// Intl.h

#ifndef GUARD_Intl_h
#define GUARD_Intl_h

#include <iostream>

#include "Core.h"

using namespace std;

class Intl : public Core {
public:
	Intl() : toeic(0) {};
	Intl(istream& is) { read(is); };
	double grade() const;
	istream& read(istream&);

private:
	double toeic; // 졸업 논문
	Intl* clone() const { return new Intl(*this); }
};

#endif
