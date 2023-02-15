/* climate_helpers.h */

extern int *getMinMaxPositionByAngle(int angle, int thermostat_radius);

extern float getAngle(int *p1, int *p2);

extern float getFullAngle(int minX, int minY);

extern float getThermostatRelativePosition(int x, int y, int minX, int minY);

extern float getTemperature(float thermostatRelativePosition, int minT,
                            int maxT, float step);

extern int *getCoordinatesOnThermostat(int x, int y, int radius, int minX,
                                       int minY);

extern int *getCoordinatesByTemperature(float temperature, float minT,
                                        float maxT, int radius, int minX,
                                        int minY);