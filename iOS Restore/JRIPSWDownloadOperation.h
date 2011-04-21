//
//  JRIPSWDownloadOperation.h
//  iOS Restore
//
//  Created by John Heaton on 4/21/11.
//  Copyright 2011 Springfield High School. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JRRestoreOperation.h"


@interface JRIPSWDownloadOperation : JRRestoreOperation {
@private
    NSURL *_ipswURL;
}

- (id)initWithDelegate:(id<JRRestoreOperationDelegate>)delegate ipswURL:(NSURL *)ipswURL;

@end
