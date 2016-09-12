//
//  ViewController.m
//  测试web缓存
//
//  Created by Dingjz on 16/6/17.
//  Copyright © 2016年 Dingjz. All rights reserved.
//

#import "ViewController.h"
#import "WebCache.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {

    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    UIWebView *web = [[UIWebView alloc] initWithFrame:self.view.frame];
    WebCache *cache = [[WebCache alloc] initWithMemoryCapacity:1024 diskCapacity:1024*10 diskPath:nil cacheTime:60*60];
    NSURLRequest *request = [NSURLRequest requestWithURL:[NSURL URLWithString:@"http://120.26.127.134/standard_module/main?xwl=23ZL48871OEQ&id=581ae618c91e48cc8f78807e5ab63196"]];
    [cache dataFromRequest:request complete:^(NSCachedURLResponse *cacheResponse) {
        NSLog(@"%@", cacheResponse);
    }];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
