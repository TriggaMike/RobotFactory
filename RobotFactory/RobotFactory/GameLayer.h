//
//  GameLayer.h
//  RobotFactory
//
//  Created by Michael Magnus on 12-01-28.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "CollisionLayer.h"
#import "RobotDelegate.h"

#define Z_BACKGROUND 1
#define Z_COLLISION 2
#define Z_MIDDLE 3
#define Z_HUD 6
#define Z_ASSEMBLER 5
#define Z_FOREGROUND 4

@interface GameLayer : CCLayer <CCTargetedTouchDelegate,RobotDelegate>
{
   CollisionLayer* _topLayer;
   CollisionLayer* _bottomLayer;
   
   CCSprite* _topAssembler;
   CCSprite* _topAssemblerJaw;
   CCSprite* _bottomAssembler;
   CCSprite* _bottomAssemblerJaw;
   
   BOOL gamePaused;
   CCSprite* pauseOverlay;
   CCSprite* intro;
   CCMenuItemImage *pauseButton;
   
   int levelIndex;
}

+(id) sceneWithIndex:(int)level;

-(id)initWithIndex:(int)level;
-(void)addTeslaTopPosition:(CGPoint)topPos bottomPosition:(CGPoint)botPos topActive:(BOOL)ta;
-(void)addWallTopPosition:(CGPoint)topPos bottomPosition:(CGPoint)botPos topActive:(BOOL)ta;

-(void)update:(ccTime)dt;

-(void)winGame;

-(void)loadAnimations;

@end
