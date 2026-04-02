#ifndef EXPORT_H
#define EXPORT_H

#ifdef __cplusplus
extern "C" {
#endif // #ifdef __cplusplus

#ifndef C_FWD_ITER_STATIC_DEFINE
#  include <c_fwd_iter/export_shared.h>
#else
#  include <c_fwd_iter/export_static.h>
#endif // #ifndef C_FWD_ITER_STATIC_DEFINE

#ifdef __cplusplus
}
#endif // #ifdef __cplusplus

#endif // #ifndef EXPORT_H

