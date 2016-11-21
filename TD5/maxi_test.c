#include"/usr/include/CUnit/CUnit.h"
#include"/usr/include/CUnit/Basic.h"
#include"maxi.h"
#include<assert.h>

int main(void){
	int a,b;
	a=0;
	b=2;
	assert(max(a,b)==2);
	
	a=0;
	b=-2;
	assert(max(a,b)==0);	

	a=2;
	b=2;
	assert(max(a,b)==2);
}
