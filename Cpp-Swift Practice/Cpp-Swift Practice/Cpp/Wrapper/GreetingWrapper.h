//
//  GreetingWrapper.h
//  Cpp-Swift Practice
//
//  Created by denny on 2021/02/26.
//

#import <Foundation/Foundation.h>
#ifndef GreetingWrapper_h
#define GreetingWrapper_h

@interface GreetingWrapper : NSObject
- (instancetype)initWithText:(NSString*)text;
- (void)helloWorld;

- (void)setText:(NSString*)text;
- (NSString*)getText;

- (void)setNumber:(int)number;
- (int)getNumber;
@end

#endif /* GreetingWrapper_h */
