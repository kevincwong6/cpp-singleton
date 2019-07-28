// ------------------------------------- testSigleton.cpp ---------------------
#include <iostream>
#include "getSingletonLogger.h"

using namespace std;
int main()
{
	//getSingletonLogger *getSingletonLogger::loggerInstance = NULL;
	getSingletonLogger *loggerInstance1 = getSingletonLogger::initialize();
	getSingletonLogger *loggerInstance2 = getSingletonLogger::initialize();
    
	cout << loggerInstance1 << endl;
	cout << loggerInstance2 << endl;
}
