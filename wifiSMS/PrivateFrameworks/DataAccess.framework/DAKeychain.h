/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */



@interface DAKeychain : NSObject 
{
}

+ (id)sharedKeychain;

- (BOOL)saveKeychainInformationsForURL:(id)arg1 andPassword:(id)arg2;
- (id)loadKeychainInformationsForURL:(id)arg1;
- (void)removeKeychainInformationsForURL:(id)arg1;
- (id)guessPasswordForURL:(id)arg1;

@end
