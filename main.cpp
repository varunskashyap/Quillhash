#include <iostream>
//#include <stdlib.h>
#include <graphics.h>
#include <vector>
#include <ctime>      
#include <cstdlib>
#include <algorithm> // to use random_shuffle()

#include "selectionSort.h"
#include "bubbleSort.h"
#include "insertionSort.h"
#include "mergeSort.h"
#include "quickSort.h"

using namespace std;

int myrandom (int i){ 
	return rand()%i;
}

int main(){	
	vector<int> data;
	srand(unsigned(time(0)));
		
	for(int i=0; i<100; i++){
		data.push_back(i);
	}
	
	
	int option;
	
	do{
		cout << "Choose" << endl;
		cout << "0 : quit" << endl;
		cout << "1 : Selection Sort" << endl;
		cout << "2 : Bubble Sort" << endl;
		cout << "3 : Insertion Sort" << endl;
		cout << "4 : Merge Sort" << endl;
		cout << "5 : Quick Sort" << endl;
		
		cin >> option;
		random_shuffle( data.begin(), data.end(), myrandom);
		
		switch(option){
			
			case 0:
				break;
							
			case 1 :
				initwindow(500, 500, "SELECTION SORT");
				selectionSort(data);
				delay(1000);
				closegraph();
				break;
				
			case 2 :
				initwindow(500, 500, "BUBBLE SORT");
				bubbleSort(data);
				delay(1000);
				closegraph();
				break;

			case 3 :
				initwindow(500, 500, "INSERTION SORT");
				insertionSort(data);
				delay(1000);
				closegraph();
				break;
				
				
			case 4 :
				initwindow(500, 500);
				mergeSort(data, 0, data.size()-1);
				delay(2000);
				closegraph();
				break;
				
			case 5:
				initwindow(500, 500);
				quickSort(data, 0, data.size()-1);
				delay(2000);
				closegraph();
				break;

			default :
				cout << "Wrong Choice" << endl;
				break;
			
		}
				
	}while(option != 0);

}
