#include "Point.h"


using namespace std;

int Point::get_x(){
	return x;
}

int Point::get_y(){
	return y;
}

int Point::get_id(){
	return id;
}

int Point::get_g_id(){
	return guessing_id;
}

int Point::get_type(){
	return type;
}

int Point::set_x(int c_x){
	x = c_x;
	return 0;
}

int Point::set_y(int c_y){
	y = c_y;
	return 0;
}

int Point::set_id(int s_id){
	id = s_id;
	return 0;
}

int Point::set_g_id(int g_id){
	guessing_id = g_id;
	return 0;
}

int Point::set_type(int t){
	type = t;
	return 0;
}

int Point::p_reset () {
  guessing_id = -1;
  id = -1;
  x = -1;
  y = -1;
  type = -1;
  return 0;
}

Point::Point () {
  guessing_id = -1;
  id = -1;
  x = -1;
  y = -1;
  type = -1;
}

Point::Point (int g_id, int m_id, int c_x, int c_y, int t) {
  guessing_id = g_id;
  id = m_id;
  x = c_x;
  y = c_y;
  type = t;
}


