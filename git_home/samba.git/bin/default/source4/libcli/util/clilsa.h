#ifndef __DEFAULT_SOURCE4_LIBCLI_UTIL_CLILSA_H__
#define __DEFAULT_SOURCE4_LIBCLI_UTIL_CLILSA_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/libcli/util/clilsa.c  */

NTSTATUS smblsa_sid_privileges(struct smbcli_state *cli, struct dom_sid *sid, 
			       TALLOC_CTX *mem_ctx,
			       struct lsa_RightSet *rights);
NTSTATUS smblsa_sid_check_privilege(struct smbcli_state *cli, 
				    const char *sid_str,
				    const char *privilege);
NTSTATUS smblsa_lookup_sid(struct smbcli_state *cli, 
			   const char *sid_str,
			   TALLOC_CTX *mem_ctx,
			   const char **name);
NTSTATUS smblsa_lookup_name(struct smbcli_state *cli, 
			    const char *name,
			    TALLOC_CTX *mem_ctx,
			    const char **sid_str);
NTSTATUS smblsa_sid_add_privileges(struct smbcli_state *cli, struct dom_sid *sid, 
				   TALLOC_CTX *mem_ctx,
				   struct lsa_RightSet *rights);
NTSTATUS smblsa_sid_del_privileges(struct smbcli_state *cli, struct dom_sid *sid, 
				   TALLOC_CTX *mem_ctx,
				   struct lsa_RightSet *rights);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_LIBCLI_UTIL_CLILSA_H__ */
