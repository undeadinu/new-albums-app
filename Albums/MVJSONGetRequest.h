//
//  KOUJSONGetRequest.h
//  URLKit
//
//  Created by Michael Villar on 4/24/12.
//  Copyright (c) 2012 Noaliasing. All rights reserved.
//

#import <Foundation/Foundation.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
@interface MVJSONGetRequest : NSObject

@property (strong, readonly) NSURL *url;
@property (strong, readwrite) NSOperationQueue *operationQueue;

- (id)initWithURL:(NSURL*)url;
- (void)get:(void(^)(NSObject *json))block;

@end
