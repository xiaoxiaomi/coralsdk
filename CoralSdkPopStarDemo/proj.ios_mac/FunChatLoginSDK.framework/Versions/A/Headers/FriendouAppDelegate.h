//
//  FriendouAppDelegate.h
//  Friendou_SDK_Simple
//
//  Created by zheng xiaolin on 13-11-19.
//  Copyright (c) 2013年 zheng xiaolin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FriendouAppDelegate : NSObject

-(void)FD_didAuthorizeSuccessNotification:(NSDictionary *)userinfo;
-(void)FD_didCancelAuthorizeNotification;
@end
