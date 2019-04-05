#include <vector>
#include <graphics.h>
#include <dos.h>
#include "utility.h"

using namespace std;

//inline void swap(vector<int> &data, int a, int b);
//inline int minIndex(vector<int> data, int start, int end);

void selectionSort(vector<int> &data){
	int size = data.size();
	setfillstyle(1, 15);
	
	for(int i=0; i<data.size(); i++){
		bar(5*i, 500-5*data.at(i), 5*(i+1), 500);
	}
	
	for(int i=0; i<size; i++){
		int min = minIndex(data, i, size-1);
		
		for(int j=0; j<data.size(); j++){	
			if(j == min){
				setfillstyle(1, RED);
				bar(5*j, 500-5*data.at(j), 5*(j+1), 500);
				setfillstyle(1, 15);
			}
			
			else if(j==i){
				setfillstyle(1, GREEN);
				bar(5*j, 500-5*data.at(j), 5*(j+1), 500);
				setfillstyle(1, 15);				
			}
			
			else
				bar(5*j, 500-5*data.at(j), 5*(j+1), 500);
		}
		swap(data, i, min);
		
		delay(250);
		cleardevice();

	}
	
	
	for(int i=0; i<data.size(); i++){
		bar(5*i, 500-5*data.at(i), 5*(i+1), 500);
	}
	
}


