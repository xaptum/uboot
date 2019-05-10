/* This file is adopted from an auto-generated file from the meta-mender
   layer.
*/

/* Shell variables */
#define MENDER_BOOT_PART_NUMBER 1
#define MENDER_BOOT_PART_NUMBER_HEX 1
#define MENDER_ROOTFS_PART_A_NUMBER 2
#define MENDER_ROOTFS_PART_A_NUMBER_HEX 2
#define MENDER_ROOTFS_PART_B_NUMBER 3
#define MENDER_ROOTFS_PART_B_NUMBER_HEX 3
#define MENDER_UBOOT_STORAGE_INTERFACE "mmc"
#define MENDER_UBOOT_STORAGE_DEVICE 0

/* BB variables. */
#define MENDER_STORAGE_DEVICE_BASE "/dev/mmcblk0p"
#define MENDER_UBOOT_ENV_STORAGE_DEVICE_OFFSET_1 0x100000
#define MENDER_UBOOT_ENV_STORAGE_DEVICE_OFFSET_2 0x200000
#define MENDER_ROOTFS_PART_A_NAME "/dev/mmcblk0p2"
#define MENDER_ROOTFS_PART_B_NAME "/dev/mmcblk0p3"
#define MENDER_MTD_UBI_DEVICE_NAME ""

/* For sanity checks. */
#define MENDER_BOOTENV_SIZE 0x4000
#undef MENDER_BOOTENV_RANGE

/* These are actually not used in the current setup but still populated
   according to xaprw001 configuration
*/
#define MENDER_BOOT_KERNEL_TYPE "bootz"
#define MENDER_KERNEL_NAME "zImage"
#define MENDER_DTB_NAME "at91-xaprc.dtb"
#define MENDER_UBOOT_PRE_SETUP_COMMANDS ""
#define MENDER_UBOOT_POST_SETUP_COMMANDS ""
