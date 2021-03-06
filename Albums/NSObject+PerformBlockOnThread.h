//
//  NSObject+PerformBlockOnThread.h
//  SyncKit
//
//  Created by Michaël on 10/5/12.
//  Copyright (c) 2012 Kickoff. All rights reserved.
//

#import <Foundation/Foundation.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
@interface NSObject (PerformBlockOnThread)

- (void)mv_performBlock:(void (^)())block
               onThread:(NSThread*)thread;
- (void)mv_performBlockAndWait:(void (^)())block
                      onThread:(NSThread*)thread;

@end
