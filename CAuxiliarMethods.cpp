#include "CAuxiliarMethods.h"

vector<string> CAuxiliarMethods::splitLine(string line)
{
    vector<string> coordinates;
    char buffer[100];
    char* token;
    char delimiter[] = " ";
    strcpy(buffer,line.c_str());
    token = strtok(buffer,delimiter);
    if(token != NULL)
    {
        while(token != NULL)
        {
            coordinates.push_back(token);
            token = strtok(NULL, delimiter);
        }
    }
    return coordinates;
}