//
//  ALCommonAppDelegate.h
//  ALCommon
//
//  Created by Andrew Little on 10-08-17.
//  Copyright (c) 2010 Little Apps - www.myroles.ca. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "ALTabBarController.h"

@interface ALCommonAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    UIWindow *window;

    ALTabBarController *tabBarController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;


@property (nonatomic, retain) IBOutlet ALTabBarController *tabBarController;

@end

