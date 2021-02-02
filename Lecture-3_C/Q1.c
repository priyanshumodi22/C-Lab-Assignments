#include<stdio.h>

#define printf __mingw_printf 
//MINGW compiler has inherent issues with long double so I have used a way around.

int main(){
	char a = 'x';
	short int b = 10;
	int c = 8;
	long d = 11211231;
	long long e = 444242432421421;
	float f = 0.5;
	double g = 0.3123;
	long double h = 0.12369823;

	printf("%c\n", a );
	printf("%hi\n", b ); 
	printf("%d\n", c ); 
	printf("%ld\n", d ); 
	printf("%lld\n", e ); 
	printf("%f\n", f ); 
	printf("%lf\n", g ); 
	printf("%Lf\n", h ); 
  return 0;
}