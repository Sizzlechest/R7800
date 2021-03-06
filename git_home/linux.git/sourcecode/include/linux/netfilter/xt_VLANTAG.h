/*
 **************************************************************************
 * Copyright (c) 2014, The Linux Foundation. All rights reserved.
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all copies.
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT
 * OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 **************************************************************************
 */

/* VLAN tagging iptables target info. */

#ifndef _XT_VLANTAG_H
#define _XT_VLANTAG_H

#include <linux/types.h>
#include <net/netfilter/nf_conntrack.h>

/*
 * VLAN tagging target structure.
 */
struct xt_vlantag_target_info {
	__u16 omask;
	__u16 oval;
};

/*
 * VLAN tagging match structure.
 */
struct xt_vlantag_match_info {
	__u16 imask;
	__u16 itag;
};

extern bool vlantag_get_target_info(struct nf_conn *ct, u_int16_t *imask, u_int16_t *itag, u_int16_t *omask, u_int16_t *oval);
#endif /* _XT_VLANTAG_H */
