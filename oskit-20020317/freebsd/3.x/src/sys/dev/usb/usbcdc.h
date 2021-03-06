/*	$NetBSD: usbcdc.h,v 1.3 1999/01/03 01:09:18 augustss Exp $	*/
/*	$FreeBSD: src/sys/dev/usb/usbcdc.h,v 1.1.2.1 1999/05/08 23:04:57 n_hibma Exp $	*/

/*
 * Copyright (c) 1998 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Lennart Augustsson (augustss@carlstedt.se) at
 * Carlstedt Research & Technology.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *        This product includes software developed by the NetBSD
 *        Foundation, Inc. and its contributors.
 * 4. Neither the name of The NetBSD Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _USBCDC_H_
#define _USBCDC_H_

#define UDESCSUB_CDC_HEADER	0x00	/* Header */
#define UDESCSUB_CDC_CM		0x01	/* Call Management */
#define UDESCSUB_CDC_ACM	0x02	/* Abstract Control Model */
#define UDESCSUB_CDC_DLM	0x03	/* Direct Line Management */
#define UDESCSUB_CDC_TRF	0x04	/* Telephone Ringer */
#define UDESCSUB_CDC_TCLSR	0x05	/* Tel. Call and Line State Rep. Cap. */
#define UDESCSUB_CDC_UNION	0x06	/* Union */
#define UDESCSUB_CDC_CS		0x07	/* Country Selection */
#define UDESCSUB_CDC_TOM	0x08	/* Telephone Operational Modes */
#define UDESCSUB_CDC_USBT	0x09	/* USB Terminal */
#define UDESCSUB_CDC_NCT	0x0a	/* Network Channel Terminal */
#define UDESCSUB_CDC_PU		0x0b	/* Protocol Unit */
#define UDESCSUB_CDC_EU		0x0c	/* Extention Unit */
#define UDESCSUB_CDC_MCM	0x0d	/* Multi-Channel Management */
#define UDESCSUB_CDC_CCM	0x0e	/* CAPI Control Management */
#define UDESCSUB_CDC_EN		0x0f	/* Ethernet Networking */
#define UDESCSUB_CDC_AN		0x10	/* ATM Networking */


typedef struct {
	uByte		bLength;
	uByte		bDescriptorType;
	uByte		bDescriptorSubtype;
} usb_cdc_generic_descriptor_t;

typedef struct {
	uByte		bLength;
	uByte		bDescriptorType;
	uByte		bDescriptorSubtype;
	uWord		bcdCDC;
} usb_cdc_header_descriptor_t;

typedef struct {
	uByte		bLength;
	uByte		bDescriptorType;
	uByte		bDescriptorSubtype;
	uByte		bmCapabilities;
#define USB_CDC_CM_DOES_CM		0x01
#define USB_CDC_CM_CM_OVER_DATA		0x02
	uByte		bDataInterface;
} usb_cdc_cm_descriptor_t;

typedef struct {
	uByte		bLength;
	uByte		bDescriptorType;
	uByte		bDescriptorSubtype;
	uByte		bmCapabilities;
#define USB_CDC_ACM_HAS_FEATURE		0x01
#define USB_CDC_ACM_HAS_LINE		0x02
#define USB_CDC_ACM_HAS_BREAK		0x04
#define USB_CDC_ACM_HAS_NETWORK_CONN	0x08
} usb_cdc_acm_descriptor_t;

typedef struct {
	uByte		bLength;
	uByte		bDescriptorType;
	uByte		bDescriptorSubtype;
	uByte		bMasterInterface;
	uByte		bSlaveInterface[1];
} usb_cdc_union_descriptor_t;

#define UCDC_SEND_ENCAPSULATED_COMMAND	0x00
#define UCDC_GET_ENCAPSULATED_RESPONSE	0x01
#define UCDC_SET_COMM_FEATURE		0x02
#define UCDC_GET_COMM_FEATURE		0x03
#define  UCDC_ABSTRACT_STATE		0x01
#define  UCDC_COUNTRY_SETTING		0x02
#define UCDC_CLEAR_COMM_FEATURE		0x04
#define UCDC_SET_LINE_CODING		0x20
#define UCDC_GET_LINE_CODING		0x21

typedef struct {
	uWord	wState;
#define UCDC_IDLE_SETTING		0x0001
#define UCDC_DATA_MULTIPLEXED		0x0002
} usb_cdc_abstract_state_t;

typedef struct {
	uDWord	dwDTERate;
	uByte	bCharFormat;
#define UCDC_STOP_BIT_1			0
#define UCDC_STOP_BIT_1_5		1
#define UCDC_STOP_BIT_2			2
	uByte	bParityType;
#define UCDC_PARITY_NONE		0
#define UCDC_PARITY_ODD			1
#define UCDC_PARITY_EVEN		2
#define UCDC_PARITY_MARK		3
#define UCDC_PARITY_SPACE		4
	uByte	bDataBits;
} usb_cdc_line_state_t;

typedef struct {
	uByte	bmRequestType;
#define UCDC_NOTIFICATION		0xa1
	uByte	bNotification;
#define UCDC_N_NETWORK_CONNECTION	0x00
#define UCDC_N_RESPONSE_AVAILABLE	0x01
#define UCDC_N_AUX_JACK_HOOK_STATE	0x08
#define UCDC_N_RING_DETECT		0x09
#define UCDC_N_SERIAL_STATE		0x20
#define UCDC_N_CALL_STATE_CHANGED	0x28
#define UCDC_N_LINE_STATE_CHANGED	0x29
#define UCDC_N_CONNECTION_SPEED_CHANGE	0x2a
	uWord	wValue;
	uWord	wIndex;
	uWord	wLength;
	uByte	data[16];
} usb_cdc_notification_t;
#define UCDC_NOTIFICATION_LENGTH 8

#endif /* _USBCDC_H_ */
