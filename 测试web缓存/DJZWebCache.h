//
//  WebCache.h
//  SuperGirl
//
//  Created by mac on 16/6/15.
//  Copyright © 2016年 zhx. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^Complete)(NSCachedURLResponse *cacheResponse);

@interface WebCache : NSURLCache

@property (nonatomic, assign) NSInteger cacheTime;
@property (nonatomic, copy) NSString *diskPath;
@property (nonatomic, strong) NSMutableDictionary *responseDictionary;

- (id)initWithMemoryCapacity:(NSUInteger)memoryCapacity diskCapacity:(NSUInteger)diskCapacity diskPath:(NSString *)path cacheTime:(NSInteger)cacheTime;

- (void)cachedResponseForRequest:(NSURLRequest *)request complete:(Complete)complete;

- (void)removeAllCachedResponses;

- (void)removeCachedResponseForRequest:(NSURLRequest *)request;

- (NSString *)cacheFolder;

- (void)deleteCacheFolder;

- (NSString *)cacheFilePath:(NSString *)file;

- (NSString *)cacheRequestFileName:(NSString *)requestUrl;

- (NSString *)cacheRequestOtherInfoFileName:(NSString *)requestUrl;

- (void)dataFromRequest:(NSURLRequest *)request complete:(Complete)complete;



@end
