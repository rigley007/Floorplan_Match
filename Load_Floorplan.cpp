#include "Load_Floorplan.h"
#include <iostream>
#include "Setting.h"
#include <stdio.h>
#include <stdlib.h>
using namespace std;



int load_floorplan(char* fname){
	FILE *f = NULL;
	
	if((f = fopen(fname, "r")) == NULL){
		cerr<< "Could not open input file '" << fname<< "'"<<endl;
		return 0;
	}

	floorplan = (int**)malloc(sizeof(int*)*FLOORPLAN_HEIGHT);
	for (int i = 0; i < FLOORPLAN_HEIGHT; i++)
        floorplan[i] = (int*)malloc(sizeof(int)*FLOORPLAN_WIDTH);

	for(int row=0; row< FLOORPLAN_HEIGHT; row++){
		for(int col=0; col<FLOORPLAN_WIDTH; col++){
			fscanf(f, "%d", &floorplan[row][col]);
		}
	}
	return 0;

}


int output_floorplan(){
	for(int row=0; row< FLOORPLAN_HEIGHT; row++){
		for(int col=0; col<FLOORPLAN_WIDTH; col++){
			cout << floorplan[row][col]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}