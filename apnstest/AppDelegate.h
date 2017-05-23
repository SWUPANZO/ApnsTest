//
//  AppDelegate.h
//  apnstest
//
//  Created by 앨리스 on 2017. 5. 18..
//  Copyright © 2017년 앨리스. All rights reserved.
//

@import UIKit;
@import Firebase;
@import FirebaseMessaging;
@import FirebaseInstanceID;
@import UserNotifications;

@interface AppDelegate : UIResponder<UIApplicationDelegate, FIRMessagingDelegate>

@property(nonatomic, strong) UIWindow *window;

@end
