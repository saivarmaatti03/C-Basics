#include <stdio.h>
void main()
{
	int x=10,y=4,z=3;
	x+=y; //y=4 x=14
    y-=z; //z=3 y=1
	z+=x; //x=14 z=17
	y*=x; //x=14 y=14
	x*=z; //z=17 x=238
	
	
	//ouput= x=238 y=14 z=17
	printf("x=%d y=%d z=%d",x, y, z);
}
