//
//  @@PROJECTNAME@@Module.h
//  @@FULLPROJECTNAME@@
//
//  Created by @@USER@@ on @@DATE@@.
//  Copyright (c) @@YEAR@@ @@USER@@. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// Aoraki2 uses CNPGridMenu by Carson Perrotti
/*
	Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

*/

// return NO when u finish dismissing your ViewController ( it handles pointInside:withEvent: )
// ( if needed return it to YES ) ( i don't think u will needs it )
extern BOOL isAoraki_MainViewController;

@class CNPGridMenuItem;
typedef void (^SelectionHandler)(CNPGridMenuItem *item);

@interface CNPGridMenuItem : NSObject
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) UIImage *icon;
@property (nonatomic, copy) SelectionHandler selectionHandler;
@end

@interface Aoraki2Window : UIWindow
+ (Aoraki2Window *)sharedWindow;
// method to open Aoraki Window 
- (void)openWindow;
// method to close Aoraki Window 
- (void)closeWindow;
@end

@interface @@PROJECTNAME@@Button : CNPGridMenuItem

@end
