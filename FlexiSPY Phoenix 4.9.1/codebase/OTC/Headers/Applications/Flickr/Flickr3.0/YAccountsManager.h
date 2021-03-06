/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import <XXUnknownSuperclass.h> // Unknown library

@class UIViewController, NSURL, NSDictionary, NSString, NSObject, YAccountsAnalytics, YAccountsCacheableImageStorage, YAccountsURLBuilder, YAccountsUser, YAccountsRotatingNavigationController, NSMutableDictionary, NSArray, YAccountsSSONavigationController;
@protocol YAccountsManagerDelegate, OS_dispatch_group, RTSProfileHandleMethods, RTSLoginHandleMethods, YAccountsSignInPresenter;

@interface YAccountsManager : NSObject { //XXUnknownSuperclass {
@private
	BOOL mAutoSignInFail;
	BOOL _deleteAccount;
	BOOL _enableRetryNewCodeInAnswerVC;
	BOOL _isAccountsUIPresenting;
//	id<RTSProfileHandleMethods> mProfileHandle;
//	id<RTSLoginHandleMethods> mLoginHandle;
//	YAccountsUser* mCurrentUser;
//	NSMutableDictionary* mMutableLoggedInUsers;
//	NSMutableDictionary* mMutableOrphanedUsers;
//	YAccountsAnalytics* mAnalytics;
//	YAccountsSSONavigationController* mNavController;
//	UIViewController* mAppRootViewController;
//	NSArray* mAuthUsers;
//	YAccountsURLBuilder* _urlBuilder;
//	id<YAccountsManagerDelegate> _delegate;
	NSString* _src;
	NSString* _srcv;
	NSString* _appsrc;
	NSString* _appsrcv;
	int _signInType;
	NSString* _env;
	NSDictionary* _properties;
//	UIViewController* _hostViewController;
//	YAccountsCacheableImageStorage* _cachableImageStorage;
//	NSDictionary* _signInPromptMessages;
//	NSString* _unknownErrorText;
//	NSString* _answer;
//	int _secondLoginChallengeCodeSentResult;
//	NSString* _signInModeStr;
//	id<YAccountsSignInPresenter> _signInPresenter;
//	id<YAccountsSignInPresenter> _upgradePresenter;
//	YAccountsRotatingNavigationController* _secondLoginChallengeNavController;
	NSURL* _fallbackSignInURL;
	NSURL* _fallbackSignUpURL;
	NSURL* _fallbackForgotPasswordURL;
	NSURL* _fallbackForgotIDURL;
//	NSObject<OS_dispatch_group>* _dispatch_group;
	NSDictionary* _signInWithAuthError;
	NSString* _provider;
}
@property(retain, nonatomic) NSString* provider;
@property(retain, nonatomic) NSDictionary* signInWithAuthError;
//@property(retain, nonatomic) NSObject<OS_dispatch_group>* dispatch_group;
//@property(retain, nonatomic) NSURL* fallbackForgotIDURL;
//@property(retain, nonatomic) NSURL* fallbackForgotPasswordURL;
//@property(retain, nonatomic) NSURL* fallbackSignUpURL;
//@property(retain, nonatomic) NSURL* fallbackSignInURL;
//@property(retain, nonatomic) YAccountsRotatingNavigationController* secondLoginChallengeNavController;
//@property(retain, nonatomic) YAccountsSSONavigationController* navController;
//@property(readonly, assign, nonatomic) UIViewController* viewControllerForAppToPresent;
//@property(retain, nonatomic) id<YAccountsSignInPresenter> upgradePresenter;
//@property(retain, nonatomic) id<YAccountsSignInPresenter> signInPresenter;
@property(assign, nonatomic) BOOL isAccountsUIPresenting;
@property(retain, nonatomic) NSString* signInModeStr;
@property(assign, nonatomic) BOOL enableRetryNewCodeInAnswerVC;
@property(assign, nonatomic) int secondLoginChallengeCodeSentResult;
@property(retain, nonatomic) NSString* answer;
@property(retain, nonatomic) NSString* unknownErrorText;
//@property(readonly, assign, nonatomic) YAccountsRotatingNavigationController* topNavController;
//@property(readonly, assign, nonatomic) YAccountsURLBuilder* urlBuilder;
//@property(retain, nonatomic) NSDictionary* signInPromptMessages;
//@property(assign, nonatomic, getter=isDeleteAccount) BOOL deleteAccount;
@property(retain, nonatomic) NSArray* authUsers;
//@property(assign, nonatomic, getter=isAutoSignInFail) BOOL autoSignInFail;
//@property(retain, nonatomic) YAccountsCacheableImageStorage* cachableImageStorage;
//@property(assign, nonatomic) __weak UIViewController* hostViewController;
//@property(retain, nonatomic) UIViewController* appRootViewController;
//@property(retain, nonatomic) id<RTSLoginHandleMethods> loginHandle;
//@property(retain, nonatomic) NSMutableDictionary* mutableOrphanedUsers;
//@property(retain, nonatomic) NSMutableDictionary* mutableLoggedInUsers;
//@property(retain, nonatomic) id<RTSProfileHandleMethods> profileHandle;
//@property(copy, nonatomic) NSDictionary* properties;
//@property(copy, nonatomic) NSString* env;
//@property(assign, nonatomic) int signInType;
//@property(retain, nonatomic) YAccountsAnalytics* analytics;
//@property(copy, nonatomic) NSString* appsrcv;
//@property(copy, nonatomic) NSString* appsrc;
//@property(copy, nonatomic) NSString* srcv;
//@property(copy, nonatomic) NSString* src;
//@property(retain, nonatomic) id<YAccountsManagerDelegate> delegate;
@property(readonly, assign, nonatomic) NSDictionary* orphanedUsers;
@property(readonly, assign, nonatomic) NSDictionary* loggedInUsers;
@property(retain, nonatomic) YAccountsUser* currentUser;
+(void)setupWithConfig:(id)config analytics:(id)analytics user:(id)user token:(id)token;
+(void)setupWithConfig:(id)config analytics:(id)analytics;
+(void)setupWithAnalytics:(id)analytics user:(id)user token:(id)token;
+(void)setupWithAnalytics:(id)analytics;
+(void)setSupportedInterfaceOrientationMask:(unsigned)mask;
+(id)sharedManager;
+(void)initialize;
//-(void).cxx_destruct;
-(void)handleSignInAuthError:(id)authError;
-(void)setCookieDefenderDisabled:(BOOL)disabled completion:(id)completion;
-(void)enableCookieDefenderWithCompletion:(id)completion;
-(void)disableCookieDefenderWithCompletion:(id)completion;
-(BOOL)shouldExchangeYIDWithScreenName;
-(void)setForLoginServiceUsername:(id)loginServiceUsername password:(id)password;
-(void)applicationWillEnterForeground;
-(void)dismiss2LCUI;
-(void)show2LCUIWithVC:(id)vc animated:(BOOL)animated;
-(void)determin2LCBackButton:(id)button;
-(id)buildTokenHandoffContainerWithViewController:(id)viewController;
-(void)show3PAMigratorWithParty:(id)party;
-(id)buildGenericHandoffViewControllerWithURL:(id)url title:(id)title class:(Class)aClass signUpMode:(int)mode completeBlock:(id)block cancelBlock:(id)block6;
-(id)buildSignUpViewControllerWithURL:(id)url title:(id)title signUpMode:(int)mode completeBlock:(id)block cancelBlock:(id)block5;
-(void)showSignUpWithURL:(id)url signUpMode:(int)mode title:(id)title;
-(void)showSignUpWithURL:(id)url signUpMode:(int)mode;
-(void)showWebSignInWithUserName:(id)userName signinURL:(id)url cookies:(id)cookies type:(id)type;
-(void)showAccountUpgradeWithUserName:(id)userName progressiveRegistrationURL:(id)url cookies:(id)cookies;
-(void)showSignUp;
-(BOOL)requireProgressiveRegistration;
-(void)showSSO:(id)sso;
-(void)showAccountRecoveryForUsername:(id)username;
-(void)showUnlockForUsername:(id)username onUnlock:(id)unlock;
-(void)showSignInEnableBack:(BOOL)enableBack fadeAnimation:(BOOL)animation;
-(void)showSignInEnableBack:(BOOL)enableBack;
-(void)showNormalPasswordVCWithUsername:(id)username;
-(id)buildNormalPasswordVCWithUsername:(id)username;
-(id)build2LCPasswordVCWithUserName:(id)userName;
-(id)build2LCAnswerVC:(id)vc method:(id)method;
-(id)build2LCQuestionVC:(id)vc;
-(id)build2LCChannelVC:(id)vc;
-(id)build2LCNavControllerWithRootVC:(id)rootVC;
-(id)buildSignInViewController;
-(id)buildSSOViewController;
-(void)appDidCancelSignIn;
-(void)dismissAccountsUIWithUser:(id)user animated:(BOOL)animated;
-(void)presentAccountsUI;
-(void)refreshAllUsers;
-(void)showFallbackAlertDone:(id)done;
-(void)showAlertViewOnHandoffFailureDone:(id)done;
-(BOOL)isSignInVC:(id)vc;
-(BOOL)isPasswordVC:(id)vc;
-(void)setEnableBackButtonInActiveSignInUI:(BOOL)ui;
-(void)updateCancelButtonInActiveSignInUI;
-(BOOL)shouldEnableCancelButton;
-(void)updateAccountsInActiveUI;
-(void)cancel2ndLoginChallenge;
-(id)getUserFromUserID:(id)userID;
-(id)refreshAuthUsers:(id)users;
-(unsigned)normalizedErrorcodeForYWA:(unsigned)ywa;
-(BOOL)isEnableRetryNewCodeOnActiveChannel:(unsigned)channel;
-(void)logSignInEventByMethod:(id)eventByMethod errorCode:(unsigned)code numberOfAccounts:(unsigned)accounts;
-(void)logSignOutEventByMethod:(id)method errorCode:(unsigned)code;
-(void)setupLoginUIWatcher;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)showSignInOrSSO;
-(void)showSessionExpiredAlertView;
-(void)setupLoginSessionWatcher;
-(void)showDefaultZeroTapUIWithHostViewController:(id)hostViewController;
-(void)upgradeUser:(id)user hostViewController:(id)controller;
-(void)upgradeCurrentUserWithHostViewController:(id)hostViewController;
-(void)signUpWithHostViewController:(id)hostViewController;
-(void)startTokenHandoffWithURL:(id)url hostViewController:(id)controller completion:(id)completion;
-(void)internalStartTokenHandoffWithURL:(id)url hostViewController:(id)controller class:(Class)aClass signUpMode:(int)mode completion:(id)completion;
-(void)refreshCookiesSuccessBlock:(id)block failureBlock:(id)block2;
-(void)signOutUser:(id)user removeFromDevice:(BOOL)device userInitiated:(BOOL)initiated completion:(id)completion;
-(void)signOutFromDevice;
-(void)signOutFromAppUserInitiated:(BOOL)appUserInitiated;
-(void)signInWithPresenter:(id)presenter;
-(void)dispatchMainQueueInGroupNotify:(id)groupNotify block:(id)block;
-(void)dispatchMainQueue:(id)queue AfterDelay:(double)delay;
-(void)dispatchMainQueue:(id)queue;
-(void)signInWithShowBlock:(id)showBlock dismissBlock:(id)block;
-(void)signInWithHostViewController:(id)hostViewController;
-(void)dealloc;
-(id)init;
@end

