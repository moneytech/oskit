/*
 * Copyright (c) 1998, 2001 The University of Utah and the Flux Group.
 * All rights reserved.
 * 
 * This file is part of the Flux OSKit.  The OSKit is free software, also known
 * as "open source;" you can redistribute it and/or modify it under the terms
 * of the GNU General Public License (GPL), version 2, as published by the Free
 * Software Foundation (FSF).  To explore alternate licensing terms, contact
 * the University of Utah at csl-dist@cs.utah.edu or +1-801-585-3271.
 * 
 * The OSKit is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GPL for more details.  You should have
 * received a copy of the GPL along with the OSKit; see the file COPYING.  If
 * not, write to the FSF, 59 Temple Place #330, Boston, MA 02111-1307, USA.
 */
#ifndef _UDP_UDPLIB_H_
#define _UDP_UDPLIB_H_

#include <oskit/io/bufio.h>
#include <netinet/in.h>
#include <oskit/net/ether.h>
#include <oskit/dev/ethernet.h>

oskit_error_t ip_send(const struct in_addr *from,
		      const struct in_addr *to,
		      const struct in_addr *mask,
		      const struct in_addr *gateway,
		      oskit_bufio_t *b,
		      oskit_size_t blen);

oskit_error_t eth_transmit(unsigned char src[],
			   unsigned char dst[],
			   unsigned short type,
			   oskit_bufio_t *b,
			   oskit_size_t blen);

oskit_error_t eth_initdev(oskit_etherdev_t *dev,
			  struct in_addr ipaddr,
			  unsigned char out_addr[ETHER_ADDR_SIZE]);

void myipaddr(struct in_addr *ipaddr);

/*
 * What simple UDP implementation would be complete without a
 * corresponding simple ARP implementation?
 */
oskit_error_t farp_lookup(const struct in_addr *ipaddr,
			 unsigned char out_ethaddr[ETHER_ADDR_SIZE]);
oskit_error_t farp_add(const struct in_addr *ipaddr,
		      const unsigned char ethaddr[ETHER_ADDR_SIZE]);
void farp_remove(const struct in_addr *ipaddr);

/*
 * Upcalls
 */
void		socket_interrupt(oskit_bufio_t *b, oskit_size_t pkt_size);
void		ip_interrupt(oskit_bufio_t *b, oskit_size_t pkt_size);
oskit_error_t	arp_interrupt(oskit_bufio_t *b, oskit_size_t pkt_size);
oskit_error_t	arpresolve(const struct in_addr *ipaddr);

#endif /* _UDP_UDPLIB_H_ */
