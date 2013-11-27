#pragma once

#include <maya/MPoint.h>
#include <maya/MDagPath.h>
#include <vector>
#include "Util.h"

using std::vector;
using namespace util;

class Voxel
{
	MPoint		min;
	MPoint		max;
	MPoint		center;

public:
	Voxel(MPoint _min, MPoint _max);
	~Voxel(void);

	inline MPoint Min()
	{
		return min;
	}

	inline MPoint Max()
	{
		return max;
	}

	bool		intersectsWith(MPoint otherMin, MPoint otherMax);
	bool		intersectsWith(const MDagPath& meshPath,const double halfsSides[3], vector<int>& faceIds) const;
	bool		intersectionsWithRay(const MPoint& src, const MVector& dir, MPoint & nearInt, AxisDirection& nearDir, MPoint farInt, AxisDirection& farDir);
};
