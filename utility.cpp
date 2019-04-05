#include<vector>
#include "utility.h"

using namespace std;

int minIndex(vector<int> data, int start, int end){
	int min = start;
	for(int i=start; i<=end; i++){
		if(data.at(i) < data.at(min)){
			min = i;
		}
	}
	
	return min;
}

void swap(vector<int> &data, int a, int b){
	int temp = data.at(a);
	data.at(a) = data.at(b);
	data.at(b) = temp;
}
