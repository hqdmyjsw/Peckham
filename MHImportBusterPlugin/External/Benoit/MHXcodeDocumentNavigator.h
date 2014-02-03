//
//  Created by Benoît on 11/01/14.
//  Copyright (c) 2014 Pragmatic Code. All rights reserved.
//

#import <Foundation/Foundation.h>

@class IDESourceCodeDocument;

@interface MHXcodeDocumentNavigator : NSObject
+ (id)currentEditor;
+ (IDESourceCodeDocument *)currentSourceCodeDocument;
+ (NSTextView *)currentSourceCodeTextView;
@end