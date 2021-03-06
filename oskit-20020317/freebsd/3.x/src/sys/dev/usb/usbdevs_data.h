/*	$FreeBSD: src/sys/dev/usb/usbdevs_data.h,v 1.7.2.1 1999/05/08 23:04:58 n_hibma Exp $	*/

/*
 * THIS FILE IS AUTOMATICALLY GENERATED.  DO NOT EDIT.
 *
 * generated from:
 *	NetBSD: usbdevs,v 1.19 1999/01/08 11:18:38 augustss Exp 
 */

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

struct usb_knowndev usb_knowndevs[] = {
	{
	    USB_VENDOR_NEC, USB_PRODUCT_NEC_HUB,
	    0,
	    "NEC",
	    "hub",
	},
	{
	    USB_VENDOR_NEC, USB_PRODUCT_NEC_HUB_B,
	    0,
	    "NEC",
	    "hub",
	},
	{
	    USB_VENDOR_KODAK, USB_PRODUCT_KODAK_DC260,
	    0,
	    "Eastman Kodak",
	    "Digital Science DC260",
	},
	{
	    USB_VENDOR_CATC, USB_PRODUCT_CATC_ANDROMEDA,
	    0,
	    "CATC",
	    "Andromeda hub",
	},
	{
	    USB_VENDOR_UNIXTAR, USB_PRODUCT_UNIXTAR_UTUSB41,
	    0,
	    "Unixtar",
	    "UT-USB41 hub",
	},
	{
	    USB_VENDOR_GENIUS, USB_PRODUCT_GENIUS_NICHE,
	    0,
	    "Genius",
	    "Niche mouse",
	},
	{
	    USB_VENDOR_GENIUS, USB_PRODUCT_GENIUS_FLIGHT2000,
	    0,
	    "Genius",
	    "Flight 2000 joystick",
	},
	{
	    USB_VENDOR_MICROSOFT, USB_PRODUCT_MICROSOFT_INTELLIMOUSE,
	    0,
	    "Microsoft",
	    "IntelliMouse",
	},
	{
	    USB_VENDOR_MICROSOFT, USB_PRODUCT_MICROSOFT_KEYBOARD,
	    0,
	    "Microsoft",
	    "Keyboard",
	},
	{
	    USB_VENDOR_KENSINGTON, USB_PRODUCT_KENSINGTON_MOUSEINABOX,
	    0,
	    "Kensington",
	    "Mouse-in-a-Box",
	},
	{
	    USB_VENDOR_CHERRY, USB_PRODUCT_CHERRY_MY3000KBD,
	    0,
	    "Cherry",
	    "My3000 keyboard",
	},
	{
	    USB_VENDOR_CHERRY, USB_PRODUCT_CHERRY_MY3000HUB,
	    0,
	    "Cherry",
	    "My3000 hub",
	},
	{
	    USB_VENDOR_BTC, USB_PRODUCT_BTC_BTC7932,
	    0,
	    "BTC",
	    "Keyboard with mouse port",
	},
	{
	    USB_VENDOR_PHILIPS, USB_PRODUCT_PHILIPS_DSS,
	    0,
	    "Philips",
	    "DSS 350 Digital Speaker System",
	},
	{
	    USB_VENDOR_PHILIPS, USB_PRODUCT_PHILIPS_HUB,
	    0,
	    "Philips",
	    "hub",
	},
	{
	    USB_VENDOR_CONNECTIX, USB_PRODUCT_CONNECTIX_QUICKCAM,
	    0,
	    "Connectix",
	    "QuickCam",
	},
	{
	    USB_VENDOR_LUCENT, USB_PRODUCT_LUCENT_EVALKIT,
	    0,
	    "Lucent",
	    "USS-720 evaluation kit",
	},
	{
	    USB_VENDOR_ACER, USB_PRODUCT_ACER_ACERSCAN_C310U,
	    0,
	    "Acer Peripherals",
	    "Acerscan C310U",
	},
	{
	    USB_VENDOR_CYPRESS, USB_PRODUCT_CYPRESS_MOUSE,
	    0,
	    "Cypress Semiconductor",
	    "mouse",
	},
	{
	    USB_VENDOR_EPSON, USB_PRODUCT_EPSON_PRINTER3,
	    0,
	    "Epson",
	    "ISD USB Smart Cable",
	},
	{
	    USB_VENDOR_3COM, USB_PRODUCT_3COM_USR56K,
	    0,
	    "3Com",
	    "U.S.Robotics Voice Faxmodem Pro",
	},
	{
	    USB_VENDOR_KONICA, USB_PRODUCT_KONICA_CAMERA,
	    0,
	    "Konica Corporation",
	    "Digital Color Camera",
	},
	{
	    USB_VENDOR_SHUTTLE, USB_PRODUCT_SHUTTLE_EUSB,
	    0,
	    "Shuttle Technology",
	    "E-USB Bridge",
	},
	{
	    USB_VENDOR_JAZZ, USB_PRODUCT_JAZZ_J6502,
	    0,
	    "Jazz",
	    "J-6502 speakers",
	},
	{
	    USB_VENDOR_AKS, USB_PRODUCT_AKS_USBHASP,
	    0,
	    "Aladdin Knowledge Systems",
	    "USB-HASP 0.06",
	},
	{
	    USB_VENDOR_VISION, USB_PRODUCT_VISION_CAMERA,
	    0,
	    "Vision",
	    "VC6452V002 Camera",
	},
	{
	    USB_VENDOR_ATEN, USB_PRODUCT_ATEN_UC1284,
	    0,
	    "ATen",
	    "Parallel printer adapter",
	},
	{
	    USB_VENDOR_PERACOM, USB_PRODUCT_PERACOM_SERIAL1,
	    0,
	    "Peracom",
	    "Serial Converter",
	},
	{
	    USB_VENDOR_EIZO, USB_PRODUCT_EIZO_HUB,
	    0,
	    "EIZO",
	    "hub",
	},
	{
	    USB_VENDOR_EIZO, USB_PRODUCT_EIZO_MONITOR,
	    0,
	    "EIZO",
	    "monitor",
	},
	{
	    USB_VENDOR_AGILER, USB_PRODUCT_AGILER_MOUSE29UO,
	    0,
	    "Agiler",
	    "mouse 29UO",
	},
	{
	    USB_VENDOR_ROCKFIRE, USB_PRODUCT_ROCKFIRE_GAMEPAD,
	    0,
	    "Rockfire",
	    "gamepad 203USB",
	},
	{
	    USB_VENDOR_IOMEGA, USB_PRODUCT_IOMEGA_ZIP100,
	    0,
	    "Iomega",
	    "Zip 100",
	},
	{
	    USB_VENDOR_OMNIVISION, USB_PRODUCT_OMNIVISION_OV511,
	    0,
	    "OmniVision",
	    "OV511 Camera",
	},
	{
	    USB_VENDOR_BELKIN, USB_PRODUCT_BELKIN_F5U002,
	    0,
	    "Belkin",
	    "Parallel printer adapter",
	},
	{
	    USB_VENDOR_LOGITECH, USB_PRODUCT_LOGITECH_M2452,
	    0,
	    "Logitech",
	    "M2452 keyboard",
	},
	{
	    USB_VENDOR_LOGITECH, USB_PRODUCT_LOGITECH_MOUSE1,
	    0,
	    "Logitech",
	    "mouse",
	},
	{
	    USB_VENDOR_CHIC, USB_PRODUCT_CHIC_MOUSE1,
	    0,
	    "Chic Technology",
	    "mouse",
	},
	{
	    USB_VENDOR_MACALLY, USB_PRODUCT_MACALLY_MOUSE1,
	    0,
	    "Macally",
	    "mouse",
	},
	{
	    USB_VENDOR_ADS, USB_PRODUCT_ADS_ENET,
	    0,
	    "ADS Technologies",
	    "Ethernet adapter",
	},
	{
	    USB_VENDOR_ENTREGA, USB_PRODUCT_ENTREGA_CENTRONICS,
	    0,
	    "Entrega",
	    "Centronics connector",
	},
	{
	    USB_VENDOR_ENTREGA, USB_PRODUCT_ENTREGA_SERIAL,
	    0,
	    "Entrega",
	    "DB25 Serial connector",
	},
	{
	    USB_VENDOR_PLX, USB_PRODUCT_PLX_TESTBOARD,
	    0,
	    "PLX",
	    "test board",
	},
	{
	    USB_VENDOR_INSIDEOUT, USB_PRODUCT_INSIDEOUT_EDGEPORT4,
	    0,
	    "Inside Out Networks",
	    "EdgePort/4 serial ports",
	},
	{
	    USB_VENDOR_INTEL, USB_PRODUCT_INTEL_TESTBOARD,
	    0,
	    "Intel",
	    "82930 test board",
	},
	{
	    USB_VENDOR_NEC, 0,
	    USB_KNOWNDEV_NOPROD,
	    "NEC",
	    NULL,
	},
	{
	    USB_VENDOR_KODAK, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Eastman Kodak",
	    NULL,
	},
	{
	    USB_VENDOR_CATC, 0,
	    USB_KNOWNDEV_NOPROD,
	    "CATC",
	    NULL,
	},
	{
	    USB_VENDOR_NANAO, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Nanao",
	    NULL,
	},
	{
	    USB_VENDOR_UNIXTAR, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Unixtar",
	    NULL,
	},
	{
	    USB_VENDOR_GENIUS, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Genius",
	    NULL,
	},
	{
	    USB_VENDOR_MICROSOFT, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Microsoft",
	    NULL,
	},
	{
	    USB_VENDOR_KENSINGTON, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Kensington",
	    NULL,
	},
	{
	    USB_VENDOR_CHERRY, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Cherry",
	    NULL,
	},
	{
	    USB_VENDOR_BTC, 0,
	    USB_KNOWNDEV_NOPROD,
	    "BTC",
	    NULL,
	},
	{
	    USB_VENDOR_PHILIPS, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Philips",
	    NULL,
	},
	{
	    USB_VENDOR_CONNECTIX, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Connectix",
	    NULL,
	},
	{
	    USB_VENDOR_LUCENT, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Lucent",
	    NULL,
	},
	{
	    USB_VENDOR_ACER, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Acer Peripherals",
	    NULL,
	},
	{
	    USB_VENDOR_CYPRESS, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Cypress Semiconductor",
	    NULL,
	},
	{
	    USB_VENDOR_EPSON, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Epson",
	    NULL,
	},
	{
	    USB_VENDOR_3COM, 0,
	    USB_KNOWNDEV_NOPROD,
	    "3Com",
	    NULL,
	},
	{
	    USB_VENDOR_KONICA, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Konica Corporation",
	    NULL,
	},
	{
	    USB_VENDOR_SHUTTLE, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Shuttle Technology",
	    NULL,
	},
	{
	    USB_VENDOR_JAZZ, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Jazz",
	    NULL,
	},
	{
	    USB_VENDOR_AKS, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Aladdin Knowledge Systems",
	    NULL,
	},
	{
	    USB_VENDOR_VISION, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Vision",
	    NULL,
	},
	{
	    USB_VENDOR_ATEN, 0,
	    USB_KNOWNDEV_NOPROD,
	    "ATen",
	    NULL,
	},
	{
	    USB_VENDOR_PERACOM, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Peracom",
	    NULL,
	},
	{
	    USB_VENDOR_EIZO, 0,
	    USB_KNOWNDEV_NOPROD,
	    "EIZO",
	    NULL,
	},
	{
	    USB_VENDOR_AGILER, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Agiler",
	    NULL,
	},
	{
	    USB_VENDOR_ROCKFIRE, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Rockfire",
	    NULL,
	},
	{
	    USB_VENDOR_IOMEGA, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Iomega",
	    NULL,
	},
	{
	    USB_VENDOR_OMNIVISION, 0,
	    USB_KNOWNDEV_NOPROD,
	    "OmniVision",
	    NULL,
	},
	{
	    USB_VENDOR_BELKIN, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Belkin",
	    NULL,
	},
	{
	    USB_VENDOR_LOGITECH, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Logitech",
	    NULL,
	},
	{
	    USB_VENDOR_EIZONANAO, 0,
	    USB_KNOWNDEV_NOPROD,
	    "EIZO Nanao",
	    NULL,
	},
	{
	    USB_VENDOR_CHIC, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Chic Technology",
	    NULL,
	},
	{
	    USB_VENDOR_MACALLY, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Macally",
	    NULL,
	},
	{
	    USB_VENDOR_ADS, 0,
	    USB_KNOWNDEV_NOPROD,
	    "ADS Technologies",
	    NULL,
	},
	{
	    USB_VENDOR_PLX, 0,
	    USB_KNOWNDEV_NOPROD,
	    "PLX",
	    NULL,
	},
	{
	    USB_VENDOR_ENTREGA, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Entrega",
	    NULL,
	},
	{
	    USB_VENDOR_INSIDEOUT, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Inside Out Networks",
	    NULL,
	},
	{
	    USB_VENDOR_INTEL, 0,
	    USB_KNOWNDEV_NOPROD,
	    "Intel",
	    NULL,
	},
	{ 0, 0, 0, NULL, NULL, }
};
