/* parser auto-generated by pidl */

#include "includes.h"
#include "bin/default/librpc/gen_ndr/ndr_w32time.h"

static enum ndr_err_code ndr_push_w32time_SyncTime(struct ndr_push *ndr, int flags, const struct w32time_SyncTime *r)
{
	NDR_PUSH_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
		NDR_CHECK(ndr_push_WERROR(ndr, NDR_SCALARS, r->out.result));
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_w32time_SyncTime(struct ndr_pull *ndr, int flags, struct w32time_SyncTime *r)
{
	NDR_PULL_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
		NDR_CHECK(ndr_pull_WERROR(ndr, NDR_SCALARS, &r->out.result));
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_w32time_SyncTime(struct ndr_print *ndr, const char *name, int flags, const struct w32time_SyncTime *r)
{
	ndr_print_struct(ndr, name, "w32time_SyncTime");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "w32time_SyncTime");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "w32time_SyncTime");
		ndr->depth++;
		ndr_print_WERROR(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static enum ndr_err_code ndr_push_w32time_GetNetLogonServiceBits(struct ndr_push *ndr, int flags, const struct w32time_GetNetLogonServiceBits *r)
{
	NDR_PUSH_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
		NDR_CHECK(ndr_push_WERROR(ndr, NDR_SCALARS, r->out.result));
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_w32time_GetNetLogonServiceBits(struct ndr_pull *ndr, int flags, struct w32time_GetNetLogonServiceBits *r)
{
	NDR_PULL_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
		NDR_CHECK(ndr_pull_WERROR(ndr, NDR_SCALARS, &r->out.result));
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_w32time_GetNetLogonServiceBits(struct ndr_print *ndr, const char *name, int flags, const struct w32time_GetNetLogonServiceBits *r)
{
	ndr_print_struct(ndr, name, "w32time_GetNetLogonServiceBits");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "w32time_GetNetLogonServiceBits");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "w32time_GetNetLogonServiceBits");
		ndr->depth++;
		ndr_print_WERROR(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static enum ndr_err_code ndr_push_w32time_QueryProviderStatus(struct ndr_push *ndr, int flags, const struct w32time_QueryProviderStatus *r)
{
	NDR_PUSH_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
		NDR_CHECK(ndr_push_WERROR(ndr, NDR_SCALARS, r->out.result));
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_w32time_QueryProviderStatus(struct ndr_pull *ndr, int flags, struct w32time_QueryProviderStatus *r)
{
	NDR_PULL_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
		NDR_CHECK(ndr_pull_WERROR(ndr, NDR_SCALARS, &r->out.result));
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_w32time_QueryProviderStatus(struct ndr_print *ndr, const char *name, int flags, const struct w32time_QueryProviderStatus *r)
{
	ndr_print_struct(ndr, name, "w32time_QueryProviderStatus");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "w32time_QueryProviderStatus");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "w32time_QueryProviderStatus");
		ndr->depth++;
		ndr_print_WERROR(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static const struct ndr_interface_call w32time_calls[] = {
	{
		"w32time_SyncTime",
		sizeof(struct w32time_SyncTime),
		(ndr_push_flags_fn_t) ndr_push_w32time_SyncTime,
		(ndr_pull_flags_fn_t) ndr_pull_w32time_SyncTime,
		(ndr_print_function_t) ndr_print_w32time_SyncTime,
		{ 0, NULL },
		{ 0, NULL },
	},
	{
		"w32time_GetNetLogonServiceBits",
		sizeof(struct w32time_GetNetLogonServiceBits),
		(ndr_push_flags_fn_t) ndr_push_w32time_GetNetLogonServiceBits,
		(ndr_pull_flags_fn_t) ndr_pull_w32time_GetNetLogonServiceBits,
		(ndr_print_function_t) ndr_print_w32time_GetNetLogonServiceBits,
		{ 0, NULL },
		{ 0, NULL },
	},
	{
		"w32time_QueryProviderStatus",
		sizeof(struct w32time_QueryProviderStatus),
		(ndr_push_flags_fn_t) ndr_push_w32time_QueryProviderStatus,
		(ndr_pull_flags_fn_t) ndr_pull_w32time_QueryProviderStatus,
		(ndr_print_function_t) ndr_print_w32time_QueryProviderStatus,
		{ 0, NULL },
		{ 0, NULL },
	},
	{ NULL, 0, NULL, NULL, NULL }
};

static const char * const w32time_endpoint_strings[] = {
	"ncacn_np:[\\pipe\\srvsvc]", 
	"ncacn_np:[\\pipe\\atsvc]", 
	"ncacn_np:[\\pipe\\browser]", 
	"ncacn_np:[\\pipe\\keysvc]", 
	"ncacn_np:[\\pipe\\wkssvc]", 
};

static const struct ndr_interface_string_array w32time_endpoints = {
	.count	= 5,
	.names	= w32time_endpoint_strings
};

static const char * const w32time_authservice_strings[] = {
	"host", 
};

static const struct ndr_interface_string_array w32time_authservices = {
	.count	= 1,
	.names	= w32time_authservice_strings
};


const struct ndr_interface_table ndr_table_w32time = {
	.name		= "w32time",
	.syntax_id	= {
		{0x8fb6d884,0x2388,0x11d0,{0x8c,0x35},{0x00,0xc0,0x4f,0xda,0x27,0x95}},
		NDR_W32TIME_VERSION
	},
	.helpstring	= NDR_W32TIME_HELPSTRING,
	.num_calls	= 3,
	.calls		= w32time_calls,
	.endpoints	= &w32time_endpoints,
	.authservices	= &w32time_authservices
};
