#include "Point_gen.h"
#include <vector>
#include <time.h>
#include <iostream>
#include <stdlib.h> 
#include "Setting.h"
using namespace std;

vector<Point*> random_points_gen(int num, int type){
	vector<Point*> Point_list_arr;
	//vector<Point*>::iterator it;
	Point* p_temp = new Point();
	bool sim_checker = false;
	int x=-1, y=-1;
	if(type == TYPE_AP){
		for(int i=0; i<num; i++){
			do{
				sim_checker = false;
				srand(time(NULL));
				x = rand() % 1024; 
				//x = x / 5;
				//x = x*5;
				srand(time(NULL));
				y = rand() % 768; 
				//y = y/5;
				//y = y*5;
				for(int j=0; j < Point_list_arr.size(); j++){
					if(x == Point_list_arr[j]->get_x() && y == Point_list_arr[j]->get_y() || floorplan[y][x] != 1)
						sim_checker = true;
				}

			}while(sim_checker);

			/////.//////
			p_temp->set_id(Point_list_arr.size());
			p_temp->set_x(x);
			p_temp->set_y(y);
			p_temp->set_type(TYPE_AP);
			Point_list_arr.push_back(p_temp);
			cout<<x<<" " <<y<<" "<< Point_list_arr.size()<< endl;
			p_temp = new Point();
		}
		///////
		

	}else if(type == TYPE_DEVICE){

		for(int i=0; i<num; i++){
			do{
				sim_checker = false;
				srand(time(NULL));
				x = rand() % 1024; 
				srand(time(NULL));
				y = rand() % 768; 
				for(int j=0; j < Point_list_arr.size(); j++){
					if(x == Point_list_arr[j]->get_x() && y == Point_list_arr[j]->get_y() && floorplan[y][x] == 1)
						sim_checker = true;
				}

			}while(sim_checker);

			/////.//////
			p_temp->set_id(Point_list_arr.size());
			p_temp->set_x(x);
			p_temp->set_y(y);
			p_temp->set_type(TYPE_DEVICE);
			Point_list_arr.push_back(p_temp);

			p_temp = new Point();

		}
	
	}


	return Point_list_arr;
}