//
//  NSString_SDFileHandlePath.h
//  SDAVPlayer
//
//  Created by 郑守栋 on 2017/1/12.
//  Copyright © 2017年 郑守栋. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (NSString_SDFileHandlePath)

/** 临时文件路径 */
+ (NSString *)tempFilePathWithFileName:(NSString *)name;
/**  临时文件路径 */
+ (NSString *)tempFilePathWithUrlString:(NSString *)urlString;
/** 缓存文件夹路径 */
+ (NSString *)cacheFilePathWithName:(NSString *)name;
/** 缓存文件夹路径 */
+ (NSString *)cacheFilePathWithUrlString:(NSString *)urlString;
/**  获取网址中的文件名 */
+ (NSString *)fileNameWithUrlString:(NSString *)url;

@end
