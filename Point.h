/* 
 * File:   Point.h
 * Author: localmac4
 *
 * Created on October 27, 2015, 11:32 AM
 */

#ifndef POINT_H
#define	POINT_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#include "Setting.h"

    
    
using namespace std;

class Point{
	int guessing_id;
	int id;
	int x;
	int y;
	int type;

public:
	Point();
	Point(int, int, int, int, int);
	int get_x();
	int get_y();
	int get_id();
	int get_g_id();
	int get_type();
	int set_x(int);
	int set_y(int);
	int set_id(int);
	int set_g_id(int);
	int set_type(int);
	int p_reset();
};




#ifdef	__cplusplus
}
#endif

#endif	/* POINT_H */

