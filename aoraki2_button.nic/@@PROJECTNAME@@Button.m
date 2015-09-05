//
//  @@PROJECTNAME@@Button.mm
//  @@FULLPROJECTNAME@@
//
//  Created by @@USER@@ on @@DATE@@.
//  Copyright (c) @@YEAR@@ @@USER@@. All rights reserved.
//

#import "@@PROJECTNAME@@Button.h"
#include <substrate.h>

@implementation @@PROJECTNAME@@Button
- (instancetype)init {
	self = [super init];
	__block @@PROJECTNAME@@Button *blocksafeSelf = self;

	self.selectionHandler = ^(CNPGridMenuItem *item) {
		[blocksafeSelf handleBlock];
	};
	return self;
}

// handle your actions here
- (void)handleBlock {
	NSLog(@"<Aoraki> @@PROJECTNAME@@Button Pressed");
}

// aoraki window // i don't know why it's here but i feel it will be useful ;)
- (UIWindow *)aorakiWindow {
	return [objc_getClass("Aoraki2Window") sharedWindow];
}
// aoraki main viewcontroller to present what u want
- (UIViewController *)aorakiMainViewController {
	return [objc_getClass("Aoraki2Window") sharedWindow].rootViewController;
}
// use it if u know when u will use it 
- (void)hideAorakiWindow {
	[objc_getClass("Aoraki2Window") closeWindow];
}
- (void)showAorakiWindow {
	[objc_getClass("Aoraki2Window") openWindow];
}
@end
