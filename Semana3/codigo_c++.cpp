#include <iostream>
#include <fstream>
#include <math.h>
#include <cmath>

double f(double x){
    double a= 2;
    double cuad= -pow(x,a);
    return exp(cuad);
}

int main(){
    std::ofstream *File;
    File= new std::ofstream[1];
    File[0].open("Mis datos", std::ofstream::trunc);

    for (double i =-20 ; i < 20; i+=0.01){
        double f_prime= (f(i+0.01)- f(i-0.01))/0.02 ;
        File[0] << i  << " " << f_prime << std::endl;

    }
    File[0].close();
    return 0;
}



