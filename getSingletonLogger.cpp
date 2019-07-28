#include <iostream>
#include "getSingletonLogger.h"

// --------------------------- getSingletonLogger.cpp --------------------------
getSingletonLogger *getSingletonLogger::loggerInstance = NULL;

getSingletonLogger* getSingletonLogger::initialize()
{
	if (NULL == loggerInstance)
	{
		loggerInstance = new getSingletonLogger();
	}

	return loggerInstance;
}

getSingletonLogger::getSingletonLogger()
{

}