//Arrays in C 2D
//An array  is a language that allows users to store data  in contagious locations of the computer

#include <stdio.h>

int main(){

	int a,b;
	int scores[4][2] = {{65,92},{84,72},{35,70},{59,67}};
	
		
	for(a=0;a<4;a++){
		for(b=0;b<2;b++){
			
			printf("scores[%d][%d]=%d\n",a,b,scores[a][b]);
		}
			
	}
	



	
	return 0;
}