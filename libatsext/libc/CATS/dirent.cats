/* ****** ****** */
/*
##libats_libc_header()
*/
/* ****** ****** */

#ifndef LIBATSEXT_LIBC_DIRENT_CATS
#define LIBATSEXT_LIBC_DIRENT_CATS

/* ****** ****** */
//
#include <dirent.h>
//
/* ****** ****** */
//
typedef
struct dirent struct_dirent;
//
/* ****** ****** */

#define \
dirent_get_d_name(ent) \
(((struct_dirent*)ent)->d_name)

/* ****** ****** */

#endif // ifndef(LIBATSEXT_LIBC_DIRENT_CATS)

/* end of [dirent.cats] */
