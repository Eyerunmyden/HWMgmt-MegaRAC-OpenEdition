FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"
DEPENDS += " virtual-media "
RDEPENDS_${PN} += " virtual-media "
SRC_URI_append += "file://0001-Virtual-Media-Master-Session.patch"
SRC_URI_append += "file://0002-Fixed-Eject-Issue.patch"
