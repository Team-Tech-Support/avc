#include <stdio.h>
#include "E101.h"
#include <unistd.h>

int main(){
	
	int err;
	short width = 320;
	short height = 240;
	short countW = 0;
	short countH = 0;
	short leftWhite;
	short midWhite;
	short rightWhite;
	
	public void doCamera(short wid, short hei){
		while (true){
	select_IO(0,0);
	open_screen_stream();
	take_picture();
	update_screen();
	totred=0;
	totgreen=0;
	totblue=0;
	countW = 0;
	countH = 0;
	leftWhite = 0;
	midWhite = 0;
	rightWhite = 0;
	
	
		
		while(countW<=wid/3&&countH<15){
			
			leftWhite+=get_pixel(countW,countH,3) // measuring whitness of left block
			countW++;
			
			if(countW>=wid/3){
			countH++;
			countW = 0;	
			}
		}
		countH = 0;
		countW = wid/3
		
		while(countW<=wid/3*2&&countH<15){
			midWhite+=get_pixel(countW,countH,3)  // measuring whitness of mid block
			midRed
			countW++;
			
			if(countW>=wid/3*2){
			countH++;
			countW = wid/3;	
			}
		}
		countH = 0;
		countW = wid/3*2;
		while(countW<=wid&&countH<15){
			rightWhite+=get_pixel(countW,countH,3)  // measuring whitness of right block
			countW++;
			
			if(countW>=wid){
				countH++;
				countW = wid/3*2;
			}
		}
	
	if(leftWhite<midWhite&&leftWhite<rightWhite){
		doLeft();
	}
	else if (midWhite<leftWhite&&midWhite<rightWhite){
		doForward();
	}
	else{
		doRight();
	}
	}
}
}
	

