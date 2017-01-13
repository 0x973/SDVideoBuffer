//
//  SDDownloadManager.h
//  SDAVPlayer
//
//  Created by 郑守栋 on 2017/1/12.
//  Copyright © 2017年 郑守栋. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@class SDDownloadManager;

@protocol SDDownloadManagerDelegate <NSObject>

@optional

/** 没有完整的缓存文件，告诉播放器自己去用 网络地址 进行播放 */
- (void)didNoCacheFileWithManager:(SDDownloadManager *)manager;

/** 已经存在下载好的这个文件了，告诉播放器可以直接利用filePath播放 */
-(void)didFileExistedWithManager:(SDDownloadManager *)manager Path:(NSString *)filePath;

/** 开始下载数据(包括长度和类型) */
- (void)didStartReceiveManager:(SDDownloadManager *)manager VideoLength:(NSUInteger)videoLength;

/** 正在下载 */
- (void)didReceiveManager:(SDDownloadManager *)manager Progress:(CGFloat)progress;

/** 完成下载 */
- (void)didFinishLoadingWithManager:(SDDownloadManager *)manager fileSavePath:(NSString *)filePath;

/** 下载失败(错误码) */
- (void)didFailLoadingWithManager:(SDDownloadManager *)manager WithError:(NSError *)errorCode;

@end

@interface SDDownloadManager : NSObject

@property(nonatomic, weak) id <SDDownloadManagerDelegate> delegate;


//定义初始化方法 传入videoUrl参数（NSURL）
- (instancetype)initWithURL:(NSURL *)videoUrl withDelegate:(id)delegate;

/** 开始下载 */
- (void)start;
/** 暂停 */
- (void)suspend;
/** 关闭 */
- (void)cancel;

@end
