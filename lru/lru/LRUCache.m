//
//  LRUCache.m
//  lru
//
//  Created by 李应鹏 on 2019/4/18.
//  Copyright © 2019 李应鹏. All rights reserved.
//

#import "LRUCache.h"


@interface ListNode : NSObject

@property (nonatomic, strong) ListNode *pre;
@property (nonatomic, strong) ListNode *next;
@property (nonatomic, strong) UIImage *image;

@end

@implementation ListNode


@end

@interface DoubleLinkList : NSObject

@property (nonatomic, assign) NSInteger totalNum;

@property (nonatomic, strong) ListNode *head;
@property (nonatomic, strong) ListNode *tail;

- (void)addNode:(ListNode *)node;
- (void)removeToHead:(ListNode *)node;
- (void)delete;

@end

@implementation DoubleLinkList

- (void)addNode:(ListNode *)node exist:(BOOL)exist {
    if (!self.head) {
        self.head = node;
        return;
    }
    if (exist) {
        [self moveToHead:node];
    } else {
        ListNode *test = self.head;
        test.next = node;
        node.pre = test;
        self.totalNum++;
    }
    
    while (self.totalNum > 10) {
        [self delete];
    }
}

- (void)visit:(ListNode *)node {
    [self addNode:node exist:YES];
}

- (void)moveToHead:(ListNode *)node {
    ListNode *pre = node.pre;
    pre.next = node.next;
    node.next.pre = pre;
    node.pre = nil;
    node.next = self.head;
    self.head = node;
}

- (void)delete {
    ListNode *node = self.tail;
    self.tail = node.pre;
    node = nil;
    self.totalNum--;
}

@end

@interface LRUCache

@property (nonatomic, strong) DoubleLinkList *linkList;
@property (nonatomic, strong) NSDictionary *hash;

- (void)insert:(UIImage *)image;
- (UIImage *)imageWIthURL:(NSString *)url;

@end

@implementation LRUCache

- (void)insert:(UIImage *)image forURL:(NSString *)url {
    ListNode *node = [ListNode new];
    node.image = image;
    
    [self.linkList addNode:node exist:[self.hash valueForKey:url];
    
    [self.hash setValue:node forKey:url];
}

- (UIImage *)imageWIthURL:(NSString *)url {
    ListNode *node = [self.hash valueForKey:url];
    if (node) {
        [self.linkList visit:[self.hash valueForKey:url]];
    } else {
        return nil;
    }
}

@end


@interface UIImageView (WebImageCache)
@property (nonatomic, strong) LRUCache *cache;
- (void)setImageWithURL:(NSURL *)url;
@end

//  UIImageView+WebImageCache.m
#import "UIImageView+WebImageCache.h"

@implementation UIImageView (WebImageCache)

- (void)setImageWithURL:(NSURL *)url {
    if ([self.cache imageWithUrl]) {
        self.image = [self.cache imageWithUrl];
    } else {
        [self downloadImageFromRemote:url];
    }
}

- (void)downloadImageFromRemote:(NSString *)url {
    if (url.length <= 0) {
        !complete ?: complete(nil);
        return;
    }
    
    NSURLSession *session = [NSURLSession sharedSession];
    NSURLRequest *request = [[NSMutableURLRequest alloc] initWithURL:[NSURL URLWithString:url]];
    
    NSURLSessionDataTask *task = [session dataTaskWithRequest:request];
    [task resume];
}

- (void)URLSession:(NSURLSession *)session
              task:(NSURLSessionTask *)task
didCompleteWithError:(NSError *)error
{
    [_outputStream close];
    @synchronized(self) {
        self.dataTask = nil;
    }
    NSString *path = [self fileFullPathWithURL:task.currentRequest.URL];
    if (!error) {
        self.image = [UIImage imageWithPath:path];
        [self.cache insert:image];
    }
}

@end
