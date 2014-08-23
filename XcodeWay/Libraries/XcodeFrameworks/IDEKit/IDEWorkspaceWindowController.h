/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSWindowController.h"

#import "DVTEditor-Protocol.h"
#import "DVTStatefulObject-Protocol.h"
#import "DVTTabbedWindowControlling-Protocol.h"
#import "IDEEditorAreaContainer-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class DVTStateToken, DVTTabBarEnclosureView, DVTTabBarView, DVTTabSwitcher, IDEEditorArea, IDEEditorDocument, IDESourceControlWorkspaceUIHandler, IDEWorkspace, IDEWorkspaceTabController, IDEWorkspaceWindow, NSMapTable, NSMutableArray, NSString, NSTimer, _IDEWindowFullScreenSavedDebuggerTransitionValues, _IDEWindowToTabActionForwardingResponder;

@interface IDEWorkspaceWindowController : NSWindowController <NSWindowDelegate, IDEEditorAreaContainer, DVTStatefulObject, DVTTabbedWindowControlling, DVTEditor>
{
    id _contentViewControllerActionForwarder;
    DVTTabBarEnclosureView *tabBarEnclosureView;
    DVTTabBarView *_tabBarView;
    DVTTabSwitcher *tabSwitcher;
    NSTimer *_springToFrontTimer;
    NSString *_uniqueIdentifier;
    int _debugSessionState;
    NSMutableArray *_windowsOrderedOutForMiniDebugging;
    struct CGRect _restoreFrame;
    struct CGRect _windowFrameBeforeFullScreen;
    struct CGSize _originalMinSize;
    struct CGPoint _miniRestoreOrigin;
    struct CGSize _collapsedRestoreSize;
    struct CGSize _mediumRestoreSize;
    double _miniWindowBarHeight;
    double _toolbarHeightDelta;
    struct CGSize _contentViewFrozenSize;
    NSMutableArray *_topLevelViewOrder;
    NSMapTable *_viewHeightsForResizing;
    DVTStateToken *_stateToken;
    NSMutableArray *_stateChangeObservingTokens;
    IDEEditorDocument *_lastObservedEditorDocument;
    IDEWorkspaceTabController *_activeWorkspaceTabController;
    NSString *_titleRepresentedPath;
   // id <DVTObservingToken> _toolbarVisibleToken;
    BOOL _showToolbar;
   // id <DVTObservingToken> _workspaceSimpleFilesFocusedObservingToken;
    IDESourceControlWorkspaceUIHandler *_sourceControlWorkspaceUIHandler;
    IDEWorkspace *_workspace;
    _IDEWindowFullScreenSavedDebuggerTransitionValues *_fullScreenSavedDebuggerTransitionValues;
    unsigned int _coalescedUpdateMask;
    int _contentViewFrozenMode;
    BOOL _performingCoalescedUpdates;
    BOOL _readyToUpdateKeyboardLoop;
    BOOL _tabBarInTransition;
    BOOL _tabBarShownForTabDrag;
    BOOL _keepTabBarHiddenWhenCreatingTab;
    BOOL _createNewTabUponLoadIfNoTabsExist;
    BOOL _inMiniDebuggingMode;
    BOOL _isInMorphingToDebugging;
    BOOL _createdCollapsedRestoreFrame;
    BOOL _createdMediumRestoreFrame;
    BOOL _inTotalCollapsedFrame;
    BOOL _tabBarForcedClosed;
    BOOL _wasShowingNavigatorBeforeMiniDebugging;
    BOOL _wasShowingUtilitiesBeforeMiniDebugging;
    BOOL _wasShowingEditorBeforeMiniDebugging;
    BOOL _isClosing;
    BOOL _toggleFullscreenOnBecomeMain;
    BOOL _enteringFullScreenMode;
    BOOL _exitingFullScreenMode;
    BOOL _fullScreenTabBarAlwaysVisible;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingUserWantsBreakpointsActivated;
+ (long long)version;
+ (id)workspaceWindowControllerForWindow:(id)arg1;
+ (id)workspaceWindowControllers;
- (BOOL)_alwaysShowTabBar;
- (void)_automaticallyHideTabBarForTabDrag;
- (void)_automaticallyShowTabBarForTabDrag;
- (BOOL)_canCloseTab:(id)arg1;
- (BOOL)_canToggleToolbar;
- (void)_cancelCoalescedUpdate:(int)arg1;
- (void)_cancelSpringToFront;
- (void)_changeSizeForSimpleEditorWindowLayoutWithEditorDocumentURLOrNil:(id)arg1 workspaceTabController:(id)arg2;
- (void)_changeToMiniDebugging:(int)arg1;
- (void)_changeToNormalOrXcodeBehindDebugging:(int)arg1;
- (void)_changeWindowsLevelFrom:(int)arg1 to:(int)arg2;
- (void)_closeOtherTabs:(id)arg1;
- (void)_closeOtherTabsWithoutConfirming:(id)arg1;
- (void)_closeTabWithoutConfirming:(id)arg1;
- (void)_closeTabWithoutConfirming:(id)arg1 andInvalidate:(BOOL)arg2;
- (void)_closeWindowIfNoTabs;
- (void)_collectViewInfoForResizing;
- (void)_configureStateSavingObservers;
- (void)_createCollapsedRestoreFrame;
- (id)_createTabWithViewController:(id)arg1 atIndex:(unsigned long long)arg2 andShow:(BOOL)arg3;
- (void)_delayedChangeFromDebugSessionStateAndMode:(id)arg1;
- (void)_didChangeActiveWorkspaceTabController;
- (void)_editorDocumentDirtyStatusDidChange:(id)arg1;
- (void)_editorDocumentHasEditsStatusDidChange:(id)arg1;
- (id)_findTabForView:(id)arg1;
- (BOOL)_isLastWindowControllerOfDocument;
- (BOOL)_isTargetApplicationActive;
- (void)_makeWindowLookKeyWhenKey;
- (struct CGRect)_mediumFrame;
- (BOOL)_moreThanOneTabShowing;
- (void)_morphToCollapsed;
- (void)_morphToMedium:(int)arg1;
- (void)_morphToNonCollapsed:(struct CGRect)arg1 frozenMode:(int)arg2 toolbarHeightDelta:(double)arg3;
- (void)_moveTabToNewWindow:(id)arg1;
- (id)_newTabWithName:(id)arg1 cloneExisting:(BOOL)arg2 andShow:(BOOL)arg3 withInstalledTabControllerBlock:(id)arg4;
- (double)_originalHeightForView:(id)arg1;
- (void)_performCoalescedUpdateSoon:(int)arg1;
- (void)_performCoalescedUpdates;
- (void)_performSpringToFront;
- (void)_prepareBarsToEnterFullScreen;
- (void)_prepareBarsToExitFullScreen;
- (void)_pushDefaultPrimaryEditorFrameSizes;
- (void)_reSnapshotContentViewToNewFrame:(struct CGRect)arg1 hideTabBarBeforeSnapshot:(BOOL)arg2 toolbarHeightDelta:(double)arg3;
- (void)_recordRestoreFrame;
- (void)_recordTabCount;
- (void)_recordWorkspaceWindowCount;
- (void)_revertForNewWindowWithTabStateContext:(id)arg1 documentURL:(id)arg2 simpleEditorWindowLayout:(BOOL)arg3 completionBlock:(id)arg4;
- (void)_scheduleSpringToFront;
- (id)_screenForWindow;
- (void)_selectNextTabGoingForward:(BOOL)arg1;
- (id)_setAutoresizingMasksForOrderedViews:(id)arg1 toResizeOnly:(id)arg2;
- (void)_setInTotalCollapsed:(BOOL)arg1;
- (void)_setTabBarVisible:(BOOL)arg1;
- (void)_setUpTabBar;
- (id)_setUpTabForViewController:(id)arg1;
- (id)_setUpTabForViewController:(id)arg1 addToRightSide:(BOOL)arg2;
- (id)_setUpTabForViewController:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_setupFullScreenNotifications;
- (BOOL)_shouldShowTabBar;
- (id)_showTab:(id)arg1;
- (void)_showTabBarIfNeeded;
- (void)_showWindowBehindWorkspaceWindow:(id)arg1;
- (void)_toggleTabBarWithAnimation:(BOOL)arg1;
- (void)_toggleTabBarWithAnimation:(BOOL)arg1 isShowing:(BOOL)arg2;
- (void)_toggleTabBarWithAnimation:(BOOL)arg1 isShowing:(BOOL)arg2 forceMaintainFullHeight:(BOOL)arg3;
- (id)_uniqueNameForNewWorkspaceTabController;
- (void)_updateFullScreenAuxiliaryToolbarViewSizes;
- (void)_updateTitleRepresentedPath;
- (void)_updateToolbarIsVisible;
- (void)_updateWindowTitle;
- (void)_userWantsAppFocusInMiniDebuggingChanged:(BOOL)arg1;
- (void)_userWantsMiniDebuggingConsoleChanged;
- (BOOL)_windowIsFullHeight;
- (void)_workaround8217584;
- (void)activateWorkspaceTabController:(id)arg1;
@property(readonly) IDEWorkspaceTabController *activeWorkspaceTabController;
- (struct CGRect)adjustedFrameForCascade:(struct CGRect)arg1 fromWindow:(id)arg2;
- (struct CGRect)adjustedFrameForSaving:(struct CGRect)arg1;
- (void)autocreateContexts:(id)arg1;
- (BOOL)canCloseOtherTabs;
- (BOOL)canCloseSelectedTab;
- (BOOL)canCreateNewTab;
- (BOOL)canReceiveDragFromTabbedWindowControlling:(id)arg1;
- (void)cancelUpdateTabTitlesSoon;
- (void)changeFromDebugSessionState:(int)arg1 to:(int)arg2 fromDebuggingWindowBehavior:(int)arg3 to:(int)arg4;
- (void)closeCurrentTab:(id)arg1;
- (BOOL)closeKeyEquivalentClosesTab;
- (void)closeOtherTabs:(id)arg1;
- (void)closeOtherTabsFromMenu:(id)arg1;
- (void)closeTab:(id)arg1;
- (void)closeTabFromMenu:(id)arg1;
- (void)closeTabOrWindow:(id)arg1;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (void)commitStateToDictionary:(id)arg1;
//@property _IDEWindowToTabActionForwardingResponder *contentViewControllerActionForwarder; // @synthesize contentViewControllerActionForwarder=_contentViewControllerActionForwarder;
- (id)createInactiveTab;
- (id)createInactiveTabWithFrameName:(id)arg1;
@property BOOL createNewTabUponLoadIfNoTabsExist; // @synthesize createNewTabUponLoadIfNoTabsExist=_createNewTabUponLoadIfNoTabsExist;
- (id)createTab;
- (id)createTabWithFrameName:(id)arg1;
- (id)createTabWithFrameName:(id)arg1 andShow:(BOOL)arg2 addToRightSide:(BOOL)arg3;
- (id)createTabWithViewController:(id)arg1 andShow:(BOOL)arg2 addToRightSide:(BOOL)arg3;
- (void)dicardEditing;
- (void)didEnterFullScreenMode:(id)arg1;
- (void)didExitFullScreenMode:(id)arg1;
@property(readonly) IDEEditorArea *editorArea;
- (id)init;
- (id)instantiateTabControllerAndRegisterForStateSavingWithName:(id)arg1 inDocument:(id)arg2;
- (BOOL)isInFullScreenMode;
@property(readonly, getter=isInMiniDebuggingMode) BOOL inMiniDebuggingMode; // @synthesize inMiniDebuggingMode=_inMiniDebuggingMode;
- (BOOL)isTabBarVisible;
- (unsigned long long)morphingDragImage:(id)arg1 draggingEntered:(id)arg2;
- (void)morphingDragImage:(id)arg1 draggingExited:(id)arg2;
- (unsigned long long)morphingDragImage:(id)arg1 draggingUpdated:(id)arg2;
- (void)morphingDragImage:(id)arg1 enteredWindow:(id)arg2;
- (void)morphingDragImage:(id)arg1 exitedWindow:(id)arg2;
- (BOOL)morphingDragImage:(id)arg1 performDragOperation:(id)arg2;
- (void)moveFocusToEditor:(id)arg1;
- (void)moveTabFromOtherWindow:(id)arg1 toIndex:(unsigned long long)arg2 andShow:(BOOL)arg3;
- (void)moveTabToNewWindowFromMenu:(id)arg1;
- (void)newTab:(id)arg1;
- (id)newTabWithName:(id)arg1 cloneExisting:(BOOL)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)orderedTabViewItems;
- (void)replaceEmptyTabWithTabs:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)selectNextTab:(id)arg1;
- (void)selectPreviousTab:(id)arg1;
- (void)selectTab:(id)arg1;
- (id)selectedTab;
- (unsigned long long)selectedTabIndex;
- (void)setNextResponder:(id)arg1;
@property BOOL showToolbar; // @synthesize showToolbar=_showToolbar;
@property(copy) NSString *stateSavingWindowFrame;
//@property DVTStateToken *stateToken; // @synthesize stateToken=_stateToken;
//@property DVTTabBarView *tabBarView; // @synthesize tabBarView=_tabBarView;
- (void)setTabBarVisible:(BOOL)arg1;
//@property DVTTabSwitcher *tabSwitcher; // @synthesize tabSwitcher;
@property(copy) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property BOOL userWantsBreakpointsActivated;
- (id)showTabNamed:(id)arg1;
@property(readonly) IDESourceControlWorkspaceUIHandler *sourceControlWorkspaceUIHandler; // @synthesize sourceControlWorkspaceUIHandler=_sourceControlWorkspaceUIHandler;
- (void)synchronizeWindowTitleWithDocumentName;
- (double)tabBarHeight;
- (void)tabBarViewUpdateTabTitlesNow:(id)arg1;
- (void)tabBarViewUpdateTabTitlesSoon:(id)arg1;
- (void)toggleTabBar:(id)arg1;
- (void)toggleToolbarShown:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)willEnterFullScreenMode:(id)arg1;
- (void)willExitFullScreenMode:(id)arg1;
- (BOOL)window:(id)arg1 shouldRestoreStateForResponder:(id)arg2;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowDidLoad;
- (void)windowDidMove:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (BOOL)windowShouldZoom:(id)arg1 toFrame:(struct CGRect)arg2;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (id)workspaceTabControllers;
@property(readonly) IDEWorkspaceWindow *workspaceWindow;
- (BOOL)workspaceWindow:(id)arg1 interceptAddCursorRect:(struct CGRect)arg2 cursor:(id)arg3 forView:(id)arg4;
- (BOOL)workspaceWindow:(id)arg1 interceptSetCursorForMouseLocation:(struct CGPoint)arg2;
- (void)workspaceWindow:(id)arg1 willInvalidateCursorRectsForView:(id)arg2;
- (void)workspaceWindowDidRecalculateKeyViewLoop:(id)arg1;
- (void)workspaceWindowIsClosing:(id)arg1;

@end
