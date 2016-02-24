// TKalkulator.h

#pragma once

using namespace System;

namespace TKalkulator {

  public ref class TKalkulator1
	{
		// TODO: Add your methods for this class here.
	private:
	double arg1, arg2, wynik;
	wchar_t operacja;
	int poprawna;
	literal char plus = '+';
	literal char minus = '-';
	literal char mnoz = '*';
	literal char dziel = '/';
public:
	TKalkulator1 (double a,double b, wchar_t c):
	   arg1(a),arg2(b),operacja(c)	{}
    
	TKalkulator1 (): arg1(1),arg2(1),operacja('+')	{}
	
	void setarg1 (double a_)	{   arg1 = a_;}
	double getarg1()			{	return arg1; }
	
	void setarg2 (double b_)	{	arg2 = b_;}
	double getarg2()			{	return arg2; }
	
	void setoper (wchar_t c_)	{	operacja = c_;}
	wchar_t getoper()			{	return operacja; }

	double getwynik()			{	return wynik; }
	
  int wyniki()
  { poprawna = 1;
	switch (operacja)
	{ case plus : wynik = arg1 + arg2;	break;
	  case minus : wynik = arg1 - arg2;	break;
	  case mnoz : wynik = arg1 * arg2;	break;
	  case dziel : arg2!=0 ? wynik=arg1/arg2 : poprawna=3; break;
	  default: poprawna = 2;
	 }
	return poprawna;
  }
  String^ info()
  { if (poprawna==1)
	 return getarg1()+L" "+getoper()+L" "+getarg2()+L" = "+getwynik();
	else if (poprawna==2)
     return L"Operacja "+getoper()+L" jest niepoprawna.";
    else
     return L"Argument 2 równy "+getarg2()+L" dzielenie przez zero.";
  } 
  };
}
