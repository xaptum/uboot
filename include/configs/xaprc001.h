/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Configuration file for the Xaptum XAP-RC-001 board.
 *
 * Copyright (C) 2015 Atmel Corporation
 *                    Wenyou Yang <wenyou.yang@atmel.com>
 * Copyright (C) 2018 Xaptum, Inc.
 */


#ifndef __CONFIG_H
#define __CONFIG_H

#undef CONFIG_CMD_SF
#undef CONFIG_CMD_NAND
#undef CONFIG_SD_BOOT
#undef CONFIG_SPI_BOOT

#include "at91-sama5_common.h"

#define CONFIG_MISC_INIT_R

/* SDRAM */
#define CONFIG_NR_DRAM_BANKS		1
#define CONFIG_SYS_SDRAM_BASE           0x20000000
#define CONFIG_SYS_SDRAM_SIZE		0x10000000

#define CONFIG_SYS_INIT_SP_ADDR \
	(CONFIG_SYS_SDRAM_BASE + 16 * 1024 - GENERATED_GBL_DATA_SIZE)

#define CONFIG_SYS_LOAD_ADDR		0x22000000 /* load address */

/* u-boot env in raw emmc.
 * at91-bootstrap and u-boot in eMMC VFAT partition.
 * Kernel and device tree in /boot on eMMC EXT4 partition.
 */
#define CONFIG_ENV_SIZE		0x4000

#define CONFIG_BOOTCOMMAND \
	"setenv bootargs rw rootwait console=ttyS0,115200 earlyprintk; " \
	"run mender_setup; " \
	"setenv bootargs root=${mender_kernel_root} ${bootargs}; " \
	"ext4load ${mender_uboot_root} 0x21000000 /boot/at91-xaprw001.dtb; " \
	"ext4load ${mender_uboot_root} 0x22000000 /boot/zImage; " \
	"bootz 0x22000000 - 0x21000000; " \
	"run mender_try_to_recover;"

#endif
