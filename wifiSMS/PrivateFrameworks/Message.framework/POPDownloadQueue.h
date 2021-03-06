/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSDate, SqliteMessageIDStore, MailboxUid, MessageLibrary;



@interface POPDownloadQueue : BufferedMessageQueue 
{
    SqliteMessageIDStore *_uidStore;
    MessageLibrary *_library;
    MailboxUid *_mailbox;
    NSDate *startDate;
}


- (id)init;
- (BOOL)addItem:(id)arg1;
- (BOOL)handleItems:(id)arg1;
- (void)dealloc;

@end
