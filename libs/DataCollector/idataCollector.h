#include "export.h"

class DATA_COLLECTOR_API ICPU_Collector
{
public:
    virtual ~ICPU_Collector() {}
    virtual void getCpuReading(double& val) = 0;
};

