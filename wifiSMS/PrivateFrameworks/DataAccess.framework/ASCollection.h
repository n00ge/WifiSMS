/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSArray, NSString, NSNumber, ASFolderItemsSyncResponse;



@interface ASCollection : ASItem 
{
    NSInteger _collectionClassType;
    NSString *_syncKey;
    NSString *_collectionId;
    NSNumber *_status;
    NSNumber *_moreAvailable;
    NSArray *_changedItems;
    NSArray *_responseItems;
    ASFolderItemsSyncResponse *_parentResponse;
    NSInteger _sniffableType;
    BOOL _checkedShouldSniffInvites;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;

- (id)init;
- (void)dealloc;
- (void)setParentResponse:(id)arg1;
- (NSInteger)collectionClassType;
- (void)setCollectionClassTypeString:(id)arg1;
- (id)changedItems;
- (void)setChangedItems:(id)arg1;
- (id)responseItems;
- (void)setResponseItems:(id)arg1;
- (id)asParseRules;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (NSInteger)sniffableTypeForAccount:(id)arg1;
- (id)syncKey;
- (void)setSyncKey:(id)arg1;
- (id)collectionId;
- (void)setCollectionId:(id)arg1;
- (id)status;
- (void)setStatus:(id)arg1;
- (id)moreAvailable;
- (void)setMoreAvailable:(id)arg1;
- (id)description;

@end
