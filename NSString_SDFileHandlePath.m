//
//  NSString_SDFileHandlePath.m
//  SDAVPlayer
//
//  Created by 郑守栋 on 2017/1/12.
//  Copyright © 2017年 郑守栋. All rights reserved.
//

#import "NSString_SDFileHandlePath.h"

@implementation NSString (NSString_SDFileHandlePath)

+ (NSString *)tempFilePathWithFileName:(NSString *)name {
    return [[NSHomeDirectory() stringByAppendingPathComponent:@"tmp"] stringByAppendingPathComponent:name];
}

+ (NSString *)tempFilePathWithUrlString:(NSString *)urlString {
    NSString *name = [[urlString componentsSeparatedByString:@"/"] lastObject];
    return [[NSHomeDirectory() stringByAppendingPathComponent:@"tmp"] stringByAppendingPathComponent:name];
}

+ (NSString *)cacheFilePathWithName:(NSString *)name {
    NSString *cachePath = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES).firstObject;
    NSString *cacheFolderPath = [cachePath stringByAppendingPathComponent:[NSString stringWithFormat:@"/Cache_Videos/%@",name]];
    return cacheFolderPath;
}

+ (NSString *)cacheFilePathWithUrlString:(NSString *)urlString {
    NSString *name = [[urlString componentsSeparatedByString:@"/"] lastObject];
    NSString *cachePath = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES).firstObject;
    NSString *cacheFolderPath = [cachePath stringByAppendingPathComponent:[NSString stringWithFormat:@"/Cache_Videos/%@",name]];
    return cacheFolderPath;
}

+ (NSString *)fileNameWithUrlString:(NSString *)url {
    return [[url componentsSeparatedByString:@"/"] lastObject];
}

@end
