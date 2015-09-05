ARCHS = armv7 arm64

TARGET = iphone:clang:latest:8.0

THEOS_BUILD_DIR = Packages

include @@THEOS@@/makefiles/common.mk

LIBRARY_NAME = @@PROJECTNAME@@
@@PROJECTNAME@@_CFLAGS = -fobjc-arc
@@PROJECTNAME@@_FILES = @@PROJECTNAME@@Button.m
@@PROJECTNAME@@_FRAMEWORKS = Foundation UIKit
@@PROJECTNAME@@_LIBRARIES = aoraki2
@@PROJECTNAME@@_INSTALL_PATH = /Library/Application Support/Aoraki2/Buttons/@@PROJECTNAME@@

include $(THEOS_MAKE_PATH)/library.mk

# uncomment image lines to work with your propose

internal-stage::
	$(ECHO_NOTHING) mkdir -p $(THEOS_STAGING_DIR)/Library/Application\ Support/Aoraki2/Buttons/@@PROJECTNAME@@/$(ECHO_END)
	$(ECHO_NOTHING) cp info.json $(MODULE_BUNDLE_FILES) $(THEOS_STAGING_DIR)/Library/Application\ Support/Aoraki2/Buttons/@@PROJECTNAME@@/$(ECHO_END)
	# $(ECHO_NOTHING) cp @@PROJECTNAME@@Button.png $(MODULE_BUNDLE_FILES) $(THEOS_STAGING_DIR)/Library/Application\ Support/Aoraki2/Buttons/@@PROJECTNAME@@/$(ECHO_END)
	# $(ECHO_NOTHING) cp @@PROJECTNAME@@Button@2x.png $(MODULE_BUNDLE_FILES) $(THEOS_STAGING_DIR)/Library/Application\ Support/Aoraki2/Buttons/@@PROJECTNAME@@/$(ECHO_END)

after-install::
	install.exec "killall -9 backboardd"
