(* ****** ****** *)
(*
##libatsext_libc_header()
*)
(* ****** ****** *)
//
#define
ATS_PACKNAME "LIBATSEXT.libc"
#define
ATS_EXTERN_PREFIX "libatsext_libc_"
//
(* ****** ****** *)

%{#
//
#include \
"libatsext/libc/CATS/dirent.cats"
//
%} (* end of [%{#] *)

(* ****** ****** *)

staload "./../libc_basis.sats"

(* ****** ****** *)
//
absvt0ype DIR = $extype"DIR"
//
absvt0ype dirent = $extype"struct_dirent"
//
(* ****** ****** *)
//
fun
dirent_get_d_name
  (rptr1(dirent)):<> cstring = "mac#%"
//
overload .d_name with dirent_get_d_name
//
(* ****** ****** *)
//
fun
opendir
  (name: string): wptr0(DIR) = "mac#%"
fun
fdopendir
  (fildes: intGte(0)): wptr0(DIR) = "mac#%"
//
(* ****** ****** *)
//
fun
closedir(dirp: wptr1(DIR)): interr = "mac#%"
//
(* ****** ****** *)
//
fun
readdir(dirp: wptr1(DIR)): rptr0(dirent) = "mac#%"
//
fun
readdir_r
(
  dirp: wptr1(DIR)
, entry: wptr1(dirent), result: wptr1(wptr0(dirent))
) : interr = "mac#%" // end of [readdir_r]
//          
(* ****** ****** *)

(* end of [dirent.sats] *)
