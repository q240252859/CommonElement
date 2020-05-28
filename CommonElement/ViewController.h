//
//  ViewController.h
//  CommonElement
//
//  Created by 熊彬 on 16/6/2.
//  Copyright © 2016年 熊彬. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import "BinWebViewProtocol.h"

@interface ViewController : UIViewController<WKNavigationDelegate,WKUIDelegate>

@property (nonatomic) UIView <BinWebViewProtocol> *webView;

@end

