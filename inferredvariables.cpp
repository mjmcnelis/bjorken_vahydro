
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;
#include "inferredvariables.hpp"
#include "qcd.hpp"




//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//                         INFERRED VARIABLES                       ::
//                                                                  ::
//     Compute the inferred variables (e,p,ut,ux,uy,un) from the    ::
//	   propagated quantities (Ttt,Ttx,Tty,Ttn)  		            ::
//                                                                  ::
//                       get_inferred_variables                     ::
//																	::
//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::


void get_inferred_variables(double Ttt, double Ttx, double Tty, double Ttn, double pl, double pt, double B, double *ut, double *ux, double *uy, double *un, double *e, double *p, double t)
{
	// initial guess for energy density (previous time step value)
	// double estar = *e;
	// double pstar = *p;
	// double cs2star = speedOfSoundSquared(estar);

	// double M0 = Ttt,	M1 = Ttx,	M2 = Tty,	M3 = Ttn;

	// double Mvec2 = M1*M1 + M2*M2 + t*t*M3*M3;

	// double de, f, fprime;

	// int i = 0;
	// int Nmax = 100;
	// double tol = 1.0e-7;

	// since it's a trivial search I don't need any immediate changes


	// find energy density root: newton method
	// do{
	// 	//f = estar + Mvec2/(M0+pstar+Pi) - M0;
	// 	//fprime = 1.0 - cs2star * Mvec2/((M0+pstar+Pi)*(M0+pstar+Pi));   // quick fix
	// 	f = estar - M0;
	// 	fprime = 1.0;

	// 	if(fabs(fprime) == 0.0) fprime = 1.0e-16;

	// 	de = - f / fprime;

	// 	estar += de;

	// 	if(estar <= 0.0) estar = 1.0e-7;

	// 	pstar = equilibriumPressure(estar);
	// 	cs2star = speedOfSoundSquared(estar);

	// 	i++;

	// } while((de/estar > tol) && (i < Nmax));




	// trivial answer:

	*e = Ttt;

	*p = equilibriumPressure(Ttt);

	*ut = 1.0;

	*ux = 0.0;

	*uy = 0.0;

	*un = 0.0;


	// *ut = sqrt((Ttt + pt_macro)/(*e + pt_macro));

	// *ux = Ttx / (*e + pt_macro) / *ut;

	// *uy = Tty / (*e + pt_macro) / *ut;

	// *un = *ut * F;
}















