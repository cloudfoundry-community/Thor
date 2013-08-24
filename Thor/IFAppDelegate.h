//
//  IFAppDelegate.h
//  Thor
//
//  Created by Scott Densmore on 8/23/13.
//  Copyright (c) 2013 Iron Foundry. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface IFAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
