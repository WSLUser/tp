//
// Generated By: dol2asm
// Translation Unit: MSL_Common/Src/mem
//

#include "MSL_C/MSL_Common/Src/mem.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

unsigned char* __memrchr(unsigned char*, unsigned char, size_t);
void* memchr(unsigned char*, int, size_t);
void* memmove(void* dst, const void* src, size_t len);

//
// External References:
//

void __copy_longs_rev_unaligned(void* dst, const void* src, size_t len);
void __copy_longs_unaligned(void* dst, const void* src, size_t len);
void __copy_longs_rev_aligned(void* dst, const void* src, size_t len);
void __copy_longs_aligned(void* dst, const void* src, size_t len);

//
// Declarations:
//

/* 8036608C-803660D8 3609CC 004C+00 0/0 19/19 5/5 .text            memcmp */
int memcmp(const void* __s1, const void* __s2, size_t __n) {
    const unsigned char* val1 = ((const unsigned char*)__s1 - 1);
    const unsigned char* val2 = ((const unsigned char*)__s2 - 1);

    size_t size = __n + 1;
    while (--size > 0) {
        if (*++val1 != *++val2) {
            return val1[0] < val2[0] ? -1 : 1;
        }
    }

    return 0;
}

/* 803660D8-80366104 360A18 002C+00 0/0 1/1 0/0 .text            __memrchr */
unsigned char* __memrchr(unsigned char* s, unsigned char c, size_t n) {
    int n_count;
    size_t char_check;

    char_check = (unsigned char)c;
    s = &s[n];
    n_count = n + 1;
    while (--n_count) {
        if (*--s == char_check) {
            return s;
        }
    }

    return NULL;
}

/* 80366104-80366130 360A44 002C+00 0/0 1/1 0/0 .text            memchr */
void* memchr(unsigned char* s, int c, size_t n) {
    int n_count;
    size_t char_check;

    char_check = (unsigned char)c;
    s = &s[-1];
    n_count = n + 1;
    while (--n_count) {
        if (*++s == char_check) {
            return s;
        }
    }

    return NULL;
}

/* 80366130-803661FC 360A70 00CC+00 0/0 2/2 0/0 .text            memmove */
void* memmove(void* dst, const void* src, size_t len) {
    unsigned char* csrc;
    unsigned char* cdst;

    int reverse = (unsigned int)src < (unsigned int)dst;

    if (len >= 32) {
        if (((unsigned int)dst ^ (unsigned int)src) & 3) {
            if (!reverse) {
                __copy_longs_unaligned(dst, src, len);
            } else {
                __copy_longs_rev_unaligned(dst, src, len);
            }
        } else {
            if (!reverse) {
                __copy_longs_aligned(dst, src, len);
            } else {
                __copy_longs_rev_aligned(dst, src, len);
            }
        }

        return dst;
    } else {
        if (!reverse) {
            csrc = ((unsigned char*)src) - 1;
            cdst = ((unsigned char*)dst) - 1;
            len++;

            while (--len > 0) {
                *++cdst = *++csrc;
            }
        } else {
            csrc = (unsigned char*)src + len;
            cdst = (unsigned char*)dst + len;
            len++;

            while (--len > 0) {
                *--cdst = *--csrc;
            }
        }
    }

    return dst;
}
