//
//  GreetingWrapper.m
//  Cpp-Swift Practice
//
//  Created by denny on 2021/02/26.
//

#import <Foundation/Foundation.h>
#import "GreetingWrapper.h"
#include "Greeting.hpp"

@interface GreetingWrapper()

@property Greeting *cppItem;

@end

@implementation GreetingWrapper
- (instancetype)init
{
    self = [super init];
    self.cppItem = new Greeting();
    return self;
}
- (instancetype)initWithText:(NSString*)text
{
    self = [super init];
    self.cppItem = new Greeting(std::string([text cStringUsingEncoding:NSUTF8StringEncoding]));
    
    return self;
}

- (void)helloWorld
{
    printf("Hello world");
}

- (void)setText:(NSString *)text
{
    self.cppItem->setText(std::string([text cStringUsingEncoding:NSUTF8StringEncoding]));
}

- (NSString *)getText
{
    return [NSString stringWithUTF8String:self.cppItem->getText().c_str()];
}

- (void)setNumber:(int)number
{
    self.cppItem->setNumber(number);
}

- (int)getNumber
{
    return self.cppItem->getNumber();
}
@end
