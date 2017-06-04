/* $OpenBSD: version.h,v 1.79 2017/03/20 01:18:59 djm Exp $ */

#define SSH_VERSION	"OpenSSH_7.5"

#define SSH_PORTABLE	"p1"
#define SSH_HPN		"-hpn14v13"
#define SSH_RELEASE	SSH_VERSION SSH_PORTABLE SSH_HPN

#ifdef NERSC_MOD
#undef SSH_RELEASE
#define SSH_AUDITING	"NMOD_3.19"
#define SSH_RELEASE	SSH_VERSION SSH_PORTABLE SSH_HPN SSH_AUDITING
#endif /* NERSC_MOD */
