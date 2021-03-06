//
//  IDEBreakpointManager.h
//  Tuna
//
//  Created by Toshihiro Morimoto on 3/11/15.
//  Copyright (c) 2015 Toshihiro Morimoto. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IDEBreakpointManager : NSObject

@property(copy) NSArray *breakpoints;

- (id)fileBreakpointAtDocumentLocation:(id)arg1;
- (id)createFileBreakpointAtDocumentLocation:(id)arg1;
- (void)removeBreakpoint:(id)arg1;

@end