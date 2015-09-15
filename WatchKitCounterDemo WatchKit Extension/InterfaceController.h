//
//  InterfaceController.h
//  WatchKitCounterDemo WatchKit Extension
//
//  Created by Thai, Kristina on 12/10/14.
//  Copyright (c) 2014 Kristina Thai. All rights reserved.
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#include <AudioToolbox/AudioToolbox.h>
@interface InterfaceController : WKInterfaceController
{
    AVAudioPlayer *myAudioPlayer;
}
@property (nonatomic, retain) AVAudioPlayer *myAudioPlayer;
@property (weak, nonatomic) IBOutlet WKInterfaceLabel *counterLabel;
@property (weak, nonatomic) IBOutlet WKInterfaceLabel *savedNotificationLabel;

@end
