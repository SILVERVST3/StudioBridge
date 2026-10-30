#include "CrossfeedProcessor.h"
void CrossfeedProcessor::process(float&l,float&r,float a){float nl=l+r*a; float nr=r+l*a; l=nl; r=nr;}