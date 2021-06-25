#import <Foundation/Foundation.h>
#import <Mixpanel/Mixpanel.h>

@import Segment;

@interface SEGMixpanelIntegration : NSObject <SEGIntegration>

@property (nonatomic, strong) NSDictionary *settings;
@property (nonatomic, strong) Mixpanel *mixpanel;

- (instancetype)initWithSettings:(NSDictionary *)settings andMixpanel:(Mixpanel *)mixpanel;

- (instancetype)initWithSettings:(NSDictionary *)settings andLaunchOptions:(NSDictionary *)launchOptions;

@end
