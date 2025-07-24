#include "export.h"
#include "idataCollector.h"

class PC_Collector : public ICPU_Collector
{
public:
    void getCpuReading(double& val) override;
};
