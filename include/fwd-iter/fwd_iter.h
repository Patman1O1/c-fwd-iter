#ifndef FWD_ITER_H
#define FWD_ITER_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif // #ifdef __cplusplus

struct fwd_iter {
    void* (*next)(void* struct_p);
    bool (*has_next)(const void* struct_p);
};

#ifdef __cplusplus
}
#endif // #ifdef __cplusplus

#endif // #ifndef FWD_ITER_H

