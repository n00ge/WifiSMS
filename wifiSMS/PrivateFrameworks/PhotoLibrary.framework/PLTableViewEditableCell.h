/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UITextField, PLTextView;



@interface PLTableViewEditableCell : UITableViewCell <UITextViewDelegate, UITextFieldDelegate>
{
    PLTextView *_textView;
    UITextField *_textField;
    id _delegate;
    BOOL _forceFirstResponder;
}


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 multiLine:(BOOL)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)forceFirstResponder:(BOOL)arg1;
- (void)layoutSubviews;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (BOOL)isEditing;
- (id)value;
- (void)setPlaceholderText:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)_textFieldChanged;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;

@end
