//
//  AppDelegate.h
//  Root_App
//
//  Created by BRIJESH KUMAR on 09/04/1939 IST.
//  Copyright © 1939 Saka EpikSolutions. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import <GoogleSignIn/GoogleSignIn.h>
#import <UserNotifications/UserNotifications.h>
#import "FirstViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, GIDSignInDelegate,UNUserNotificationCenterDelegate>
 


@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


//@property (readonly, strong) NSPersistentContainer *persistentContainer;

//- (void)saveContext;
@property(strong,nonatomic) FirstViewController *frontViewController;


@end

