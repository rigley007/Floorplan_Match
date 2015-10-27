/* 
 * File:   main.cpp
 * Author: localmac4
 *
 * Created on October 27, 2015, 11:12 AM
 */

#include <cstdlib>
#include <iostream>
#include "Load_Floorplan.h"
#include "Setting.h"
#include "Point_gen.h"
#include <vector>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    vector<Point*> AP;
	load_floorplan("FLOOR.txt");
	//cout<<"hello!"<<endl;
	AP=random_points_gen(20, TYPE_AP);
	cout<<"hello!"<<endl;
	for (int i=0; i<AP.size(); i++){
		cout<< "id: "<<AP[i]->get_id()<<" x: "<<AP[i]->get_x()<< " y: " <<AP[i]->get_y()<<endl;
	}


	cout<<"hello!"<<endl;
	
	system("pause");
	return 0;
}

