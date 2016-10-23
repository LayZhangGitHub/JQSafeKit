//
//  JQSafeKit.h
//  JQSafeKit
//
//  Created by HaRi on 20/10/16.
//  Copyright © 2016年 HanJunqiang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>


/**
 *  if you want to get the reason that can cause crash, you can add observer notification in AppDelegate.
 *  for example: 
 *
 *  [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(dealwithCrashMessage:) name:JQSafeKitNotification object:nil];
 *  
 *  ===========================================================================
 *  
 *  你如果想要得到导致崩溃的原因，你可以在AppDelegate中监听通知，代码如上面英文所述
 *
 */
#define JQSafeKitNotification @"JQSafeKitNotification"

//user can ignore below define
#define JQSafeKitDefaultReturnNil  @"This framework default is to return nil."
#define JQSafeKitDefaultIgnore     @"This framework default is to ignore this operation to avoid crash."



@interface JQSafeKit : NSObject


/**
 *  become effective . You can call becomeEffective method in AppDelegate didFinishLaunchingWithOptions
 *  
 *  开始生效.你可以在AppDelegate的didFinishLaunchingWithOptions方法中调用becomeEffective方法
 */
+ (void)becomeEffective;


//user can ignore below method <用户可以忽略以下方法>


+ (void)exchangeClassMethod:(Class)anClass method1Sel:(SEL)method1Sel method2Sel:(SEL)method2Sel;

+ (void)exchangeInstanceMethod:(Class)anClass method1Sel:(SEL)method1Sel method2Sel:(SEL)method2Sel;

+ (NSString *)getMainCallStackSymbolMessageWithCallStackSymbolStr:(NSString *)callStackSymbolStr;

+ (void)noteErrorWithException:(NSException *)exception defaultToDo:(NSString *)defaultToDo;


@end
