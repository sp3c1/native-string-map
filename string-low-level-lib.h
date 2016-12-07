#ifndef STRINGLOWLEVELLIB_H
#define STRINGLOWLEVELLIB_H

//#include <vector>
#include <map>
#include <regex>
#include "sys/timeb.h"

#include <iostream>

#ifdef TARGET_OS_MAC
    #include "sys/types.h" //for time
#endif

class stringLowLevelLib{

    public:
        //std::vector<std::string> strVec;
        std::map< long long int, std::string> strVec;

        long long int pushVector(const std::string text);
        void appendVector(const long long int index, const std::string text);

        std::string lookUpVector(const long long int index);
        bool regexVector(const long long int index, const  char regex[]);

        int removeVector(const long long int index);
        std::string chunkData(const long long int index, int start, int end);

        int size();
        int sizeAt(const long long int index);
        bool hasAt(const long long int index);

        void clear();

        stringLowLevelLib();
        ~stringLowLevelLib();

};

#endif