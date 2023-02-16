#ifndef _CLIMATE_HELPERS_H
#define _CLIMATE_HELPERS_H

int *getMinMaxPositionByAngle(int, int);
float getAngle(int[], int[]);
float getFullAngle(int, int);
float getThermostatRelativePosition(int, int, int, int);
float getTemperature(float, int, int, float);
int *getCoordinatesOnThermostat(int, int, int, int, int);
int *getCoordinatesByTemperature(float, float, float, int, int, int);

#endif