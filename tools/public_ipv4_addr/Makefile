#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

include $(TOPDIR)/rules.mk

PKG_NAME:=public_ipv4_addr
PKG_RELEASE:=1

PKG_INSTALL:=1

include $(INCLUDE_DIR)/package.mk

PKG_MAINTAINER:=Karnveer Singh <k.singh@outlook.com>

define Package/public_ipv4_addr
  SECTION:=tools
  CATEGORY:=Utilities
  TITLE:=fetch public ipv4 address utility
  URL:=
endef

define Package/public_ipv4_addr/description
	This tool can be used to fetch the public IPv4 address from userspace.
	curl must be installed
endef

define Build/Compile
	$(TARGET_CC) $(TARGET_CFLAGS) $(TARGET_LDFLAGS) -Wall \
		$(PKG_BUILD_DIR)/fetch_public_ipv4_addr.c -o $(PKG_BUILD_DIR)/$(PKG_NAME)
endef

define Package/public_ipv4_addr/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/public_ipv4_addr $(1)/usr/bin/
endef

$(eval $(call BuildPackage,public_ipv4_addr))
