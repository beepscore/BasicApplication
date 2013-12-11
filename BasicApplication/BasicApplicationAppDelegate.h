//
//  BasicApplicationAppDelegate.h
//  BasicApplication
//
//  Created by Steve Baker on 3/28/11.
//  Copyright 2011 Beepscore LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BasicApplicationAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, strong) IBOutlet UIWindow *window;

@property (nonatomic, strong, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, strong, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@property (nonatomic, strong) IBOutlet UINavigationController *navigationController;

@end
