/* ****** ****** */
/*
##libatsext_libc_header()
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
libatsext_libc_dirent_get_d_name(ent) (((struct_dirent*)ent)->d_name)

/* ****** ****** */

#define libatsext_libc_opendir opendir

#define libatsext_libc_closedir closedir

#define libatsext_libc_readdir readdir

/* ****** ****** */

#endif // ifndef(LIBATSEXT_LIBC_DIRENT_CATS)

/* end of [dirent.cats] */
