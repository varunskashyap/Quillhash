#include<vector>
#include <graphics.h>
#include <dos.h>
#include "utility.h"

using namespace std;

int partition (vector<int> &data, int low, int high) 
{ 
    int pivot = data[high]; 
    int i = (low - 1);  
  
    for (int j = low; j <= high- 1; j++) 
    { 
        if (data[j] <= pivot) 
        { 
            i++;
            
            swap(data, i, j); 
        } 
        
        
    	delay(100);
		cleardevice();
		
		for(int t=0; t<data.size(); t++){
			if(t == i){
				setfillstyle(1, BLUE);
				bar(5*t, 500-5*data.at(t), 5*(t+1), 500);
				setfillstyle(1, 15);
			}
			
			else if(t == j){
				setfillstyle(1, RED);
				bar(5*t, 500-5*data.at(t), 5*(t+1), 500);
				setfillstyle(1, 15);
			}
			
			else if(t>=low && t<=high){
				setfillstyle(1, YELLOW);
				bar(5*t, 500-5*data.at(t), 5*(t+1), 500);
				setfillstyle(1, 15);	
			}
		
			else
				bar(5*t, 500-5*data.at(t), 5*(t+1), 500);
		}    
    
    } 
    swap(data, i+1, high); 
    return (i + 1); 
} 

void quickSort(vector<int> &data, int low, int high) 
{ 
    if (low < high) 
    { 

        int pi = partition(data, low, high); 
 
        quickSort(data, low, pi - 1); 
        quickSort(data, pi + 1, high); 
    } 
} 
