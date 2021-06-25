#import <Foundation/Foundation.h>

@import Segment;

@interface SEGMixpanelIntegrationFactory : NSObject <SEGIntegrationFactory>

+ (instancetype)instance;
+ (instancetype)createWithLaunchOptions:(NSString *)token launchOptions:(NSDictionary *)launchOptions;

@property NSDictionary *launchOptions;

@end

