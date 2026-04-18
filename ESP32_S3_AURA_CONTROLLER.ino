#include <Arduino.h>
#define CHANNELS 8
int pumps[CHANNELS]={4,5,6,7,8,9,10,11};
void setup(){for(int i=0;i<CHANNELS;i++){pinMode(pumps[i],OUTPUT);}}
void loop(){}
