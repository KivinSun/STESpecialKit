//
//  Target_Special.h
//  FlowerField
//
//  Created by Steven on 2019/4/8.
//  Copyright © 2019年 Triangle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <STESpecialKit/STESpecialKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface Target_Special : NSObject
- (UIViewController*)Action_specialDetailViewController:(NSDictionary*)params;
- (NSDictionary*)Action_specialReformerWithOriginData:(NSDictionary*)params;
- (NSDictionary *)Action_specialReformer:(NSDictionary*)params;
- (APIRequest*)Action_specialAPIRequest:(NSDictionary*)params;

@end

NS_ASSUME_NONNULL_END
