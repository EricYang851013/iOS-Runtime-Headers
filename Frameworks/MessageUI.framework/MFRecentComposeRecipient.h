/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFRecentComposeRecipient : MFComposeRecipient {
    CRRecentContact * _recent;
}

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecentContact:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGroup;
- (BOOL)isRemovableFromSearchResults;
- (id)placeholderName;
- (id)preferredSendingAddress;
- (id)recentContact;

@end
