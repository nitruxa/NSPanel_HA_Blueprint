/* climate_helpers.h */

extern int *getMinMaxPositionByAngle(int, int);
extern float getAngle(int [], int []);
extern float getFullAngle(int, int);
extern float getThermostatRelativePosition(int, int, int, int);
extern float getTemperature(float, int, int, float);
extern int *getCoordinatesOnThermostat(int, int, int, int, int);
extern int *getCoordinatesByTemperature(float, float, float, int, int, int);