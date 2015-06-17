//
//  FactBook.h
//  simpleIphoneApp
//
//  Created by Cody Zazulak on 2015-06-16.
//  Copyright (c) 2015 Cody Zazulak. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *)randomFact;

@end
