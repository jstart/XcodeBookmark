//
//  IDEWorkspaceWindowController.h
//  Tuna
//
//  Created by Toshihiro Morimoto on 3/11/15.
//  Copyright (c) 2015 Toshihiro Morimoto. All rights reserved.
//

#import <Foundation/Foundation.h>

@class IDEEditorArea;

@interface IDEWorkspaceWindowController : NSWindowController

@property(readonly) IDEEditorArea *editorArea;

@end