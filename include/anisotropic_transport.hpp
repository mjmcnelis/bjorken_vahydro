
#include <stdlib.h>

#ifndef ANISOTROPIC_TRANSPORT_H

#define ANISOTROPIC_TRANSPORT_H

double PLa_function(double lambda, double ax, double az, double mbar);
double PTa_function(double lambda, double ax, double az, double mbar);
double Ea_function(double lambda, double ax, double az, double mbar);

double I240_function(double lambda, double ax, double az, double mbar);
double I221_function(double lambda, double ax, double az, double mbar);

double I020_function(double lambda, double ax, double az, double mbar);
double I001_function(double lambda, double ax, double az, double mbar);
double I000_function(double lambda, double ax, double az, double mbar);

double I21_function(double T, double mbar);
double I20_function(double T, double mbar);
double I00_function(double T, double mbar);

#endif