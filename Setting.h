/* 
 * File:   Setting.h
 * Author: localmac4
 *
 * Created on October 27, 2015, 11:31 AM
 */

#ifndef SETTING_H
#define	SETTING_H

#ifdef POINT_GEN_H
  #define EXTERN
#else
  #define EXTERN extern
#endif

const int TYPE_AP = 0;
const int TYPE_DEVICE = 1;
const int LANDMARK_GAP = 5;
const int FLOORPLAN_WIDTH = 1024;
const int FLOORPLAN_HEIGHT = 768;
EXTERN int **floorplan;


#endif	/* SETTING_H */

