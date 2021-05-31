#include "lfsr.h"
#include "bit_ops.h"

void lfsr_calculate(uint16_t  *reg) {
    uint16_t  tmp = get_bit(*reg, 0)^get_bit(*reg, 2)^
                    get_bit(*reg, 3)^get_bit(*reg, 5);
    *reg >>= 1;
    set_bit(reg, 15, tmp);
}

// Возвращает бит номер n числа x.
// Предполагается 0 <= n <= 31
uint16_t get_bit(uint16_t x,
                 uint16_t n) {
    return (x & 1 << n) >> n;
}
// Выставляет значение v в бите номер n
// Предполагается что 0 <= n <= 31 и v равно 0 или 1
/*  *x |= (v << n)  не проходит по двум тестам, 
если подаётся бит нуля, то мы не сможем его установить, если бит n единица, 
поэтому изначально мы обнуляем бит n*/ 
void set_bit(uint16_t * x,
             uint16_t n,
             uint16_t v) {  
    *x = (*x & ~ (1<<n)) | (v << n); 
}

// Меняет значение бита номер n на противоположное.
// Предполагается что 0 <= n <= 31
void flip_bit(uint16_t * x,
              uint16_t n) {
    *x ^= 1 << n;
}



