/*=========================================================================
  Program:   OsiriX

  Copyright (c) OsiriX Team
  All rights reserved.
  Distributed under GNU - GPL
  
  See http://www.osirix-viewer.com/copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.
=========================================================================*/

#import <Cocoa/Cocoa.h>


@interface ArthroplastyTemplatingUserDefaults : NSObject {
	NSMutableDictionary* _dictionary;
}

-(id)init;
-(void)save;
-(BOOL)keyExists:(NSString*)key;
-(BOOL)bool:(NSString*)key otherwise:(BOOL)otherwise;
-(void)setBool:(BOOL)value forKey:(NSString*)key;
-(int)int:(NSString*)key otherwise:(int)otherwise;
-(void)setInt:(int)value forKey:(NSString*)key;
-(float)float:(NSString*)key otherwise:(float)otherwise;
-(void)setFloat:(float)value forKey:(NSString*)key;
-(NSColor*)color:(NSString*)key otherwise:(NSColor*)otherwise;
-(void)setColor:(NSColor*)value forKey:(NSString*)key;
-(NSRect)rect:(NSString*)key otherwise:(NSRect)otherwise;
-(void)setRect:(NSRect)value forKey:(NSString*)key;
+(NSRect)NSRectFromData:(NSData*)data otherwise:(NSRect)otherwise;
-(void)setObject:(id)value forKey:(NSString*)key;
-(id)object:(NSString*)key otherwise:(id)otherwise;

@end
