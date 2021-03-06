//
//  Obstacle.h
//  RobotFactory
//
//  Created by Michael Magnus on 12-01-28.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "GameObject.h"
#import "Robot.h"

@interface Obstacle : GameObject <CCTargetedTouchDelegate>
{
   Obstacle* _buddy;
   
   CCSprite* glow;
   
   CCSprite* zapRight;
   CCSprite* zapLeft;
   
   BOOL _isActive;
}

@property(nonatomic,assign)Obstacle* buddy;
@property(nonatomic,setter = setIsActive:)BOOL isActive;

-(void)didCollideWithRobot:(Robot*)robot;

@end
