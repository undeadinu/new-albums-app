//
//  MVAlbumsRequest.h
//  Albums
//
//  Created by Michaël on 9/16/12.
//  Copyright (c) 2012 Michael Villar. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MVAlbumsRequest;
@protocol MVContextSource;

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
@protocol MVAlbumsRequestDelegate
- (void)albumsRequestDidFinish:(MVAlbumsRequest*)request
          didChangeProgression:(int)nbFetchedArtists;
- (void)albumsRequestDidFinish:(MVAlbumsRequest*)request;
@end

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
@interface MVAlbumsRequest : NSObject

@property (strong, readonly) NSSet *artistIds;
@property (weak, readwrite) NSObject <MVAlbumsRequestDelegate> *delegate;

- (id)initWithArtistIds:(NSSet*)artistIds
         operationQueue:(NSOperationQueue*)operationQueue
          contextSource:(NSObject<MVContextSource>*)contextSource;
- (void)fetch;

@end
