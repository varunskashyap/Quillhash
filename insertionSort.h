#include<vector>
#include <graphics.h>
#include <dos.h>
#include "utility.h"

using namespace std;


void insertionSort(vector<int> &data){
	
	int size = data.size();
	
	for(int i=0; i<data.size(); i++){
		bar(5*i, 500-5*data.at(i), 5*(i+1), 500);
	}
	
	for(int i=0; i<size; i++){
		for(int j=i; j>0; j--){
			if(data.at(j) < data.at(j-1)){
//				swap(data, j, j-1);
				
				delay(35);
				cleardevice();
				for(int k=0; k<data.size(); k++){
					
					if(k == j){
						setfillstyle(1, YELLOW);
						bar(5*k, 500-5*data.at(k), 5*(k+1), 500);
						setfillstyle(1, 15);
					}
					else
						bar(5*k, 500-5*data.at(k), 5*(k+1), 500);
				}
				
				swap(data, j, j-1);	
				
			}
		}
	}
	
	delay(35);
	cleardevice();
	for(int k=0; k<data.size(); k++){
		bar(5*k, 500-5*data.at(k), 5*(k+1), 500);
	}
	
}

