#include <iostream>
#include "dataCollector.h"

int main()
{
    // Your code here
    std::cout<<"Hello, World!"<<std::endl;
    double val = 0;
    PC_Collector collector;
    collector.getCpuReading(val);
    std::cout << "CPU Reading: " << val << std::endl;
    std::string input;
    std::cin>>input;
    return 0;
}