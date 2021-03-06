#ifndef UTILITIES_MINMAX_H
#define UTILITIES_MINMAX_H

#define MINMAX(value, min, max) value = ((value) < (min)) ? (min) : ((value) > (max) ? (max) : (value))

#define NORMALIZE_ANGLE180(angle) angle = ((angle) > 180) ? ((angle) - 360) : (((angle) < -180) ? (angle) + 360 : angle)

#define minmax_refresh(a, min, max) (\
        if((a) < (min)) (min) = (a);\
				if((a) > (max)) (max) = (a);)
	
#endif
