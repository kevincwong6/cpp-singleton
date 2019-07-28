// ----------------------------- getSingletonLogger.h --------------------------
#include <iostream>

#ifndef GET_SINGLETON_LOGGER_H
#define GET_SINGLETON_LOGGER_H

class getSingletonLogger
{
    private:
	    getSingletonLogger(); // Private constructor to prevent instantiation    

    public:
		static getSingletonLogger* loggerInstance;
	    static getSingletonLogger* initialize();
};
#endif