#pragma once

#include <string>
#include <map>
#include <maya/MTimer.h>
#include <iostream>

using std::string;
using std::map;

using std::cout;
using std::endl;
using std::ostream;

class Timer
{
public:
	long count;
	long double time;
	MTimer timer;
	Timer()
	{
		count = 0;
		time = 0;
	}
};




class Profiler
{
	static map<string, Timer> idToTimer;
	public:

	static void startTimer(string id);

	static void finishTimer(string id);

	static void printReport();

	static void clear();

	//map<string, Timer> Profiler::idToTimer;



};