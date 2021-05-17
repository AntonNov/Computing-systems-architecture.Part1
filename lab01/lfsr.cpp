#include "lfsr.h"
#include "bit_ops.h"
#include <iostream>

void lfsr_calculate(uint16_t  *reg) {
    uint16_t  tmp = get_bit(*reg, 0)^get_bit(*reg, 2)^
                    get_bit(*reg, 3)^get_bit(*reg, 5);
    *reg >>= 1;
    set_bit(reg, 15, tmp);
}

