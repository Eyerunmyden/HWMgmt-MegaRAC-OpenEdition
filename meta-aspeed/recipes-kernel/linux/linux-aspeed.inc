DESCRIPTION = "Linux kernel for Aspeed"
SECTION = "kernel"
LICENSE = "GPLv2"

PROVIDES += "virtual/kernel"

KCONFIG_MODE="--alldefconfig"

#KSRC ?= "git://github.com/openbmc/linux;protocol=git;branch=${KBRANCH}"
#SRC_URI = "${KSRC}"
SRC_URI += " file://defconfig"

LINUX_VERSION_EXTENSION ?= "-${SRCREV}"

PV = "${LINUX_VERSION}"

inherit kernel
require recipes-kernel/linux/linux-yocto.inc

# From 5.4+ the COPYING file changed
LIC_FILES_CHKSUM = "file://COPYING;md5=bbea815ee2795b2f4230826c0c6b8814"

