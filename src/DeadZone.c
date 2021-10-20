#include "DeadZone.h"

float DeadZoneProcess(float inputSample, float deadZoneValue, float zeroMargin) {
  float functionResult = inputSample;
  float absoluteZeroMargin = fabs(zeroMargin);
  float absoluteDeadZoneValue = fabs(deadZoneValue);
  float absoluteZeroMarginNegative = absoluteZeroMargin * -1;
  float absoluteDeadZoneValueNegative = absoluteDeadZoneValue * -1;
  if ((inputSample <= absoluteZeroMargin) && (inputSample >= absoluteZeroMarginNegative))
    functionResult = 0;
  else {
    if (inputSample > 0)
      functionResult += absoluteDeadZoneValue;
    else if (inputSample < 0)
      functionResult += absoluteDeadZoneValueNegative;
  }
    return functionResult;
}
