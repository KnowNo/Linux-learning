/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _T_H_RPCGEN
#define _T_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct stringentry {
	char *item;
	struct stringentry *next;
};
typedef struct stringentry stringentry;

typedef stringentry *stringlist;

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_stringentry (XDR *, stringentry*);
extern  bool_t xdr_stringlist (XDR *, stringlist*);

#else /* K&R C */
extern bool_t xdr_stringentry ();
extern bool_t xdr_stringlist ();

#endif /* K&R C */
struct rpcgen_table {
	char	*(*proc)();
	xdrproc_t	xdr_arg;
	unsigned	len_arg;
	xdrproc_t	xdr_res;
	unsigned	len_res;
};

#ifdef __cplusplus
}
#endif

#endif /* !_T_H_RPCGEN */