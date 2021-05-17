#include "bit_ops.h"
#include "stdint.h"

// Возвращает бит номер n числа x.
// Предполагается 0 <= n <= 31
unsigned short get_bit(unsigned short x,
                 unsigned short n) {
    return (x & 1 << n) >> n;
}
// Выставляет значение v в бите номер n
// Предполагается что 0 <= n <= 31 и v равно 0 или 1
/*  *x |= (v << n)  не проходит по двум тестам, 
если подаётся бит нуля, то мы не сможем его установить, если бит n единица, 
поэтому изначально мы обнуляем бит n*/ 
void set_bit(unsigned short * x,
             unsigned short n,
             unsigned short v) {  
    *x = (*x & ~ (1<<n)) | (v << n); 
}

// Меняет значение бита номер n на противоположное.
// Предполагается что 0 <= n <= 31
void flip_bit(unsigned short * x,
              unsigned short n) {
    *x ^= 1 << n;
}

