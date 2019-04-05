#include<vector>
#include <graphics.h>
#include <dos.h>
#include "utility.h"

using namespace std;

void merge(vector<int> &data, int l, int m, int r){ 

    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    vector<int> L, R; 
  
    for (i = 0; i < n1; i++) 
        L.push_back(data.at(l + i)); 
    for (j = 0; j < n2; j++) 
        R.push_back(data.at(m + 1+ j)); 

    i = 0; 
    j = 0; 
    k = l; 
    
	delay(100);
	cleardevice();
	for(int t=0; t<data.size(); t++){
		if(t == l+i+j){
			setfillstyle(1, 4);
			bar(5*t, 500-5*data.at(t), 5*(t+1), 500);
			setfillstyle(1, 15);
		}
		
		else if(t>=l & t<=r){	
			setfillstyle(1, YELLOW);
			bar(5*t, 500-5*data.at(t), 5*(t+1), 500);
			setfillstyle(1, 15);		
		}
		
		else
			bar(5*t, 500-5*data.at(t), 5*(t+1), 500);
	}
    while (i < n1 && j < n2){ 
        if (L[i] <= R[j]){ 
            data[k] = L[i]; 
            i++; 
        } 
        else{ 
            data[k] = R[j]; 
            j++; 
        } 
        k++; 
        
    	delay(100);
		cleardevice();
		for(int t=0; t<data.size(); t++){
			if(t == l+i+j){
				setfillstyle(1, 4);
				bar(5*t, 500-5*data.at(t), 5*(t+1), 500);
				setfillstyle(1, 15);
			}
			
			else if(t>=l & t<=r){	
				setfillstyle(1, YELLOW);
				bar(5*t, 500-5*data.at(t), 5*(t+1), 500);
				setfillstyle(1, 15);		
			}
		
			else
				bar(5*t, 500-5*data.at(t), 5*(t+1), 500);
		}
    
    } 
  

    while (i < n1){ 
        data[k] = L[i]; 
        i++; 
        k++;
		//m+1+j
		delay(100);
		cleardevice();
		for(int t=0; t<data.size(); t++){
			if(t == l+i+j){
				setfillstyle(1, 4);
				bar(5*t, 500-5*data.at(t), 5*(t+1), 500);
				setfillstyle(1, 15);
			}
			
		else if(t>=l & t<=r){	
			setfillstyle(1, YELLOW);
			bar(5*t, 500-5*data.at(t), 5*(t+1), 500);
			setfillstyle(1, 15);		
		}
		
			else
				bar(5*t, 500-5*data.at(t), 5*(t+1), 500);
		}
		 
    } 
  
    while (j < n2){ 
        data[k] = R[j]; 
        j++; 
        k++; 
        
        delay(100);
		cleardevice();
		for(int t=0; t<data.size(); t++){
			if(t == l+i+j){
				setfillstyle(1, 4);
				bar(5*t, 500-5*data.at(t), 5*(t+1), 500);
				setfillstyle(1, 15);
			}
			
		else if(t>=l & t<=r){	
			setfillstyle(1, YELLOW);
			bar(5*t, 500-5*data.at(t), 5*(t+1), 500);
			setfillstyle(1, 15);		
		}
		
			else
				bar(5*t, 500-5*data.at(t), 5*(t+1), 500);
		}
        
    } 
    
} 

void mergeSort(vector<int> &data, int l, int r){ 

	for(int i=0; i<data.size(); i++){
		bar(5*i, 500-5*data.at(i), 5*(i+1), 500);
	}
	
    if (l < r){ 
        int m = l+(r-l)/2; 
  
        mergeSort(data, l, m); 
        mergeSort(data, m+1, r); 
  
        merge(data, l, m, r); 
        
		        
    } 
} 


