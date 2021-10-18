/*
3.	Input an array of n integers. Find the largest sorted sub array
(sorted array increasing/decreasing and has the largest number of elements)
Ex:
 _____________________________________________
| Input: 2 5 3 4 8 9 7 6 10                   |
| Output: Increasing 3 4 8 9 Decreasing 9 7 6 |
|_____________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex3(int arr[], int n){
	//Your codes here
	int max=1;
	int Increase[n], Decrease[n];
	int IncreasingLength =0, DecreasingLength=0;
	for(int i=0; i<n; i++) {
		if (arr[i+1]>arr[i]) {
			IncreasingLength++;
		}	else {
			IncreasingLength=0;
			if(max < IncreasingLength) {
					max = IncreasingLength;
				}
			}
		if (max < IncreasingLength) {
			max = IncreasingLength;

		}
	}
	printf("%d", max);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex3(testcase, argc);
	
	return 0;
}
