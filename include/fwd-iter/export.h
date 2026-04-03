#ifndef EXPORT_H
#define EXPORT_H

#ifdef __cplusplus
extern "C" {
#endif // #ifdef __cplusplus

#ifndef FWD_ITER_STATIC_DEFINE
#  include <fwd-iter/export_shared.h>
#else
#  include <fwd-iter/export_static.h>
#endif // #ifndef FWD_ITER_STATIC_DEFINE

#ifdef __cplusplus
}
#endif // #ifdef __cplusplus

#endif // #ifndef EXPORT_H

