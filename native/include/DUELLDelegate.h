//
//  DUELLDelegate.h
//
//  Created by Andreas Hanft on 07/01/15.
//  Copyright (c) 2015 GameDuell GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol DUELLDelegate <NSObject>

@optional
  - (void)applicationWillResignActive:(UIApplication *)application;
  - (void)applicationDidEnterBackground:(UIApplication *)application;
  - (void)applicationWillEnterForeground:(UIApplication *)application;
  - (void)applicationDidBecomeActive:(UIApplication *)application;
  - (void)applicationWillTerminate:(UIApplication *)application;
  - (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

@end