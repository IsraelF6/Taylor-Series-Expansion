#include <iostream>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

      void nfactorial(int n,double& nfact)
	  {
		int i;
		nfact=1.0;
		for (i=1;i<=(2*n);i++)
			nfact=nfact*i;    
      }


	  int powerOfneg(int n) 
	  {
		int neg=1;
		for (int i=1;i<=n;i++)
			neg=-neg;

		return neg;
      }


	  int powerOf2(int n) 
	  {
		int pow= 1;
		for (int i=1;i<=(2*n);i++)
			pow=pow*2;

		return pow;
      }


      double power(double x,int n) 
	  {
		double pow=1.0;
		for (int i=1;i<=2*n;i++)
			pow=pow*x;
		if (pow==0)
			pow==1;

		return pow;
      }

      int main() 
	  {
		int n;
		double PN,exact,term,x,nfact;
		n=13;
		x=3.14159;
		PN=1;
		for (int i=1;i<=n;i++) 
		{
			nfactorial(i,nfact);
			term=(powerOf2(i) * powerOfneg(i)  * power(x,i)) / (nfact);
			PN=PN+term;
		}
		
		exact=cos(2*x);
		std::cout << "x= " << x << " and N= " << n << '\n';
		std::cout << "Taylor series approximation is: " << PN << '\n';
		std::cout << "cos(2x) is: " << exact << '\n';
		std::cout << "error is: " << fabs(exact-PN) << '\n';

      }


	  
