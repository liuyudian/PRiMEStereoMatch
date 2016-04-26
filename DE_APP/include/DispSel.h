/*---------------------------------------------------------------------------
   DispSel.h - Disparity Selection Header
  ---------------------------------------------------------------------------
   Author: Charles Leech
   Email: cl19g10 [at] ecs.soton.ac.uk
  ---------------------------------------------------------------------------*/
#include "ComFunc.h"

#define DOUBLE_MAX 1e10

class DispSel
{
public:
	DispSel(void);
	~DispSel(void);

	void CVSelect(Mat* costVol, const int maxDis, Mat& dispMap);
};

