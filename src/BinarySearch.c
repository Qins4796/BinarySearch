#include "BinarySearch.h"
#include <stdio.h>

int binarySearch(int target, int array[], int startIndex, int endIndex){
	int midIndex;
	midIndex = ((endIndex - startIndex) / 2) + startIndex;
	
	if(midIndex == startIndex || midIndex == endIndex ){
		if(target == array[midIndex])return midIndex;
		else if(target == array[midIndex+1])return midIndex+1;
		else return -1;
	}
	if(target > array[midIndex]){ // go right
		midIndex++;
		binarySearch(target,array,midIndex,endIndex);
	}
	else if(target < array[midIndex]){ // go left
		midIndex--;
		binarySearch(target,array,startIndex,midIndex);
	}
}