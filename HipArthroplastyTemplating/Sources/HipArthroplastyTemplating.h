//
//  HipArthroplastyTemplating.h
//  HipArthroplastyTemplating
//  Created by Joris Heuberger on 04/04/07.
//  Copyright 2007-2016 OsiriX Team
//  Copyright 2017 volz.io
//

#import <Foundation/Foundation.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#import <OsiriXAPI/PluginFilter.h>
#pragma clang diagnostic pop

@class ArthroplastyTemplatesWindowController;
@class ArthroplastyTemplatingStepsController;
@class ArthroplastyTemplatingUserDefaults;

@interface HipArthroplastyTemplating : PluginFilter

@property (readonly) ArthroplastyTemplatesWindowController *templatesWindowController;

@property (class, readonly) ArthroplastyTemplatingUserDefaults *userDefaults;

+ (HipArthroplastyTemplating *)plugin;

+ (NSString *)findSystemFolderOfType:(OSType)folderType forDomain:(FSVolumeRefNum)domain;

- (ArthroplastyTemplatingStepsController *)windowControllerForViewer:(ViewerController *)viewer;

- (void)showDisclaimer;
- (void)proceedAfterDisclaimer;

+ (void)onMainThreadPerformOrDispatchSync:(void(^)(void))block;

@end
