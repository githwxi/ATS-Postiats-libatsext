/* ****** ****** */
/*
##libatsext_libc_header()
*/
/* ****** ****** */

#ifndef LIBATSEXT_LIBC_BASIS_CATS
#define LIBATSEXT_LIBC_BASIS_CATS

/* ****** ****** */
//
#define \
libatsext_libc_gt_ptr_intz(p, z) \
((p>(void*)0)?atsbool_true:atsbool_false)
//
#define \
libatsext_libc_eq_ptr_intz(p, z) \
((p==(void*)0)?atsbool_true:atsbool_false)
//
#define \
libatsext_libc_neq_ptr_intz(p, z) \
((p!=(void*)0)?atsbool_true:atsbool_false)
//
/* ****** ****** */

#endif // ifndef(LIBATSEXT_LIBC_BASIS_CATS)

/* end of [basis.cats] */
