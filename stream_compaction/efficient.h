#pragma once

#include "common.h"

namespace StreamCompaction {
    namespace Efficient {
        StreamCompaction::Common::PerformanceTimer& timer();

        void scan(int n, int *odata, const int *idata);

        int compact(int n, int *odata, const int *idata);
    }

    namespace Radix {
        StreamCompaction::Common::PerformanceTimer& timer();

        void radixSort(int n, int* odata, const int* idata);
    }
    
}
